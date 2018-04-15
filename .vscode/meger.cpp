#include<iostream>
using namespace std;
void MergeSort(int A[],int i1,int j1,int i2,int j2)
{
    int *Temp=new int[j2-i1+1];
    int i=i1,j=i2,k=0;
    while(i<=j1&&j<=j2)
    {
        if(A[i]<=A[j]) Temp[k++]=A[i++];
        else Temp[k++]=A[j++];
    }
        while(i<=j1) Temp[k++]=A[i++];
        while(j<=j2) Temp[k++]=A[j++];
        for(i=0;i<k;i++)
            A[i1++]=Temp[i];
        delete []Temp;
    
}
void Merge(int A[], int n)
{
    int i1,i2,j1,j2;
    int size=1;
    while(size<n){
        i1=0;
        while(i1+size<n){
            i2=i1+size;
              j1=i2-1;
            if(i2+size-1>n-1)
               j2=n-1;
            else j2=i2+size-1;
            MergeSort(A,i1,j1,i2,j2);
            i1=j2+1;
        }
        size*=2;
    }
}
int main()
{
	int a[10] = {12,13,3,1,2,15,6,8,46,45};
    Merge(a, 10);
	for (int i = 0; i < 10; i++)
	{
		cout << a[i] << " ";
	}
	system("pause");
	return 0;
}