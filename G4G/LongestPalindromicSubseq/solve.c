//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
  public:
    void printVector(vector<int>& v)
    {
        for(auto i : v)
            cout << i << ",";
            
        cout << endl;
    }
  
    int longestPalinSubseq(string A) {
        //Copy the string
        string reverseString = A;
        //Reverse the string
        reverse(reverseString.begin(), reverseString.end());
        
        //Cache the length of the string
        int strLen = A.length();
        //Create 2 vectors 
        vector<int> prev(strLen + 1, 0), current(strLen + 1, 0);
        
        for(int i = 1; i <= strLen; i++)
        {
            for(int j = 1; j <= strLen; j++)
            {
                if(A[i - 1] == reverseString[j - 1])
                    current[j] = 1 + prev[j - 1];
                else
                    current[j] = max(current[j - 1], prev[j]);
            }
            
            prev = current;
        }
        
        return prev[strLen];
    }
};

//{ Driver Code Starts.

int32_t main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        cout << ob.longestPalinSubseq(s) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends