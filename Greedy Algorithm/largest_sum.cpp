#include <iostream>
using namespace std;

void PrintDigit(int n, int s){
	int A[n];
	if(s==0 && n<=1){
		cout<<0;
		return;
	}
	if(s==0 && n>1){
		cout<<"-1\n";
		return;
	}
	if(s >9*n){
	    cout<<"-1\n";
	    return;
	}
	for (int i = 0; i < n; ++i)
	{
		if(s>=9){
			A[i]=9;
			s=s-9;
		}
		else{
			A[i]=s;
			s=0;
		}
	}
	for (int i = 0; i < n; ++i)
	{
		cout<<A[i];
	}
	cout<<endl;
}
int main(int argc, char const *argv[])
{
	int n,T;
	cin>>T;
	for(int i=0;i<T;i++){
	cout<<"Enter the number of Digits : ";
	cin>>n;
	int S;
	cout<<"Enter the sum : ";
	cin>>S;
	PrintDigit(n,S);
	}

	return 0;
}