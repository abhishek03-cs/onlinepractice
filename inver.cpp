#include<iostream>
using namespace std;
int merge(int arr[],int lower,int mid,int upper){
	int arr1[(mid-lower)+1],arr2[upper-mid];
	int k=0,m=0,c=0;
	for(int i=lower;i<=mid;i++)
		arr1[k++]=arr[i];
	for(int i=mid+1;i<=upper;i++)
		arr2[m++]=arr[i];
	//merge and counting inversion starts now
	int i=0,j=0;
	while(i<k && j<m){
		if(arr1[i]<=arr2[j]){
			arr[lower++]=arr1[i++];
		}
		else{
			c=c+k-i;
			arr[lower++]=arr2[j++];
		}
	}
	if(i<k){
		while(i<k)
			arr[lower++]=arr1[i++];
	}
	if(j<m){
		while(j<m)
			arr[lower++]=arr2[j++];}
		return c;}
int inver(int arr[],int lower,int upper){
	if(lower==upper)
		return 0;
	int mid=(lower+upper)/2;
	return inver(arr,lower,mid)+inver(arr,mid+1,upper)+merge(arr,lower,mid,upper);
}
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];

   int c=inver(arr,0,n-1);
   cout<<c<<endl;
   return 0;}

	
