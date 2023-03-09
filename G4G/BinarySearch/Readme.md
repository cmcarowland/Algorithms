Given a sorted array of size N and an integer K, find the position at which K is present in the array using binary search.

**Your Task:**

You dont need to read input or print anything. Complete the function binarysearch() which takes arr[], N and K as input parameters and returns the index of K in the array. If K is not present in the array, return -1.


Expected Time Complexity: O(LogN)

Expected Auxiliary Space: O(LogN) if solving recursively and O(1) otherwise.


**Constraints:**

1 <= N <= 10<sup>5</sup>

1 <= arr[i] <= 10<sup>6</sup>

1 <= K <= 10<sup>6</sup>