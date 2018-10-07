#include <iostream>
using namespace std;

void maxOfSubarray(int A[], int n, int k){
	for (int j = 0; j <= n-k; ++j)
	{
		int i=0,max=0;
		while(i<k){
			if(A[i+j]>max){
				max=A[i+j];
			}
		i++;
		}
		cout<<max<<" ";
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
	int k;
	cout<<"Enter k : ";
	cin>>k;
	maxOfSubarray(A,n,k);
	return 0;
}