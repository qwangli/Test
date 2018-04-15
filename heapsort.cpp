#include<iostream>
using namespace std;
void Swap(int &a, int &b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
}
void AdjustDown(int A[],int r,int j)
{
    int child=2*r+1; int temp=A[r];
    while(child<=j){
        if((child<j)&&(A[child]<A[child+1])) child++;
         if(temp>=A[child]) break;
         A[(child-1)/2]=A[child];
         child=2*child+1;
    }
    A[(child-1)/2]=temp;
   
}
void HeapSort(int A[], int n)
{
	for(int i=(n-2)/2;i>-1;i--) AdjustDown(A,i,n-1);
    for(int i=n-1;i>0;i--){
        Swap(A[0],A[i]);
        AdjustDown(A,0,i-1);
    }
}
int main()
{
	int a[10] = {12,13,3,1,2,5,16,8,46,45};
    HeapSort(a, 10);
	for (int i = 0; i < 10; i++)
	{
		cout << a[i] << " ";
	}
	system("pause");
	return 0;
}