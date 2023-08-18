//{ Driver Code Starts
// C++ program to remove recurring digits from
// a given number
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
    

class Solution{
    //Function to find the leaders in the array.
    public:
    bool IsLeader(int* a, int index, int n)
    {
        for(int i = index; i < n; i++)
        {
            if(a[index] < a[i])
                return false;
        }
        
        return true;
    }
    
    vector<int> leaders(int a[], int n)
    {
        vector<int> l;
        l.push_back(a[n - 1]);
        
        for(int i = n - 2; i >= 0; i --)
        {
            if(IsLeader(a, i, n))  
            {
                l.push_back(a[i]);
            }
        }
        reverse(l.begin(), l.end());
        return l;
    }
};

//{ Driver Code Starts.

int main()
{
   long long t;
   cin >> t;//testcases
   while (t--)
   {
       long long n;
       cin >> n;//total size of array
        
        int a[n];
        
        //inserting elements in the array
        for(long long i =0;i<n;i++){
            cin >> a[i];
        }
        Solution obj;
        //calling leaders() function
        vector<int> v = obj.leaders(a, n);
        
        //printing elements of the vector
        for(auto it = v.begin();it!=v.end();it++){
            cout << *it << " ";
        }
        
        cout << endl;

   }
}

// } Driver Code Ends