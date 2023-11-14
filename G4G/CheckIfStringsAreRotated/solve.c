//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    //Function to check if two strings are rotations of each other or not.
    bool areRotations(string s1,string s2)
    {
        if(s1 == s2)
            return true;
        
        int s1Ptr = 0;
        int startRot = 0;
        int s2Ptr = 0;
        
        while(startRot < s2.length())
        {
            s2Ptr = startRot;
            while(s1[s1Ptr] == s2[s2Ptr])
            {
                s1Ptr++;
                s2Ptr = (s2Ptr + 1) % s2.length();
                if(s1Ptr == s1.length())
                    return true;
            }
            
            s1Ptr = 0;
            startRot++;
        }
        
        return false;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s1;
        string s2;
        cin>>s1>>s2;
        Solution obj;
        cout<<obj.areRotations(s1,s2)<<endl;

    }
    return 0;
}

// } Driver Code Ends