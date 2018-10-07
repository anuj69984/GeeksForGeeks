#include <iostream>
#include <algorithm>
using namespace std;

int maxtoys(int A[], int n, int k){
	sort(A,A+n);
	int count=0;
	for (int i = 0; i < n; ++i)
	{
		 if(k >= A[i]){
		 	count++;
		 	k=k-A[i];
		 }
		 if(k==0)
		 	return count;
	}
	return count;

}
int main(int argc, char const *argv[])
{
	int T;
	cout<<"Enter number of test cases : ";
	cin>>T;

	for (int i = 0; i < T; ++i)
	{
		cout<<"Enter number of toys : ";
		int n;
		cin>>n;
		int K;
		cout<<"Enter the money you have : ";
		cin>>K;
		int A[n];
		cout<<"Enter the cost of toys : ";
		for (int j = 0; j <n ; ++j)
		{
			cin>>A[j];
		}
		cout<<"maximum no of toys you can buy is : "<<maxtoys(A,n,K)<<endl;
	}
	return 0;
}