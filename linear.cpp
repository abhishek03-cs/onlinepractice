#include<iostream>
using namespace std;


int main()
{
	
	int arr[50];
	int n,key;
	cout<<"give n and key"<<endl;
	cin>>n>>key;
	cout<<"give array elements"<<endl;
	for(int i=0;i<n;i++)
		cin>>arr[i];
	int i;
	for( i=0;i<n;i++)
		if(key==arr[i]){
			cout<<"element found at location "<<i<<endl;
			break;
		}
		if(i==n)
			cout<<"element is not present"<<endl;


	return 0;

}
