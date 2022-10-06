## How does it work?

Binary Search maintains the left, right, and middle indicies of the search space and compares the search target or applies the search condition to the middle value of the collection; if the condition is unsatisfied or values unequal, the half in which the target cannot lie is eliminated and the search continues on the remaining half until it is successful. If the search ends with an empty half, the condition cannot be fulfilled and target is not found.

In the following blog, we will review how to identify Binary Search problems, reasons why we use Binary Search, and the 3 different Binary Search templates.

👉 [Binary Search](https://leetcode.com/explore/learn/card/binary-search/138/background/1038/)

## Template I

Template #1 is the most basic and elementary form of Binary Search. Template #1 is used to search for an element or condition which can be determined by accessing a single index in the array. Search Condition can be determined without comparing to the element's neighbors. You are checking to see if the element has been found. If you reach the end, then you know the element is not found.

```c++
int binarySearch(vector<int>& nums, int target){
  if(nums.size() == 0)
    return -1;

  int left = 0, right = nums.size() - 1;
  while(left <= right){
    // Prevent (left + right) overflow
    int mid = left + (right - left) / 2;
    if(nums[mid] == target){ return mid; }
    else if(nums[mid] < target) { left = mid + 1; }
    else { right = mid - 1; }
  }

  // End Condition: left > right
  return -1;
}
```

🥇Initial Condition: left = 0, right = length-1
🥈Termination: left > right
🥉Searching Left: right = mid-1
 Searching Right: left = mid+1


