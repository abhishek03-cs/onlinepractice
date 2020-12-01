#include<iostream>
using namespace std;
int main() {
	int m,n;
	  cin>>m>>n;
	int arr[m][n];
	for(int i=0;i<m;i++)
	for(int j=0;j<n;j++)
	cin>>arr[i][j];

	int i=-1;
	int j=0;
	while(j<n){
	if(i==-1){
		for(i=0;i<m;i++)
		cout<<" "<<arr[i][j]<<",";
	}
	else if(i==m){
		for(i=m-1;i>=0;i--)
		cout<<" "<<arr[i][j]<<",";

	}
j++;}
cout<<" "<<"END";


	return 0;
}

