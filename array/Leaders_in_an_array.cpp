#include <iostream>
using namespace std;
 
// O(n^2) solution. 
void leader(int A[], int n){
	for (int i = 0; i < n-1; ++i)
	{
		for (int j = i+1; j < n; ++j)
		{
			if(A[j] > A[i])
				break;
			else if(A[j] < A[i] && j==n-1)
				cout<<A[i]<<" ";
		}
	}
	cout<<A[n-1]<<endl;
}

// O(n) solution. scan from right. 

void learderbest(int A[], int n){
	int max=-1;
	int k=0;
	int B[n];
	for (int i = n-1; i >=0 ; i--)
	{
		if(A[i] >= max){
			max=A[i];
			B[k]=max;
			k++;
		}
	}
	for (int i = k-1; i >=0 ; i--)
	{
		cout<<B[i]<<" ";
	}
	cout<<endl;
}

int main(int argc, char const *argv[])
{
	int n;
	cout<<"Enter the size of array : ";
	cin>>n;
	int A[n];
	cout<<"Enter array elements : ";
	for (int i = 0; i < n; ++i)
	{
		/* code */cin>>A[i];
	}
	learderbest(A,n);
	return 0;
}