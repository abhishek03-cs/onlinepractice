#include<iostream>
using namespace std;
int main()
{
	int cs,ms,n;
	cs=0;
	ms=0;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	for(int i=0;i<n;i++){
		cs=cs+arr[i];
		if(cs<0)
			cs=0;
		if(cs>ms)
			ms=cs;
	}
 cout<<" "<<ms<<endl;
 return 0;

	}
