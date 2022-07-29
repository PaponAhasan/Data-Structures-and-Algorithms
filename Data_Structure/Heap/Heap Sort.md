<details> <summary>  Heap Sort </summary>
 
<br/>
 
 ```
 Sort elements of array Arr in ascending order. We can use max heap to perform this operation.
 ```
 
 <details> <summary>  Implementation </summary>
  
  <br/>
  
  ```c++
     void max_heapify (int Arr[ ], int i, int N)
     {
       int left = 2*i                //left child
       int right = 2*i +1           //right child
       if(left<= N and Arr[left] > Arr[i] )
             largest = left;
       else
            largest = i;
       if(right <= N and Arr[right] > Arr[largest] )
           largest = right;
       if(largest != i )
       {
           swap (Ar[i] , Arr[largest]);
           max_heapify (Arr, largest,N);
       } 
    }
  
    void build_maxheap (int Arr[ ])
    {
        for(int i = N/2 ; i >= 1 ; i-- )
        {
            max_heapify (Arr, i) ;
        }
    }
  
    void heap_sort(int Ar[ ])
    {
      int heap_size = N;
      build_maxheap(Arr);
      for(int i = N; i>=2 ; i-- )
      {
          swap|(Arr[ 1 ], Arr[ i ]);
          heap_size = heap_size-1;
          max_heapify(Arr, 1, heap_size);
      }
    }
  ```
  
  </details>
  
   <details> <summary>  Complexity </summary>
  
   <br/>
    
    - Max_heapify has complexity O(logN) [max_heapify N-1 times in heap_sort function],
    - Build_maxheap has complexity O(N) and
    Therefore complexity of heap_sort function is O(N logN).
    
   </details>
  
   <details> <summary>  Code </summary>
      
   <br/>
     https://ideone.com/bfilRR
   </details>
 
 </details>
 
