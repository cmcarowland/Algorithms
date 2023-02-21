# Fill the Matrix

Given a matrix with dimensions N x M, entirely filled with zeroes except for one position at co-ordinates X and Y containing '1'. Find the minimum number of iterations in which the whole matrix can be filled with ones.
Note: In one iteration, '1' can be filled in the 4 neighbouring elements of a cell containing '1'.

**Your Task:**

You don't need to read input or print anything. Your task is to complete the function minIterations() which takes the dimensions of the matrix N and M and the co-ordinates of the initial position of '1' ie X and Y as input parameters and returns the minimum number of iterations required to fill the matrix.


Expected Time Complexity: O(N*M)

Expected Auxiliary Space: O(1)


**Constraints:**

1 ≤ N, M ≤ 10<sup>3</sup>

1 ≤ X ≤ N

1 ≤ Y ≤ M