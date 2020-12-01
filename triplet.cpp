#include<iostream>
using namespace std;
int giv(long long int arr[],int lower,int upper,long long int key,long long int r){
	int c=0,t;
	bool p=true;
	int j=lower,k=0;
	while(p){
		//search for sec
		t=0;
		while(j<upper-1){
			if(arr[j]==key*r)
				break;
			j++;
		}
		if(j==upper-1)
			break;
		j++;
		 k=j;
		 while(k<upper){
		 	if(arr[k]==key*r*r){
		 		c++;
		 		t=1;}
		 		k++;
		 }
		 if(t==0)
		 	break;
		}
	return c;
}
int main(){
	int n;
	cin>>n;
	long long int r;
	cin>>r;
	long long int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int c=0;
	for(int i=0;i<n-2;i++){
		c=c+giv(arr,i+1,n,arr[i],r);
	}
	cout<<c;
	return 0;

}