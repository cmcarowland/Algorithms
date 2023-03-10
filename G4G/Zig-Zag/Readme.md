# Create Array into Zig-Zag

Given an array arr of distinct elements of size N, the task is to rearrange the elements of the array in a zig-zag fashion so that the converted array should be in the below form: 

**arr[0] < arr[1]  > arr[2] < arr[3] > arr[4] < . . . . arr[n-2] < arr[n-1] > arr[n].** 

NOTE: If your transformation is correct, the output will be 1 else the output will be 0. 

**Your Task:**

You don't need to read input or print anything. Your task is to complete the function zigZag() which takes the array of integers arr and n as parameters and returns void. You need to modify the array itself.


Expected Time Complexity: O(N)

Expected Auxiliary Space: O(1)

**Constraints:**

1 <= N <= 10<sup>6</sup>

0 <= Arri <= 10<sup>9</sup>