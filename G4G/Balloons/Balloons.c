//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int findMinValue(map<char, int> m)
    {
        map<char, int>::iterator itr;
        int minValue = INT_MAX;
        for(itr = m.begin(); itr != m.end(); itr++)
        {
            if(itr->second < minValue)
                minValue = itr->second;
        }
        
        return minValue;
    }
    
    int countInstances(map<char, int> m)
    {
        int min = findMinValue(m);
        
        if(m['l'] == min || m['o'] == min)
            return min / 2;
            
        int minDouble = std::min(m['l'], m['o']);

        if(min < minDouble / 2)
            return min;
        else
            return minDouble / 2;
    }

    int maxInstance(string s){
        map<char, int> m;
        string b = "balloon";
        
        for(auto c: s)
        {
            if(b.find(c) == string::npos)
                continue;
                
            if(m.find(c) == m.end())
                m[c] = 1;
            else
                m[c] ++;
        }
        
        if(m.size() < 5)
            return 0;
            
        return countInstances(m);
    }
};

//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        Solution ob;
        cout<<ob.maxInstance(s)<<endl;
    }
    return 0;
}
// } Driver Code Ends