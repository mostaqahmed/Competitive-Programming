#include<bits/stdc++.h>
using namespace std;


int main()
{
    long long n,coin[]={1,5,10,25,50};
    while(cin>>n)
    {
        long long dp[30005]={0};
        dp[0]=1;
        for(int j=0;j<5;j++)
        {
            for(int i=1;i<=n;i++)
            {
                if(i>=coin[j]&&dp[i-coin[j]])
                    dp[i]+=dp[i-coin[j]];
            }
        }
        if(dp[n]==1)
        {
           printf("There is only %lld way to produce %lld cents change.\n",dp[n],n);
           continue;
        }
        printf("There are %lld ways to produce %lld cents change.\n",dp[n],n);
    }
}
