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

void printString(int n) 
{ 
    char str[MAX]; // To store result (Excel column name) 
    int i = 0; // To store current index in str which is result 
  
    while (n>0) 
    { 
        // Find remainder 
        int rem = n%26; 
  
        // If remainder is 0, then a 'Z' must be there in output 
        if (rem==0) 
        { 
            str[i++] = 'Z'; 
            n = (n/26)-1; 
        } 
        else // If remainder is non-zero 
        { 
            str[i++] = (rem-1) + 'A'; 
            n = n/26; 
        } 
    } 
    str[i] = '\0'; 
  
    // Reverse the string and print result 
    reverse(str, str + strlen(str)); 
    cout << str << endl; 
  
    return; 
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