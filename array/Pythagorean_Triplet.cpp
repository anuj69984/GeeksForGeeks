#include <iostream>
using namespace std;
// O(n^3)
bool pythagorus(int A[], int n){
	for (int i = 0; i < n; ++i)
	{
		for (int j = i+1; j < n; ++j)
		{
			for (int k = j+1; k < n; ++k)
			{
				x=A[i]*A[i]; y=A[j]*A[j]; z=A[k]*A[k];
				if(x+y==z || x+z==y || y+z==x){
					return true;
				}
			}
		}
	}
	return false;
}

//O(n^2)
bool pythagorean_triplet(int A[], int n){
	for(int i=0;i<n;i++){
		A[i]=A[i]*A[i];
	}
	sort(A,A+n);
	for (int i = n-1; i >=2; i--)
	{
		int left=0;
		int right=i-1;
		while(left < right){
			if(A[left]+A[right]==A[i]){
				return true;
			}
			else if(A[left]+A[right] < A[i]){
				left++;
			}
			else right--;
		}
	}
	return false;

}
 

int main(){
    int n,t;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n;
        int A[n];
        for(int j=0;j<n;j++){
            cin>>A[j];
        }
       if( pythagorean_triplet(A,n)==1) cout<<"Yes"<<endl;
       else cout<<"No"<<endl;
    }
    return 0;
}