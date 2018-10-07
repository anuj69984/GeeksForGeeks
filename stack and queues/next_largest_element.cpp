#include <iostream>
using namespace std;

void nextlarger(int *A, int n){
    int larger;
    for(int i=0;i<n;i++){
    	larger=-1;
        for(int j=i+1;j<n;j++){
            if(A[i]<A[j]){
                larger=A[j];
                break;
            }
        }
        cout<<larger<<" ";
    }
}
int main() {
    int n,T;
    cout<<"Enter the number of test cases : ";
         cin>>T;
         for(int k=0;k<T;k++){
            cout<<"enter the number of element: ";
             cin>>n;
            int A[n];
            cout<<"Enter the elements : ";
            int x;
            for(int i=0;i<n;i++){
              cin>>x;
              A[i]=x;
            }
            nextlarger(A,n);
    }
    return 0;
}