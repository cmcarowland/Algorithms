//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    long long int findGCD(long long int L, long long int B)
    {
        if(B == 0)
            return L;
            
        return findGCD(B, L % B);
    }

    vector<long long int> minimumSquares(long long int L, long long int B)
    {
        vector<long long int> answer;

        long long int gcd = findGCD(L, B);
        return vector<long long int>{(L/gcd) * (B/gcd), gcd};
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        long long int L, B;
        cin>>L>>B;
        
        Solution ob;
        vector<long long int> ans = ob.minimumSquares(L, B);
        cout<<ans[0]<<" "<<ans[1]<<"\n";
    }
    return 0;
}
// } Driver Code Ends