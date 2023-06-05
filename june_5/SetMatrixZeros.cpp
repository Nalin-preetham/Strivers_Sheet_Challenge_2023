#include <bits/stdc++.h>
 void setZero(vector<vector<int>> &matrix,int row,int col,int n,int m)
 {
     for(int i=0;i<n;i++)
     {
         matrix[i][col]=0;
     }
     for(int i=0;i<m;i++)
     {

         matrix[row][i]=0;
     }
 }
void setZeros(vector<vector<int>> &matrix)
{
	
    int n=matrix.size();
    int m=matrix[0].size();
    vector<vector<int>> temp(n,vector<int>(m));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            temp[i][j]=matrix[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)

        {
            if(temp[i][j]==0)
            {
                setZero(matrix,i,j,n,m);
            }
        }
    }


}
