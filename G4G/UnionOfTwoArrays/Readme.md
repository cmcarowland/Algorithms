# Union of two arrays

Given two arrays a[] and b[] of size n and m respectively. The task is to find the number of elements in the union between these two arrays.

Union of the two arrays can be defined as the set containing distinct elements from both the arrays. If there are repetitions, then only one occurrence of element should be printed in the union.

Note : Elements are not necessarily distinct.

**Your Task:**

Complete doUnion funciton that takes a, n, b, m as parameters and returns the count of union elements of the two arrays. The printing is done by the driver code.

**Constraints:**

1 ≤ n, m ≤ 10<sup>5</sup>
0 ≤ a[i], b[i] < 10<sup>5</sup>

Expected Time Complexity : O((n+m)log(n+m))

Expected Auxilliary Space : O(n+m)