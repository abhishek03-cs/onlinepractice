#include<iostream>
using namespace std;
int binary(int lower,int upper,int arr[],int key)
{
if(upper<1)
{
	cout<<"element is not present in the array"<<endl;
	return 0;

}   
int mid=(lower+upper)/2;
if(key==arr[mid]){
cout<<"element found in the array at the index"<<mid<<endl;
return 0;    }     
else if (key<arr[mid])
	binary(lower,mid,arr,key);
else 
	binary(mid+1,upper,arr,key);
return 0;
    }

int main()
{
	int arr[50];
	int n,key;
	cin>>n>>key;
	for(int i=0;i<n;i++)
		cin>>arr[i];
	binary(0,n,arr,key);
	return 0;

}