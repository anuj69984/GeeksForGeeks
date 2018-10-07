#include <iostream>
using namespace std;

void subsetsum(int val[], int n, int sum){
	if(sum ==0) cout<<"True\n";
	if(n==0 && sum!=0) cout<<"False\n";
	int A[n+1][sum+1];

	A[0][0]=1;
	for(int i=1;i<=sum;i++)
		A[0][i]=0;

	for (int i = 1; i <=n ; ++i)
	{
		A[i][0]=1;
	}
	cout<<"*******FINE\n";
	for (int i = 1; i <= n; ++i)
	{
		for (int j= 1; j <=sum ; ++j)
		{		
			if(j < val[i-1]){
				A[i][j]=A[i-1][j];
			}
			// if(j ==val[i-1]){
			// 	A[i][j]=A[i-1][];
			// }
			if(j>=val[i-1]){
			A[i][j]=A[i-1][j] || A[i-1][j-val[i-1]];
			}
		}
	}
	for (int i = 0; i <= n; ++i)
	{
		for (int j = 0; j <=sum ; ++j)
		{
			cout<<A[i][j]<<" ";
		}
		cout<<endl;
	}

cout<<"********exact value**********\n";
	int i=n,j=sum;
	while(i!=0 && j!=0){
		if(A[i][j]==A[i-1][j]){
			i--;
		}
		else{
			cout<<val[i-1]<<" ";
			j=j-val[i-1];
			i--;
		}
	}
	cout<<endl;	

	if(A[n][sum]==1){
		cout<<"Sum exists\n";
		return;
	}	
	else{
		cout<<"Does not exists\n";
	}

}


int main(int argc, char const *argv[])
{
	int n,sum;
	cout<<"Enter number of elements : ";
	cin>>n;
	cout<<"Enter sum : ";
	cin>>sum;
	int A[n];
	cout<<"Enter array elements : ";
	for (int i = 0; i < n; ++i)
	{
		/* code */cin>>A[i];
	}
	subsetsum(A,n,sum);
	return 0;
}