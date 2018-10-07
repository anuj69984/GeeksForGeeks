#include <iostream>
using namespace std;

int kadane(int A[], int n){
	int max_so_far=0;
	int max_ending_here=0;
	int start=0, end=0,s=0;
	for (int i = 0; i < n; ++i)
	{
		max_ending_here=max_ending_here+A[i];
		if(max_so_far < max_ending_here){
			max_so_far=max_ending_here;
			start=s;
			end=i;
		}
		
		if(max_ending_here < 0){
			max_ending_here=0;
			s=i+1;
		}

	}
	cout<<"start index : "<<start<<endl;
	cout<<"end index : "<<end<<endl;
	return max_so_far;
}
int kadanesimple(int A[], int n){
	int curr_max=A[0];
	int max_so_far=A[0];
	for (int i = 1; i <n ; ++i)
	{
		curr_max= max(A[i],curr_max+A[i]);
		max_so_far=max(max_so_far,curr_max);
	}
	return max_so_far;
}
int main(int argc, char const *argv[])
{
	int n;
	cout<<"Enter the size of array : ";
	cin>>n;
	int A[n];
	cout<<"Enter the array element : ";
	for (int i = 0; i < n; ++i)
	{
		cin>>A[i];
	}
	cout<<"max sum of contiguous subarray : "<<kadane(A,n)<<endl;
	cout<<"max sum of contiguous subarray : "<<kadanesimple(A,n)<<endl;
	return 0;
}