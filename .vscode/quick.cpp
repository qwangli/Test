#include<iostream>
using namespace std;
void Swap(int &a, int &b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
}
void QuickSort(int A[],int left,int right)
{
    int i,j;
    if(left<right){
    i=left;j=right+1;
    do
    {
        do i++; while (A[i]<A[left]);
        do j--; while (A[j]>A[left]);
        if(i<j) Swap(A[i],A[j]);
    }while(i<j);
    Swap(A[left],A[j]);
    QuickSort(A,left,j-1);
    QuickSort(A,j+1,right);
    }
}
void QuickSort(int A[], int n)
{
	QuickSort(A,0,n-1);
}
int main()
{
	int a[10] = {12,13,3,1,2,5,6,8,46,45};
    QuickSort(a, 10);
	for (int i = 0; i < 10; i++)
	{
		cout << a[i] << " ";
	}
	system("pause");
	return 0;
}