#include<iostream>
using namespace std;
int getLis(int A[],int n)
{
    int dp[10];
    for(int i=0;i<n;i++)
    {
        dp[i]=1;
    }
    int Max=1;
    for(int i=1;i<n;i++)
    {
        for (int j=0;j<i;j++)
        {
            if(A[i]>A[j])
            {
                if(dp[j]+1>dp[i])
                dp[i]=dp[j]+1;
            }
        }
        if(dp[i]>Max)
          Max=dp[i];
    }
    return Max;
}
int main()
{
    int A[20],n,max;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
max=getLis(A,n);
cout<<max<<endl;
return 0;
}