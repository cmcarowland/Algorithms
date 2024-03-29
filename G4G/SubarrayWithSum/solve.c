//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(vector<int>arr, int n, long long correctSum)
    {
        int start = 0;
        long long sum = 0;
        
        for(int i = 0; i < n; i++)
        {
            sum += arr[i];
            
            if(correctSum < sum)
            {
                while(correctSum < sum && start < i)
                {
                    sum -= arr[start];
                    start++;
                }
            }
            
            if(correctSum == sum)
                return vector<int>{start + 1, i + 1};
        }
        
        return vector<int>{-1};
    }
};

//{ Driver Code Starts.

int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        long long s;
        cin>>n>>s;
        vector<int>arr(n);
        // int arr[n];
        const int mx = 1e9;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        vector<int>res;
        res = ob.subarraySum(arr, n, s);
        
        for(int i = 0;i<res.size();i++)
            cout<<res[i]<<" ";
        cout<<endl;
        
    }
	return 0;
}
// } Driver Code Ends