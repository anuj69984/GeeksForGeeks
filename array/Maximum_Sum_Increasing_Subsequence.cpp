#include <iostream>
using namespace std;

int maxSubsequence(int arr[], int n){
	int max=0;
	int A[n];
	for (int i = 0; i < n; ++i)
	{
		A[i]=arr[i];
	}
	for (int i = 1; i <n ; ++i)
	{
		for (int j = 0; j < i ; ++j)
		{
			if(arr[i] > arr[j] && A[i] <A[j]+arr[i])
				A[i]=A[j]+arr[i];
		}
	}
	for(int i=0;i<n;i++){
	if(max < A[i])
		max=A[i];
	}
	return max;
}

// https://www.youtube.com/watch?v=99ssGWhLPUE
int maximum(int A[], int n){
    int val[n];
    for(int i=0;i<n;i++){
        val[i]=A[i];
    }
    for(int i=1;i<n;i++){
        for(int j=0;j<i;j++){
            if(A[i]>A[j]){
                val[i]=max(val[i],val[j]+A[i]);
            }
        }
    }
    int largest=0;
    for(int i=0;i<n;i++){
        if(largest<val[i]){
            largest=val[i];
        }
    }
    return largest;
}

int main(int argc, char const *argv[])
{
	int n;
	cout<<"Enter the size of array : ";
	cin>>n;
	int A[n];
	cout<<"Enter the array elements : ";
	for (int i = 0; i < n; ++i)
	{
		cin>>A[i];
	}
	cout<<"Max sum of subsequence is : "<<maxSubsequence(A,n)<<endl;
	return 0;
}