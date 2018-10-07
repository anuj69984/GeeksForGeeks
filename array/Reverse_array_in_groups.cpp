#include <iostream>
using namespace std;


// only handles the case for multiple of k
void reverseInGroups(int A[], int n, int k){
	for (int i = 0; i < n; ++i)
	{
		int j=0; int B[k];
		while(j<k){
			B[j]=A[j+i];
			j++;
		}
		for(int m=k-1;m>=0;m--)
			cout<<B[m]<<" ";
		i=i+k-1;
	}
}

void reverse(int A[], int n, int k){
	for (int i = 0; i < n; i=i+k)
	{
		int low=i;
		int high=min(i+k-1,n-1);
		while(low<high){
			swap(A[low],A[high]);
			low++;
			high--;
		}
	}
}

void print(int A[], int n){
	for (int i = 0; i < n; ++i)
	{
		cout<<A[i]<<" ";
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
	reverse(A,n,k);
	print(A,n);
	return 0;
}