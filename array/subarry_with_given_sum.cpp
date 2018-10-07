#include <iostream>
using namespace std;

void subarray(int A[], int n, int sum){
	int curr_sum=A[0];
	int start=0;
	for (int i = 1; i <= n; ++i)
	{
		while(curr_sum >sum && start <i-1){
			curr_sum=curr_sum-A[start];
			start++;
		}
		if(curr_sum==sum){
			cout<<"start index : "<<start<<" end index is : "<<i-1<<endl;
			return;
		}
		else if(i < n){
			curr_sum=curr_sum+A[i];
		}
	}
}

void subarray_method2(int A[], int n, int k){
	int curr_sum=0;
	int start=0,s=0;
	int end=0;
	for (int i = 0; i < n; ++i)
	{
		start=s;
		curr_sum=curr_sum+A[i];
		if(curr_sum==k){
			end=i;		
			cout<<"Start index : "<<start<<endl;
			cout<<"end index : "<<end<<endl;	
			return;
		}
		else if(curr_sum > k){
			s=s+1;
			curr_sum=A[s];
			i=s;
		}		
	}
	cout<<"-1"<<endl;	
}

int main(int argc, char const *argv[])
{
	int n,givensum,T;
	cin>>T;
	for (int i = 0; i < T; ++i)
	{
			cout<<"Enter the size of array : ";
			cin>>n;
			cout<<"Enter the sum : ";
			cin>>givensum;
			int A[n];
			for (int i = 0; i < n; ++i)
			{
				cin>>A[i];
			}
			subarray(A,n,givensum);
	}
	
	return 0;
}