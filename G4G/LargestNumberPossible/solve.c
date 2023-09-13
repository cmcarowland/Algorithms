//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    string findLargest(int N, int S){
        if(N * 9 < S || S == 0 && N > 1)
            return "-1";
        
        stringstream ss;
        int remaining = S;
        
        for(int i = 0; i < N; i++)
        {
            int sub = 9;
            while(sub > remaining)
                sub --;
            
            
            if(remaining == 0)
                ss << 0;
            else
            {
                ss << sub;
                remaining -= sub;
            }
        }
       
        return ss.str();
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N, S;
        cin>>N>>S;
        
        Solution ob;
        cout<<ob.findLargest(N, S)<<"\n";
    }
    return 0;
}
// } Driver Code Ends