#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        
        //row m col n
int m=matrix.size();
int n=matrix[0].size();
vector<int> v(m*n);
int c=m*n;

   int rowstart=0,rowend=m-1,colstart=0,colend=n-1;
    //spiral order print
    while (rowstart<=rowend && colstart<=colend)
    {
        //for row start
        for (int col = colstart; col <= colend; col++)
        {
            if (c==0)
            {
                return v;
            }
            
            v[m*n-c]=matrix[rowstart][col];
            c--;
        }
        rowstart++;
        //for column end
        for (int row = rowstart; row <= rowend; row++)
        {
            if (c==0)
            {
                return v;
            }
            v[m*n-c]=matrix[row][colend];
            c--;
        }
        colend--;
        //for row end
        for (int col = colend; col >= colstart; col--)
        {
            if (c==0)
            {
                return v;
            }
            v[m*n-c]=matrix[rowend][col];
            c--;
        }
        rowend--;
        //for column start
        for (int row = rowend; row >= rowstart; row--)
        {
            if (c==0)
            {
                return v;
            }
            v[m*n-c]=matrix[row][colstart];
            c--;
        }
        colstart++;
        
    }
return v;

    }
};