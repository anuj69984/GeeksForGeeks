#include <iostream>
#include <string>
using namespace std;

//A-1, B-10, C-100, D-1000, E-10000   DDBC
int sum(string str){
    int total_sum=0;
    for(int i=0;i<str.size();i++){
        if(str[i]=='A'){
            total_sum=total_sum+1;
        }
        else if(str[i]=='B')
            total_sum+=10;
        else if(str[i]=='C')
            total_sum+=100;
        else if(str[i]=='D')
            total_sum+=1000;
        else if(str[i]=='E')
            total_sum+=10000;
    }
    return total_sum;
}

// int main(){
//     int n,t,k;
//     cin>>t;
//     for(int i=0;i<t;i++){
//         cin>>n;
//         int A[n];
//         cin>>k;
//         for(int j=0;j<n;j++){
//             cin>>A[j];
//         }
//         reverse_in_size(A,n,k);
//     }
//     return 0;
// }

// int main(){
//     int n,t;
//     cout<<"Enter no of test cases : ";
//     cin>>t;
//     for(int i=0;i<t;i++){
//     	cout<<"Enter the size of array : ";
//         cin>>n;
//         int A[n];
//         cout<<"Enter the array : ";
//         for(int j=0;j<n;j++){
//             cin>>A[j];
//         }
//         cout<<"total rain water : "<<rain(A,n)<<endl;
//     }
//     return 0;
// }

int main(int argc, char const *argv[])
{
    string str;
    getline(cin,str);
    cout<<sum(str)<<endl;
    return 0;
}