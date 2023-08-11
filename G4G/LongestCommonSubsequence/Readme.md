# Longest Common Subsequence

Given two strings, find the length of longest subsequence present in both of them. Both the strings are in uppercase latin alphabets.

**Example 1:**
```
Input:
A = 6, B = 6
str1 = ABCDGH
str2 = AEDFHR
Output: 3
Explanation: LCS for input strings “ABCDGH” and “AEDFHR” is “ADH” of length 3.
```
**Example 2:**
```
Input:
A = 3, B = 2
str1 = ABC
str2 = AC
Output: 2
Explanation: LCS of "ABC" and "AC" is "AC" of length 2.
```
**Your Task:**

Complete the function lcs() which takes the length of two strings respectively and two strings as input parameters and returns the length of the longest subsequence present in both of them.

Expected Time Complexity : O(|str1|*|str2|)

Expected Auxiliary Space: O(|str1|*|str2|)

Constraints:

1 <= size(str1),size(str2) <= 10<sup>3</sup>

```
Example array using the input:
12 12
ACABBBBDBAAB
BBCCBEECDCDE

  j 1 2 3 4 5 6 7 8 9 0 1 2
i 0,0,0,0,0,0,0,0,0,0,0,0,0 -
1 0,0,0,0,0,0,0,0,0,0,0,0,0 A
2 0,0,0,1,1,1,1,1,1,1,1,1,1 C
3 0,0,0,1,1,1,1,1,1,1,1,1,1 A
4 0,1,1,1,1,2,2,2,2,2,2,2,2 B
5 0,1,2,2,2,2,2,2,2,2,2,2,2 B
6 0,1,2,2,2,3,3,3,3,3,3,3,3 B
7 0,1,2,2,2,3,3,3,3,3,3,3,3 B
8 0,1,2,2,2,3,3,3,3,4,4,4,4 D
9 0,1,2,2,2,3,3,3,3,4,4,4,4 B
0 0,1,2,2,2,3,3,3,3,4,4,4,4 A
1 0,1,2,2,2,3,3,3,3,4,4,4,4 A
2 0,1,2,2,2,3,3,3,3,4,4,4,4 B
  - B B C C B E E C D C D E -
```