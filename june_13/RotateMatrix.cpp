#include <bits/stdc++.h>

void rotateMatrix(vector<vector<int>> &mat, int n, int m)
{
   int top=0,left=0,right=m-1,bottom=n-1;
 
   while(top<bottom && left<right)
   {
        int temp=mat[top][left];
      for(int i=left;i<=right;i++)
      {
            swap(mat[top][i],temp);
      }
      top++;
      for(int i=top;i<=bottom;i++)
      {
         swap(mat[i][right],temp);
      }
      right--;
      for(int i=right;i>=left;i--)
      {
         swap(mat[bottom][i],temp);
      }
      bottom--;
      for(int i=bottom;i>=top;i--){
         swap(mat[i][left],temp);
      }
      left++;
      mat[top-1][left-1] = temp;
   }

}
