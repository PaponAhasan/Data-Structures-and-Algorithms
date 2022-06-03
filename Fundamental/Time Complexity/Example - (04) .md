```c++
01.

void Test(int n){ --------------------- T(n)
    if (n > 0) { ---------------------- 1
       for (int i = 1; j <= n; i++) --- n+1
           printf("%d ",i); ----------- n
       }    
       Test(n-1) ---------------------- T(n-1)   
}
```
```
T(n) = T(n-1) + 2n + 2
     = T(n-1) + n

So, Recurrence Relation :
                { 1               n = 0
        T(n) =  {
                { T(n-1) +  n     n > 0
                
                T(n)
               /    \ 
              n   T(n-1)
                   /     \
                 (n-1)  T(n-2)
                        /     \
                      (n-2)  T(n-3)
                                 \
                                  \
                                 T(2)
                                /   \
                               2  T(1)
                                   /   \
                                  1  T(0)
                                      |
                                      x
   
  
     n + (n-1) + (n-3) .... 2 + 1    
   = [ n + (n-1) + (n-2) + 2 + 1 ]
   = (n*(n+1))/2
   
   So, Time Complexity is O(n^2)
```
```c++
02.

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
                                        |
                                        x
   
  
   log n + log (n-1) + log(n-3) .... log 2 + log 1    
   = log [ n * (n-1) * (n-2) * 2 * 1 ]
   = log n!
   
   So, Time Complexity is O(n log n)
```
