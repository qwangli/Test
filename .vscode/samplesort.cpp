#include<iostream>
using namespace std;
void Swap(int &a, int &b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
}
void SelectSort(int A[], int n)
{
	int small;
	for (int i = 0; i<n - 1; i++)
	{
		small = i;
		for (int j = i + 1; j < n; j++) {
			if (A[j] < A[small])  small = j;
		}
	  Swap(A[i], A[small]);
	}
}
int main()
{
	int a[10] = {12,13,3,1,2,5,6,8,9,45 };
	SelectSort(a, 10);
	for (int i = 0; i < 10; i++)
	{
		cout << a[i] << " ";
	}
	system("pause");
	return 0;
}