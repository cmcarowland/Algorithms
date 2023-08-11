//{ Driver Code Starts
//Initial Template for C#

using System;
using System.Numerics;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace DriverCode
{

    class GFG
    {
        static void Main(string[] args)
        {
            int testcases;// Taking testcase as input
            testcases = Convert.ToInt32(Console.ReadLine());
            while (testcases-- > 0)// Looping through all testcases
            {
                int[] arr = new int[2];

                string elements = Console.ReadLine().Trim();
                arr = Array.ConvertAll(elements.Split(), int.Parse);
                int N = arr[0];
                int M = arr[1];
                string s1 = Console.ReadLine().Trim();
                string s2 = Console.ReadLine().Trim();
                Solution obj = new Solution();
                int res = obj.lcs(N, M, s1, s2);
                Console.Write(res+"\n");
          }

        }
    }
}
// } Driver Code Ends


//User function Template for C#

class Solution
{
    public int lcs(int x, int y,string s1, string s2)
    {
        int[,] counts = new int[x + 1, y + 1];
        for(int i = 0; i <= x; i++)
        {
            for(int j = 1; j <= y; j++)
            {
                if(i == 0 || j == 0)
                    counts[i, j] = 0;
            }
        }
        
        for(int i = 1; i <= x; i++)
        {
            for(int j = 1; j <= y; j++)
            {
                if(s1[i - 1] == s2[j - 1])
                {
                    counts[i, j] = counts[i - 1, j - 1] + 1;
                }
                else
                {
                    counts[i, j] = Math.Max(counts[i - 1, j], counts[i, j -1]);
                }
            }
                
        }
        
        return counts[x,y];
    }

}