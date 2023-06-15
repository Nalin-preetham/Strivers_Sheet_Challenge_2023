#include <bits/stdc++.h> 
int findMinimumCoins(int amount) 
{
     int value[]={1000,500,100,50,20,10,5,2,1};
     int cnt=0;
     int i=0;
     while(amount)
     {
         if(value[i]>amount)
         {
             i++;
         }
         else
         {
             cnt++;
             amount-=value[i];
         }
     }
     return cnt;
}
