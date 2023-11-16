//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
  public:
    vector<int> duplicates(long long arr[], int n) 
    {
        sort(arr, arr + n);
        long long max = arr[n - 1];
        int nums[max + 1] = {0};
        
        vector<int> v;
        for(int i = 0; i < n; i++)
        {
            nums[arr[i]] ++;
        }
        
        for(int i = 0; i < max + 1; i++)
        {
            if(nums[i] > 1)
                v.push_back(i);
        }
        
        if(v.size() == 0)
            v.push_back(-1);
            
        return v;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int n;
        cin >> n;
        long long a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        Solution obj;
        vector<int> ans = obj.duplicates(a, n);
        for (int i : ans) cout << i << ' ';
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends