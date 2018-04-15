#include<iostream>
using namespace std;
int main()
{
    int i,j,K,A,X,B,Y,sum=0;
    cin>>K;
    cin>>A>>X>>B>>Y;
    for(i=0;i<=X;i++)
    {
        for(j=0;j<=Y;j++)
        {
          if(K==(i*A+j*B))
          {
              if(i!=0&&j!=0
              )
                 sum=X*Y;
          }
            
        }
    }
    sum=sum%1000000007;
    cout<<sum<<endl;
 return 0;   
}