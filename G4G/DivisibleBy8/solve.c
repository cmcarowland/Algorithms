//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
    public:
    int DivisibleByEight(string s){
        stringstream ss;
        if(s.length() > 3)
            ss.str(s.substr(s.length() - 3, 3));
        else
            ss.str(s);
            
        int value = 0;
        ss >> value;
        if(!ss.fail())
            if(value % 8 == 0)
                return 1;
            
        return -1;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string S;
        cin>>S;
        Solution ob;
        cout<<ob.DivisibleByEight(S)<<"\n";
    }
}
// } Driver Code Ends