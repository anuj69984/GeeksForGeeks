#include <iostream>
using namespace std;

int minimum_height(int A[], int n, int k){
	sort(A,A+n,greater<int>());
	if(A[i] <=k){
		A[i]=A[i]-k;
	}
}

int main(int argc, char const *argv[])
{
	int n;
	cout<<"enter the number of towers : ";
	cin>>n;
	int k;
	cout<<"Enter k : ";
	cin>>k;
	int A[n];
	cout<<"Enter the height of towers : ";
	for (int i = 0; i < n; ++i)
	{
		cin>>A[i];
	}

	return 0;
}