#include<iostream>
using namespace std;
int  main()
{
    int n,m,sum=0,flag=-1;
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
          sum+=i*flag;
          if(0==i%m)  
            flag=flag*-1;  
    }
    cout<<sum<<endl;
    return 0;
}
   
