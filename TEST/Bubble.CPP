#include<iostream>
using namespace std;
void Swap(int &a, int &b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
}
void BubbleSort(int A[], int n)
{
	int i,j,last;
    i=n-1;
    while(i>0){
        last=0;
        for(j=0;j<i;j++)
        {
            if(A[j]>A[j+1]){
              Swap(A[j],A[j+1]);
              last=j;
        }
        }
        i=last;
    }
}
int main()
{
	int a[10] = {12,13,3,1,2,5,6,8,46,45 };
	BubbleSort(a, 10);
	for (int i = 0; i < 10; i++)
	{
		cout << a[i] << " ";
	}
	system("pause");
	return 0;
}