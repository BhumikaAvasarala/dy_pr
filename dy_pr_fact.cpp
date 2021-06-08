#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int dp[10000005];
int isFact(int n)
{
    if(n<=1)
    {
        return 1;
    }
    if(dp[n]!=-1)
    {
        return dp[n];
    }
   return dp[n]=n*(isFact(n-1));
    
}

int main()
{
    int n;
    cin>>n;
    for(int i=0;i<=n;i++)
    {
        dp[i]=-1;
    }
    cout<<isFact(n)<<"\n";
        return 0;
}
