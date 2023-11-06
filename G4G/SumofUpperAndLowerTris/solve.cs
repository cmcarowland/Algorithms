//{ Driver Code Starts
//Initial Template for C#

using System;
using System.Collections;
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
                int n = Convert.ToInt32(Console.ReadLine());
                var stringArray = Console.ReadLine().Split(' ');
                List<List<int>> A = new List<List<int>>();
                for (int i = 0; i < n * n; i += n)
                {
                    List<int> row = new List<int>();
                    for (int j = 0; j < n; j++)
                    {
                        row.Add(int.Parse(stringArray[i + j]));
                    }
                    A.Add(row);
                }
                Solution obj = new Solution();
                var res = obj.sumTriangles(A, n);
                for (int i = 0; i < res.Count; i++)
                {
                    Console.Write(res[i] + " ");
                }
                Console.WriteLine();
                
                
            }

        }


    }

    
// } Driver Code Ends
//User function Template for C#

    class Solution
    {
        public int Sum(List<int> l, int start, int end)
        {
            int x = 0;
            for(int i = start; i < end; i++)
                x += l[i];
                
            return x;
        }
        
        //Function to return sum of upper and lower triangles of a matrix.
        public List<int> sumTriangles(List<List<int>> matrix, int n)
        {
            int u = 0;
            int l = 0;
            int uCount = 0;
            int lCount = 1;
            
            foreach(var a in matrix)
            {
                l += Sum(a, 0, lCount);
                u += Sum(a, uCount, n);
                uCount ++;
                lCount ++;
            }

            return new List<int>(){u, l};
        }

    }

}

//{ Driver Code Starts.
// } Driver Code Ends