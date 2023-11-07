//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:    
    int transitionPoint(int arr[], int n) {
        if(arr[n - 1] == 0) 
            return -1;
            
        if(arr[0] == 1)
           return 0;
           
        int mid = n / 2;
        while(arr[mid] != 1)
        {
            mid += (n - mid) / 2;
        }
        
        int offset = 1;
        while(mid - offset > 0 && arr[mid - offset] != 0)
            offset ++;
        
        return mid - --offset;
    }
};

//{ Driver Code Starts.
int transitionPoint(int arr[], int n);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n], i;
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        cout << ob.transitionPoint(a, n) << endl;
    }
    return 0;
}
// } Driver Code Ends