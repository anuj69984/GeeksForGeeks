#include <iostream>
using namespace std;

#include <stdio.h>
 
 // O(n^2)
int equilibrium(int arr[], int n)
{
    int i, j;
    int leftsum, rightsum;
 
    for (i = 0; i < n; ++i) {       
         leftsum = 0; 
        for (j = 0; j < i; j++)
            leftsum += arr[j];
 
        rightsum = 0; 
        for (j = i + 1; j < n; j++)
            rightsum += arr[j];
         if (leftsum == rightsum)
            return i;
    }
    return -1;
}

 // O(n^2)
int equilibrium2(int A[], int n){
    int first_sum,last_sum;
    if(n==1){
        return 1;
    }
    for(int i=1;i<n-1;i++){
        first_sum=0;
        last_sum=0;
        for(int j=0;j<i;j++){
            first_sum+=A[j];
        }
        for(int j=i+1;j<n;j++){
            last_sum+=A[j];
        }
        if(first_sum==last_sum){
            return i+1;
        }
    }
    return -1;
}

//O(n)
int equilibrium(int arr[], int n)
{
    int sum = 0; // initialize sum of whole array
    int leftsum = 0; // initialize leftsum
 
    /* Find sum of the whole array */
    for (int i = 0; i < n; ++i)
        sum += arr[i];
 
    for (int i = 0; i < n; ++i) {
        sum -= arr[i]; // sum is now right sum for index i
 
        if (leftsum == sum)
            return i;
 
        leftsum += arr[i];
    }
 
    /* If no equilibrium index found, then return 0 */
    return -1;
}

//Time Complexity= O(n) 
// Space complexity= O(2*n)
int findElement(int arr[], int n)
{
    // Forming prefix sum array from 0
    int prefixSum[n];
    prefixSum[0] = arr[0];
    for (int i = 1; i < n; i++)
        prefixSum[i] = prefixSum[i - 1] + arr[i];
 
    // Forming suffix sum array from n-1
    int suffixSum[n];
    suffixSum[n - 1] = arr[n - 1];
    for (int i = n - 2; i >= 0; i--)
        suffixSum[i] = suffixSum[i + 1] + arr[i];
 
    // Find the point where prefix and suffix
    // sums are same.
    for (int i = 1; i < n - 1; i++)
        if (prefixSum[i] == suffixSum[i])
            return arr[i];
 
    return -1;
}

int main(int argc, char const *argv[])
{
	int n,T;
	cout<<"enter no of test cases : ";
	cin>>T;
	for (int i = 0; i < T; ++i)
	{
		cout<<"Enter the size of array : ";
		cin>>n;
		int A[n];
		cout<<"Enter the elements of array : ";
		for (int i = 0; i < n; ++i)
		{
			cin>>A[i];
		}
		cout<<"equilibrium index : "<<equilibrium(A,n)<<endl;
	}
	
	//cout<<"equilibrium position is : "<<equilibrium(A,n)<<endl;
	return 0;
}
