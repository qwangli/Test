#include<iostream>
using namespace std;
int main()
{
    unsigned int n;
    while(cin>>n){
     int num=0;
    while(n){
     num++;
     n&=n-1;
    }
    cout<<num;
    }
    return 0;
}