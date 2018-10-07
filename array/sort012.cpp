#include <iostream>
using namespace std;

void sort012(int A[], int n){
	int count0=0, count1=0, count2=0;
	for (int i = 0; i < n; ++i)
	{
		if(A[i]==0){
			count0++;
		}
		else if(A[i]==1){
			count1++;
		}
		else{
			count2++;
		}
	}
	for (int i = 0; i < count0; ++i)
	{
		cout<<"0"<<" ";
	}
	for (int i = 0; i < count1; ++i)
	{
		cout<<"1"<<" ";
	}
	for (int i = 0; i < count2; ++i)
	{
		cout<<"2"<<" ";
	}
	cout<<endl;
}

void sort012Algo(int A[], int n){
	int low=0,high=n-1,mid=0;
	while(mid <= high){
		switch(A[mid]){
			case 0:
					swap(A[low],A[mid]);
					low++;
					mid++;					
					break;
			case 1:
					mid++;
					break;
			case 2:
					swap(A[mid],A[high]);
					high--;
					break;
		}
	}
}

void national_flag(int A[], int n){
    int start=0,i=0;
    int end=n-1;
    while(i<=end){
        if(A[i]==0){
            swap(A[i],A[start]);
            start++;
            i++;
        }
        else if(A[i]==2){
            swap(A[i],A[end]);
            end--;
        }
        else{
            i++;
        }
    }
    for(int i=0;i<n;i++){
        cout<<A[i]<<" ";
    }
    cout<<endl;
}

void print(int A[], int n){
	for (int i = 0; i < n; ++i)
	{
		cout<<A[i]<<" ";
	}
	cout<<endl;
}

int main(int argc, char const *argv[])
{
	int n,T;
	//cin>>T;
	//for (int i = 0; i < T; ++i)
	//{
		cout<<"Enter the size of array : ";
		cin>>n;
		int A[n];
		for (int i = 0; i < n; ++i)
		{
			cin>>A[i];
		}
		sort012(A,n);
		cout<<"***************\n";
		sort012Algo(A,n);
		print(A,n);
	//}
	
	return 0;
}