//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


int* game_with_number(int arr[], int n);

int main()
{
    
    int t;cin>> t;
    while(t--)
    {
        int n;
        cin >> n;
        int arr[n];
        
        for(int i=0;i<n;i++)
            cin>>arr[i];
        
        int *arr2;
        
        arr2 = game_with_number(arr, n);
        for(int i = 0;i < n; i++)
            cout << arr2[i] << " ";
        
        cout << endl;
        
    }

}

// } Driver Code Ends


int* game_with_number(int arr[], int n)
{
    // Complete the function
    if(n < 2)
        return arr;
        
    for(int i = 0, j = 1; j < n; i++, j++)
    {
        arr[i] |= arr[j];
    }
    
    return arr;
}
