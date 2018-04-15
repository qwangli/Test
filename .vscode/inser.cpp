#include<iostream>
using namespace std;
void InsertSort(int A[], int n)
{
   for (int i = 0; i<n; i++)
	{
        int j=i;
        int temp=A[i];
		while(j>0&&temp<A[j-1])
        {
            A[j]=A[j-1];j--;
        }
        A[j]=temp;
	}
}
int main()
{
	int a[10] = {12,13,3,1,2,5,6,8,9,45 };
	InsertSort(a, 10);
	for (int i = 0; i < 10; i++)
	{
		cout << a[i] << " ";
	}
	system("pause");
	return 0;
}