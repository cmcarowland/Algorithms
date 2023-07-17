//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
	public:
		string FirstNonRepeating(string A)
		{
		    unordered_map <char, int> charMap;
		    queue<char> q;
		    string answer = "";
		    
		    for(auto c : A)
		    {
		        //Increment the map for the current character
		        charMap[c]++;
		        //If it is the first entry add it to the queue
		        if(charMap[c] == 1)
		            q.push(c);
		            
		        //Once the map has a duplicate character and queue is not empty pop values off
		        while(!q.empty() && charMap[q.front()] > 1)
		            q.pop();
		          
		        //If we get here and have an empty queue add # chars else take the next char from the Queue.  
		        if(q.empty())
		            answer += '#';
		        else
		            answer += q.front();
		    }
		    
		    return answer;
		}

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string A;
		cin >> A;
		Solution obj;
		string ans = obj.FirstNonRepeating(A);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends