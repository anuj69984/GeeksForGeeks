#include <iostream>
using namespace std;

// O(n.Logn)

void merge(int L[], int ll, int R[], int rl, int A[], int n){
	int i=0,j=0,k=0;
	while(i<ll && j<rl){
		if(L[i] <= R[j]){
			A[k]=L[i];
			k++;
			i++;
		}
		else{
			A[k]=R[j];
			k++;
			j++;
		}
	}
	while(i<ll){
		A[k]=L[i];
		k++;
		i++;
	}
	while(j<rl){
		A[k]=R[j];
		k++;
		j++;
	}
}

void mergesort(int A[], int n){
	int mid=n/2;
	int L[mid];
	int R[n-mid];
	if(n<2) return;
	for (int i = 0; i < mid; ++i)
	{
		L[i]=A[i];
	}
	for (int i = mid; i <n ; ++i)
	{
		R[i-mid]=A[i];
	}
	mergesort(L,mid);
	mergesort(R,n-mid);
	merge(L,mid,R,n-mid,A,n);
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
	mergesort(A,n);
	cout<<"kth smallest elements is : "<<A[k-1]<<endl;
	return 0;
}