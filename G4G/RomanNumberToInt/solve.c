//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution 
{
    map<char, int> values = 
    {
        {'I', 1},
        {'V', 5},
        {'X', 10},
        {'L', 50},
        {'C', 100},
        {'D', 500},
        {'M', 1000}
    };
    
  public:
    int romanToDecimal(string &str) 
    {
        int value = 0;
        
        for(int i = 0; i < str.length(); i++)
        {
            if(i < str.length() - 1)
            {
                if(values[str[i]] < values[str[i + 1]])
                {
                    value += values[str[i + 1]] - values[str[i]];
                    i++;
                }
                else
                    value += values[str[i]];
            }
            else
                value += values[str[i]];
        }
        
        return value;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.romanToDecimal(s) << endl;
    }
}
// } Driver Code Ends