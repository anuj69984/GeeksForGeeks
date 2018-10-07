#include <iostream>
using namespace std;
struct item{
	int weight;
	int value;
};

int kanpsack(int n,int total_weight, int wt[],int val[]){
	int A[n+1][total_weight+1];

	for (int i = 0; i <=n ; ++i)
	{
		for (int j = 0; j <=total_weight; ++j)
		{
			if(i==0 || j==0)
				A[i][j]=0;
			else if(j < wt[i-1]){
				A[i][j]=A[i-1][j];
			}
			else{
				A[i][j]=max(val[i-1]+A[i-1][j-wt[i-1]],A[i-1][j]);
			}
		}
	}

	cout<<"***********matrix is***********\n";
	for (int i = 0; i <= n; ++i)
	{
		for (int j = 0; j <=total_weight ; j++)
		{
			cout<<A[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<endl;

	cout<<"**********Items are *********\n";
	int i=n,j=total_weight;
	while(i!=0 && j!=0){
		if(A[i][j]==A[i-1][j]){
			i--;
		}
		else{
			cout<<wt[i-1]<<" ";
			j=j-wt[i-1];
			i--;
		}
	}
	cout<<endl;
	return A[n][total_weight];

}

int main(int argc, char const *argv[])
{
	int n;
	cout<<"Enter number of items : ";
	cin>>n;
	int total_weight;
	cout<<"Enter total weight : ";
	cin>>total_weight;
	int wt[n];
	int val[n];
	cout<<"Enter weight of each item : ";
	for (int i = 0; i < n; ++i)
	 {
	 	cin>>wt[i];
	 } 
	 cout<<"Enter value of each item : ";
	 for (int i = 0; i < n; ++i)
	 {
	 	cin>>val[i];
	 }
	 cout<<"maximum value is : "<<kanpsack(n,total_weight,wt,val)<<endl;

	return 0;
}