#include <iostream>
using namespace std;

int element(int A[], int n){
    for(int i=1;i<n-1;i++) {
        int flag1=0;
        for(int j=0;j<i;j++){
            if(A[j]>A[i]){
                flag1=1;
                break;
            }
        }
        int flag2=0;
        for(int j=i+1;j<n;j++){
            if(A[j]<A[i]){
                flag2=1;
                break;
            }
        }
        if(flag1==0 && flag2==0){
            return A[i];
        }
    }
    return -1;
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
        cout<<element(A,n)<<endl;
    }
    return 0;
}