//{ Driver Code Starts
//Initial Template for C++


#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
//User function Template for C++

string reverseWord(string str)
{
    for(int i = 0, j = str.length() - 1; i < str.length(); i++, j--)
    {
       if(i < j)
       {
           char tmp = str[j];
           str[j] = str[i];
           str[i] = tmp;
       }
    }  
    
    return str;
}



//{ Driver Code Starts.

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
	string s;
	cin >> s;
	
	cout << reverseWord(s) << endl;
	}
	return 0;
	
}


// } Driver Code Ends