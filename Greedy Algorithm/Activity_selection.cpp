#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct activity{
    int start;
    int finish;
};

bool compare(activity a1, activity a2){
    return (a1.finish < a2.finish);
}

int maxactivity(activity A[], int n){
    sort(A,A+n,compare);
    int i=0;
    int count=0;
    cout<<A[i].start<<" -->"<<A[i].finish;
    for(int j=1; j<n;j++){
        if(A[j].start >= A[i].finish){
            cout<<A[j].start<<"-->"<<A[j].finish;
            count++;
            i=j;
        }
    }
    return count+1;
}

int main(){
    int T;
    cout<<"Enter no of test cases : ";
    cin>>T;
    for(int i=0;i<T;i++){
    	cout<<"Enter the number of activity : ";
        int n;
        cin>>n;
        int S[n],F[n];
        for(int j=0;j<n;j++){
            cin>>S[j];
            }
            for(int j=0;j<n;j++){
                cin>>F[j];
            }
            
        activity A[n];
        for(int j=0;j<n;j++){
            A[j].start=S[j];
            A[j].finish=F[j];
        }
        cout<<maxactivity(A,n)<<endl;
        
    }
}