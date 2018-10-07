#include <iostream>
using namespace std;
// almost same as maximum sum subsequence
// https://www.youtube.com/watch?v=99ssGWhLPUE
//O(n^2)
int longest(int A[], int n){
    int val[n];
    for(int i=0;i<n;i++){
        val[i]=1;
    }
    for(int i=1;i<n;i++){
        for(int j=0;j<i;j++){
            if(A[i]>A[j]){
                val[i]=max(val[i],val[j]+1);
            }
        }
    }
    int maximum=0;
    for(int i=0;i<n;i++){
        if(maximum<val[i]){
            maximum=val[i];
        }
    }
    return maximum;
}
int main(int argc, char const *argv[])
{
	int n,t;
	cin>>t;
	for (int i = 0; i < t; ++i)
	{
		cin>>n;
		int A[n];
		for (int j = 0; j < n; ++j)
		{
			/* code */cin>>A[j];
		}
		cout<<longest(A,n)<<endl;
		//cout<<"length of LIS : "<<length(A,n)<<endl;
	}
	
	return 0;
}