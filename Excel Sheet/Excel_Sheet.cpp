#include <iostream>
#include <string.h>
#include <algorithm>
using namespace std;
#define MAX 100
void excel(int n){
	int i=0;
	char arr[MAX];
	while(n>0){
	int rem=n%26;
	if(rem==0){
		arr[i++]='Z';
		//i++;
		n=(n/26)-1;
	}
	else{
		arr[i++]=(rem-1)+'A';
		//i++;
		n=n/26;
	}
}
	arr[i] = '\0'; 
	int length=strlen(arr);
	cout<<"size of char array : "<<length<<endl;
	reverse(arr,arr+length);
	for (int i = 0; i < length; ++i)
	{
		cout<<arr[i];
	}
	//cout<<arr<<endl;
	cout<<endl;
}


int main(int argc, char const *argv[])
{
	int n,t;
	cin>>t;
	for(int i=0;i<t;i++){
		cin>>n;
		excel(n);
	}
	return 0;
}
