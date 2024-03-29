//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
  public:
    int minDist(int a[], int n, int x, int y) {
        int dist = INT_MAX;
        vector<int> xindexes;
        vector<int> yindexes;
        
        for(int i = 0; i < n; i ++)
        {
            if(a[i] == x)
                xindexes.push_back(i);
                
            
            if(a[i] == y)
                yindexes.push_back(i);
        }
        
        if(yindexes.size() == 0 || xindexes.size() == 0)
            return -1;
        
        for(int i = 0; i < xindexes.size(); i++)
        {
            for(int j = 0; j < yindexes.size(); j++)
            {
                if(abs(xindexes[i] - yindexes[j]) < dist)
                    dist = abs(xindexes[i] - yindexes[j]);
            }
        }

        return dist;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        int x, y;
        cin >> x >> y;
        Solution obj;
        cout << obj.minDist(a, n, x, y) << endl;
    }
    return 0;
}

// } Driver Code Ends