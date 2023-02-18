//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++

class Solution{   
public:
    int appleSequences(int n, int m, string arr)
    {
        int maxLen = 0, start = 0,end = 0, orangeCount = 0;
        
        //While the end isnt at the end
        while(end < n)
        {
            //Keep count of oranges to the end
            if(arr[end] == 'O')
                orangeCount ++;
                
            //Slide the window until oranges are less than spells
            while(start < n && orangeCount > m)
            {
                //Use a spell on an orange
                if(arr[start] == 'O')
                    orangeCount--;
                    
                start ++;
            }
            
            maxLen = max(maxLen, end - start + 1);
            end++;
        }
        
        return maxLen;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N, M;
        cin >> N >> M;
        string arr;
        cin >> arr;
        
        Solution ob;
        cout << ob.appleSequences(N, M, arr) << endl;
    }
    return 0; 
} 
// } Driver Code Ends