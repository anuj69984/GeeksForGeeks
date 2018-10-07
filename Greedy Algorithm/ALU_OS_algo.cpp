#include <iostream>
using namespace std;

int pagefault(int A[], int n, int k){
	int B[m][n];
	int count=0;
	B[0][0]=A[0]
	for (int i = 0; i < m; ++i)
	{	
		for (int j = 1; j <n ; ++j)
		{
			if(A[j] != B[i][j]){

			}
		}
	}
}

int main(int argc, char const *argv[])
{
	int T;
	cout<<"Enter number of test cases : ";
	cin>>T;
	for (int i = 0; i < T; ++i)
	{
		int n;
		cout<<"Enter number of pages : ";
		cin>>n;
		int A[n];
		cout<<"Enter sequence of pages : ";
		for (int j = 0; j < n; ++j)
		{
			cin>>A[i];
		}
		int K;
		cout<<"Enter capacity of memory : ";
		cin>>K;

	}
	return 0;
}