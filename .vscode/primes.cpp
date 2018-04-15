#include<iostream>
#include<math.h>
using namespace std;
bool isprime(int n)
{
    if(n==1)
       return false;
    int end=sqrt(n);
    for(int i=2;i<=end;i++)
    {
        if(n%i==0)
          return false;
    }
    return true;
}
int coutp(int n)
{
    int end=n/2;
    int count=0;
    for(int i=2;i<=end;i++)
    {
        if(isprime(i)&&isprime(n-i))
            count++;
    }
    return count;
}
int main()
{
    int n;
    while(cin>>n)
    {
        cout<<coutp(n)<<endl;
    }
    return 0;
}