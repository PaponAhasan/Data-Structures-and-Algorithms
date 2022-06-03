```c++
01.

void Test(int n){ --------------------- T(n)
    if (n > 0) { ---------------------- 1
       for (int i = 1; j <= n; i*=2) 
           printf("%d ",i); ----------- log n
       }    
       Test(n-1) ---------------------- T(n-1)   
}
```
```
T(n) = T(n-1) + log n

So, Recurrence Relation :
                { 1                n = 0
        T(n) =  {
                { T(n-1) + log n   n > 0
                
                T(n)
               /    \ 
            log n   T(n-1)
                   /     \
               log(n-1)  T(n-2)
                        /     \
                    log(n-2)  T(n-3)
                                 \
                                  \
                                 T(2)
                                /   \
                             log 2  T(1)
                                   /   \
                                log 1  T(0)
   
  
   log n + log (n-1) + log(n-3) .... log 2 + log 1    
   = log [ n * (n-1) * (n-2) * 2 * 1 ]
   = log n!
```
