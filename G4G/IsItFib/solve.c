//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    long long SumSubset(int i, int K, vector<long long> &GeekNum)
    {
        long long outNum = 0;

        int numberToAdd = K > i + 1  ? K - i : K;
        int currentIndex = i;
        for(;numberToAdd > 0; numberToAdd --)
        {
            outNum += GeekNum[i];
            i --;
        }
        
        return outNum;
    }
  
    long long solve(int N, int K, vector<long long> GeekNum) {
        if(K == 1)
        {
            return GeekNum[0];
        }

        int i = GeekNum.size();
        while(i < N)
        {
            GeekNum.push_back(SumSubset(i - 1, K, GeekNum));
            i ++;
        }

        return GeekNum[N-1];
    }
};


//{ Driver Code Starts.

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, K;
        cin >> N >> K;

        vector<long long> GeekNum(K);

        for (int i = 0; i < K; i++) cin >> GeekNum[i];

        Solution ob;
        cout << ob.solve(N, K, GeekNum) << "\n";
    }
    return 0;
}

// } Driver Code Ends