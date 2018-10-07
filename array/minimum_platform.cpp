#include <iostream>
#include <algorithm>
using namespace std;

int minimum(int A[], int D[], int n){
    sort(A,A+n);
    sort(D,D+n);
    int i=1,j=0;
    int platform=1,result=1;
    while(i<n && j<n){
        if(A[i] <= D[j]){
            platform++;
            i++;  
            if(platform >= result){
                result=platform;
            }
            
        }
        else{
            platform--;
            j++;
        }
    }
    return result;
}

int main(){
    int n,t;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n;
        int A[n],D[n];
        for(int j=0;j<n;j++){
            cin>>A[j];
        }
        for(int j=0;j<n;j++){
            cin>>D[j];
        }
        cout<<minimum(A,D,n)<<endl;
    }
    return 0;
}