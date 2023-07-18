//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution
{
	public:
	int EuclidDivision(int a, int b)
	{
	    int remainder = 0;
	    while((remainder = a % b) != 0)
	    {
	        a = b;
	        b = remainder;
	    }
	    
	    return b;
	}
	
	unsigned long long LCM(unsigned long long a, unsigned long long b)
	{
	    unsigned long long product = a * b;
	    //cout << product << endl;
	    return product / EuclidDivision(a, b); 
	}
	
    int gcd(unsigned long long A, unsigned long long B) 
	{ 
	    return A * B / LCM(A, B);
	} 
};

//{ Driver Code Starts.

int main() 
{
   	int t;
    cin >> t;
    while (t--)
    {
        int A, B;
        cin >> A >> B;
        Solution ob;
       	cout <<  ob.gcd(A, B) << "\n";
    }
    return 0;
}
// } Driver Code Ends