#include <iostream>
#include <stack>
using namespace std;

int rain(int A[], int n){
	int ans=0;
	int L[n];
	int R[n];
	L[0]=A[0];
	for (int i = 1; i <n ; ++i)
	{
		L[i]=max(L[i-1],A[i]);
	}
	R[n-1]=A[n-1];
	for (int i = n-2; i >=0 ; i--)
	{
		R[i]=max(R[i+1],A[i]);
	}

	for (int i = 0; i < n; ++i)
	{
		ans=ans+min(L[i],R[i])-A[i];
	}
	return ans;
}

// stack implementation
int rainstack(int H[], int n){
	stack <int> S;
	int answer=0;
	for (int i = 0; i < n; ++i)
	{
		int Top,distance,bounded_height;
		while(!S.empty() && H[i] >=H[S.top()]){
			Top=S.top();
			S.pop();
			distance=i-S.top()-1;
			bounded_height=min(H[i],H[S.top()])-H[Top];
			answer=answer+(distance*bounded_height);
		}
		S.push(i);		
	}
	return answer;	
}

int main(int argc, char const *argv[])
{
	int n;
	cout<<"Enter the size of array : ";
	cin>>n;
	int A[n];
	for (int i = 0; i < n; ++i)
	{
		/* code */cin>>A[i];
	}
	cout<<"Total amount of water is  : "<<rainstack(A,n)<<endl;
	return 0;
}