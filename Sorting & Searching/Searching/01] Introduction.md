# Search Algorithms

Searching is a common problem asked in programming. The most naive way of performing searches would be linear search. Here, we 
introduce two faster searching algorithms :

- Binary Search and
- Ternary Search


## Binary Search

Binary search is an efficient algorithm for finding an item from a sorted list of items. Binary Search is used to search in sorted
values in logarithmic time. It works by repeatedly dividing in half the portion of the list. You may binary search the answer over 
the possible range [1,2e9]

```c++
int firstOccurrence(vector<int>& arr, int n, int k){

    int left = 0, right = n - 1, ans = -1;

    while(left <= right){
    
        int mid = left + (right - left)/2;
        
        if(arr[mid] == k){
            ans = mid;
            right = mid - 1;
        }
        else if(arr[mid] < k){
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }
    
    return ans;
}
```
```c++
int lastOccurrence(vector<int>& arr, int n, int k){

    int left = 0, right = n - 1, ans = -1;

    while(left <= right){
        int mid = left + (right - left)/2;

                
        if(arr[mid] == k){
            ans = mid;
            left = mid + 1;
        }
        else if(arr[mid] < k){
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }
    
    return ans;
}
```

```c++
    int upperBound(vector<int>& arr, int n, int target){
        int s = 0, e = n - 1;
        while(s <= e){
            int m = s + (e - s)/2;

            if(arr[m] <= target){
                s = m + 1;
            }
            else{
                e = m - 1;
            }
        }
        return s;
    }
```

<details> <summary> Try Problem </summary>

 <br/>
  
[C. Maximum Median](https://codeforces.com/contest/1201/problem/C)

![image](https://user-images.githubusercontent.com/59710234/158400788-ef8cbbc6-a6b6-483d-9667-41e5f366a67d.png)
  
[Solution Code](https://ideone.com/LeqozV)  
  
</details>
  
### Problems
* [Codeforces 706B](https://codeforces.com/problemset/problem/706/B)
* [Codeforces 1187B](https://codeforces.com/contest/1187/problem/B)
* [Codeforces 1208B](https://codeforces.com/contest/1208/problem/B)
* [Codeforces 812C](https://codeforces.com/contest/812/problem/C)
* [Codeforces 269B](https://codeforces.com/contest/269/problem/B)
* [Codeforces 118D2](https://codeforces.com/contest/1118/problem/D2)
* [NeetCode](https://www.youtube.com/watch?v=U8XENwh8Oy8&list=PLot-Xpze53leNZQd0iINpD-MAhMOMzWvO&ab_channel=NeetCode)
- [mycodeschool](https://www.youtube.com/watch?v=j5uXyPJ0Pew&list=PL2_aWCzGMAwL3ldWlrii6YeLszojgH77j)
