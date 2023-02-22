# Connect Nodes at same level

Given a binary tree, connect the nodes that are at the same level. The structure of the tree Node contains an addition nextRight pointer for this purpose.

Initially, all the nextRight pointers point to garbage values. Your function should set these pointers to point next right for each node.

**Your Task:**

You don't have to read input or print anything. Complete the function connect() that takes the root of the tree as  input parameter and connects the nodes that lie at the same level. 

Note: The generated output will contain 2 lines. First line contains the level order traversal of the tree and second line contains the inorder traversal of the tree.


Expected Time Complexity: O(N)
Expected Auxiliary Space: O(N)


**Constraints:**

1 ≤ Number of nodes ≤ 10<sup>5</sup>

0 ≤ Data of a node ≤ 10<sup>5</sup>