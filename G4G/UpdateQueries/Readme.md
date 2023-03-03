# Update Queries

You are given an array of n elements, initially all a[i] = 0. Q queries need to be performed. Each query contains three integers l, r, and x  and you need to change all a[i] to (a[i] | x) for all l ≤ i ≤ r.

Return the array after executing Q queries.

**Your Task:**

You don't need to read input or print anything. Your task is to complete the function updateQuery() which takes the integer N,Q, and U a QX3 matrix containing the Q queries where U[i][0] is li, U[i][1] is ri andU[i][2] is x<sub>i</sub> and it returns the final array a.

Expected Time Complexity: O(N)
Expected Space Complexity: O(N)

**Constraints:**

1<=N<=10<sup>5</sup>

1<=Q<=10<sup>5</sup>

1<=U[i][0] <= U[i][1]<=N

1<= U[i][2] <=10<sup>5</sup>