#include <iostream>
using namespace std;

void minCoins(int value){
	int A[9]={1,2,5,10,20,50,100,500,1000};
	int n=sizeof(A)/sizeof(A[0]);
	int count=0;
	for (int i = n-1; i >= 0; i--)
	{
		while(value >= A[i]){
			count++;
			cout<<A[i]<<" ";
			value=value-A[i];
			if(value ==0){
				return;
			}
		}
	}
	cout<<"number of coins : "<<count<<endl;
} 

int main(int argc, char const *argv[])
{
	int value;
	cout<<"Enter the amount : ";
	cin>>value;
	minCoins(value);
	return 0;
}