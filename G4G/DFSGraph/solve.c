//{ Driver Code Starts
// Initial Template for C#

using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace DriverCode {

class GFG {
    static void Main(string[] args) {
        int testcases; // Taking testcase as input
        testcases = Convert.ToInt32(Console.ReadLine());
        while (testcases-- > 0) // Looping through all testcases
        {
            var ip = Console.ReadLine().Trim().Split(' ');
            int V = int.Parse(ip[0]);
            int E = int.Parse(ip[1]);
            List<List<int>> adj = new List<List<int>>();
            for (int i = 0; i < V; i++) {
                adj.Add(new List<int>());
            }
            for (int i = 0; i < E; i++) {
                ip = Console.ReadLine().Trim().Split(' ');
                int u = int.Parse(ip[0]);
                int v = int.Parse(ip[1]);
                adj[u].Add(v);
                adj[v].Add(u);
            }
            Solution obj = new Solution();
            var res = obj.dfsOfGraph(V, adj);
            foreach (int i in res) { Console.Write(i + " "); }
            Console.WriteLine();
        }
    }
}
}
// } Driver Code Ends


// User function Template for C#

class Solution 
{
    bool[] visited;
    List<int> outList;
    // Function to return a list containing the DFS traversal of the graph.
    public List<int> dfsOfGraph(int V, List<List<int>> adj) 
    {
        outList = new List<int>();
        visited = new bool[V];
        visited[0] = true;
        outList.Add(0);
        
        foreach(var n in adj[0])
        {
            if(!visited[n])
                dfs(n, adj);
        }
            
        return outList;
    }
    
    public void dfs(int x, List<List<int>> adj)
    {
        visited[x] = true;
        outList.Add(x);
        
        foreach(var n in adj[x])
        {
            if(!visited[n])
                dfs(n, adj);
        }
    }
}