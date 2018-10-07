#include <iostream>
#include <algorithm>

using namespace std;

int findMinDiff(int arr[], int n, int m)
{    if (m==0 || n==0)
        return 0;
     sort(arr, arr+n);
     if (n < m)
       return -1;
     int minimum = INT_MAX;
     int first = 0, last = 0;
    for (int i=0; i+m-1<n; i++)
    {
        int curr_diff = arr[i+m-1] - arr[i];
        if (curr_diff < minimum)
        {
            minimum = curr_diff;
            first = i;
            last = i + m - 1;
        }
    }
    return (arr[last] - arr[first]);
}
// new method
int chocolate_new(int A[], int n, int m){
    sort(A,A+n);
    int minimum=A[m-1]-A[0];
    int j=m;
    for(int i=1;i<n-m+1;i++){
    	if(A[j]-A[i] < minimum){
    		minimum=A[j]-A[i];
    	}
    	j++;
    }
    return minimum;
}

int chocolate(int A[], int n, int m){
	if(m==0 || n==0) return 0;
	if(n<m) return -1;
	sort(A,A+n);
	cout<<"Sorted : ";
	for (int i = 0; i < n; ++i)
	 {
	 	cout<<A[i]<<" ";
	 } 
	 cout<<endl;
	 int curr_minimum;
	int minimum=A[m-1]-A[0];
	for (int i = 0; i+m-1 < n; ++i)
	 {
	 	//int curr_minimum=A[i+m-1]-A[i];
	 	curr_minimum=A[m-1]-A[i];
	 	if(curr_minimum <= minimum){
	 		minimum=curr_minimum;

	 	}
	 	m++;
	 } 
	return minimum;
}

int main(int argc, char const *argv[])
{
	int n,m;
	cout<<"Enter the size of array : ";
	cin>>n;
	cout<<"Enter no of students : ";
	cin>>m;
	int A[n];
	cout<<"Enter array elements : ";
	for (int i = 0; i < n; ++i)
	{
		/* code */cin>>A[i];
	}
	cout<<"Difference is : "<<chocolate(A,n,m)<<endl;
	return 0;
}