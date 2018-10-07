#include <iostream>
#include <algorithm>
using namespace std;

int minsum(int A[], int B[], int n){
	if(n==0) return 0;
	if(n==1) return (A[0]*B[0]);
	sort(A,A+n);
	sort(B,B+n,greater<int>());
	int sum1=0;
	for (int i = 0; i < n; ++i)
	{
		sum1=sum1+(A[i]*B[i]);
	}

	sort(A,A+n,greater<int>());
	sort(B,B+n);
	int sum2=0;
	for (int i = 0; i < n; ++i)
	{
		sum2=sum2+(A[i]*B[i]);
	}
	if(sum1 > sum2) return sum2;
	else return sum1;
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
	int B[n];
	cout<<"enter the elements of 1st array : ";
	for (int i = 0; i < n; ++i)
	{
		cin>>A[i];
	}
	cout<<"enter the elements of 2nd array : ";
	for (int i = 0; i < n; ++i)
	{
		cin>>B[i];
	}
	cout<<"First array is : ";
	print(A,n);
	cout<<"second array is : ";
	print(B,n);
	cout<<"Minimum sum is : "<<minsum(A,B,n)<<endl;
	return 0;
}