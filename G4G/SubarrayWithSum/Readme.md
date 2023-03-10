# Subarray with given sum

Given an unsorted array A of size N that contains only non-negative integers, find a continuous sub-array that adds to a given number S and return the left and right index(1-based indexing) of that subarray.

In case of multiple subarrays, return the subarray indexes which come first on moving from left to right.

Note:- You have to return an ArrayList consisting of two elements left and right. In case no such subarray exists return an array consisting of element -1.

**Your Task:**

You don't need to read input or print anything. The task is to complete the function subarraySum() which takes arr, N, and S as input parameters and returns an ArrayList containing the starting and ending positions of the first such occurring subarray from the left where sum equals to S. The two indexes in the array should be according to 1-based indexing. If no such subarray is found, return an array consisting of only one element that is -1.

 

Expected Time Complexity: O(N)

Expected Auxiliary Space: O(1)

 

**Constraints:**

1 <= N <= 10<sup>5</sup>

1 <= Ai <= 10<sup>9</sup>