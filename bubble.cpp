#include<iostream>
using namespace std;
 int main()
 {
 	int n,temp,t;
 	cin>>n;
 	int arr[n];
 	for(int i=0;i<n;i++)
 	{
 		cin>>arr[i];

 	}
 	t=n;
 	while(n>1){
 		for(int i=0;i<n-1;i++){
 			if(arr[i]>arr[i+1]){

 			temp=arr[i];
 		arr[i]=arr[i+1];
 		arr[i+1]=temp;}}

 		n--;
 	}
 		  for( int i=0;i<t;i++)
{
	cout<<arr[i]<<endl;
}

 	
 	return 0;
 }