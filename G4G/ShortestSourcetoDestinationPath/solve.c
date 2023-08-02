//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Point
{
public:
    int X;
    int Y;
    int distToStart;
    int distToEnd;
    int f;
    Point *parent;
    
    Point(int x, int y)
    {
        X = x;
        Y = y;
        distToStart = 0;
        distToEnd = 0;
        parent = nullptr;
    }
    
    Point(int x, int y, int f, Point *p)
    {
        X = x;
        Y = y;
        distToStart = 0;
        distToEnd = 0;
        parent = p;
    }
    
    void CalcDistance()
    {
        if(parent != nullptr)
            distToStart = parent->distToStart + 1;
        else
            distToStart = 0;
            
        distToEnd = X + Y;
        f = distToStart + distToEnd;
    }
    
    bool IsEnd()
    {
        return X == 0 && Y == 0;
    }
};

class Solution {
  public:
    vector<Point> closedList;
  
    bool CheckPoint(vector<vector<int>> &A, Point p, Point direction)
    {
        for(auto c : closedList)
        {
            if(c.X == p.X + direction.X && c.Y == p.Y + direction.Y)
                return false;
        }
        
        if(A[p.X + direction.X][p.Y + direction.Y] == 1)
            return true;
            
        return false;
    }
  
    int shortestDistance(int N, int M, vector<vector<int>> A, int X, int Y) 
    {
        if(A[0][0] == 0 || A[X][Y] == 0)
            return -1;
        
        vector<Point> openList;
        //auto cmp = [](Point left, Point right) { return left.f < right.f; };
        //std::priority_queue<Point, std::vector<Point>, decltype(cmp)> openList(cmp);

        Point p = Point(X, Y);
        openList.push_back(p);

        while(openList.size() > 0)
        {
            sort(openList.begin(), openList.end(), [](const Point &lhs, const Point &rhs) {
                return lhs.f < rhs.f;
            });
            
            Point current = openList.front();
            //cout << "X : " << current.X << " Y : " << current.Y << " distToStart : " << current.distToStart << endl; 
            openList.erase(openList.begin());
            
            //UP
            if(current.X > 0 && CheckPoint(A, current, Point(-1, 0)))
            {
                Point p(current.X - 1, current.Y, 0, &current);
                p.CalcDistance();
                if(p.IsEnd())
                {
                    return p.distToStart;
                }
                
                openList.push_back(p);
            }
            
            //Left
            if(current.Y > 0 && CheckPoint(A, current, Point(0, -1)))
            {
                Point p(current.X, current.Y - 1, 0, &current);
                p.CalcDistance();
                if(p.IsEnd())
                {
                    return p.distToStart;
                }
                
                openList.push_back(p);
            }
            
            //Down
            if(current.X < N -1  && CheckPoint(A, current, Point(1, 0)))
            {
                Point p(current.X + 1, current.Y, 0, &current);
                p.CalcDistance();
                if(p.IsEnd())
                {
                    return p.distToStart;
                }
                    
                openList.push_back(p);
            }
            
            //Right
            if(current.Y < M - 1 && CheckPoint(A, current, Point(0, 1)))
            {
                Point p(current.X, current.Y + 1, 0, &current);
                p.CalcDistance();
                if(p.IsEnd())
                {
                    return p.distToStart;
                }   
                
                openList.push_back(p);
            }
            
            closedList.push_back(current);
        }
        
        return -1;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, M, x, y;
        cin >> N >> M;
        vector<vector<int>> v(N, vector<int>(M));
        for (int i = 0; i < N; i++)
            for (int j = 0; j < M; j++) cin >> v[i][j];
        cin >> x >> y;
        Solution ob;
        cout << ob.shortestDistance(N, M, v, x, y) << "\n";
    }
}
// } Driver Code Ends