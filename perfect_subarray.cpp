#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	int k=1;
	while(k<=t){
		int n;
	cin>>n;
	long long int arr[n],c=0;
	for(int i=0;i<n;i++)
		cin>>arr[i];
	for(int i=1;i<n;i++)
		arr[i]=arr[i-1]+arr[i];
	int i=0;
		for(i=0;i<n;i++)
			for(int j=i;j<n;j++)
				if(!((arr[j]-arr[i-1])%n))
					c++;
				cout<<c<<endl;
				k++;}
				return 0;}
