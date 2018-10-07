#include <iostream>
#include <algorithm>
using namespace std;

struct setofvalue{
	int first;
	int second;
};
// void maxchain(setofvalue A[], int n){
// 	sort(A,A+n);
// 	// for (int i = 0; i < n; ++i)
// 	// {
		
// 	// }
// }
void print(setofvalue A[], int n){
	for (int i = 0; i < n; ++i)
	{
		cout<<"( "<<A[i].first<<","<<A[i].second<<" )"<<" ";
	}
	cout<<endl;
}

int main(int argc, char const *argv[])
{
	int n;
	cout<<"Enter the number of sets : ";
	cin>>n;
	setofvalue A[n];
	cout<<"Enter the set of values : ";
	for (int i = 0; i <n ; ++i)
	{
		cin>>A[i].first;
		cin>>A[i].second;
	}

	print(A,n);
	// maxchain(A,n);
	// print(A,n);
	return 0;
}