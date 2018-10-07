//Print all subsets with given sum
#include <iostream>
using namespace std;

void subset(int A[], int n, int sum){
	
	for (int i = 0; i < n; ++i)
	{
		int start=0;
		int end=0;
		int curr_sum=0;
		for (int j = i;  j< n; ++j)
		{
			curr_sum=curr_sum+A[j];
			if(curr_sum==sum){
				start=i;
				end=j;
				break;
			}
			else if(curr_sum >sum){
				break;
			}
		}
		if(curr_sum==sum){
		for (int i = start; i <=end ; ++i)
		{
			cout<<A[i]<<" ";
		}
		cout<<endl;
	}
	}
} 
int main(int argc, char const *argv[])
{
	int n,sum;
	cout<<"Enter size of array : ";
	cin>>n;
	cout<<"ENter sum : ";
	cin>>sum;
	int A[n];
	cout<<"Enter array elements : ";
	for (int i = 0; i < n; ++i)
	{
		cin>>A[i];
	}
	subset(A,n,sum);
	return 0;
}