//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++

class Solution{   
public:
    int minIteration(int rows, int columns, int row, int col)
    {    
        if(rows == 1 && columns == 1)
            return 0;
        
        //Top Left
        int iterations = row - 1 + col - 1;
        //Bottom Left
        iterations = max(iterations, rows - row + col - 1);
        //Top Right
        iterations = max(iterations, row - 1 + (columns - col));
        //Bottom Right
        iterations = max(iterations, (rows - row) + (columns - col));

        return iterations;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N, M, x, y;
        cin >> N >> M;
        cin >> x >> y;
        
        Solution ob;
        cout << ob.minIteration(N, M, x, y) << endl;
    }
    return 0; 
} 
// } Driver Code Ends