#include <iostream>
#include <time.h>
#include <bits/stdc++.h>
using namespace std;

int fib(int n){
	if(n<=1) return n;
	else return fib(n-1)+fib(n-2);
}  

int fibDynamicIterative(int n){
	int A[n];
	A[0]=0;
	A[1]=1;
	for (int i = 2; i <=n ; ++i)
	{
		A[i]=A[i-1]+A[i-2];
	}
	return A[n];
}

int main(int argc, char const *argv[])
{
	int n;
	cout<<"Enter n : ";
	cin>>n;
	//cout<<"fibonacci of "<<n<<" is : "<<fib(n)<<endl;
	float time=clock()/1000;
	cout<<fixed;
	cout<<setprecision(2);
	cout<<"Time taken is : "<<time<<" ms"<<endl;	
	cout<<"fibonacci of "<<n<<" is : "<<fibDynamicIterative(n)<<endl;
	// cout<<"Time taken is : "<<clock()<<" ms"<<endl;
	return 0;
}
