#include <iostream>
using namespace std;

int missing(int A[], int n){
	int sum=0;
	for (int i = 0; i < n; ++i)
	{
		sum=sum+A[i];
	}
	int a= ((n+1)*(n+2))/2;
	int result=a-sum;
	return result;
}

int missingXOR(int A[], int n){
	int x1=A[0];
	int x2=1;
	for (int i = 1; i < n; ++i)
	{
		x1=x1^A[i];		
	}
	for (int i = 2;i <= n+1; ++i)
	{
		x2=x2^i;
	}
	return (x1^x2);
}
int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
		int A[n-1];
		for (int i = 0; i < n-1; ++i)
		{
			cin>>A[i];
		}
		cout<<missing(A,n-1)<<endl;
		cout<<missingXOR(A,n-1)<<endl;
	
	return 0;
} 