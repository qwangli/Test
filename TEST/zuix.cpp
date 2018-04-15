#include<iostream>
using namespace std;
int jump(int a[],int n)
{
    int curstep=0,nextstep=0;
    int curnum=0,temp,length=a[0];
    while(curnum<n)
   {
        if(length>=n-1)
            return curstep+1;
        nextstep=curnum;
        temp=length;
    }
    while(curnum<=temp)
    {
        if(a[curnum]+curnum>length)
        {
            nextstep=curnum;
            length=a[curnum]+curnum;
        }
        curnum+=1;
    }
    curstep+=1;
    curnum=nextstep;
    return curstep;
}
int main()
{
   int i=0, n;
    int a[20];
    cin>>n;
    while(i<n)
    {
        cin>>a[i++];
    }
    int step=jump(a,n);
    cout<<step<<endl;
    return 0;
}
 