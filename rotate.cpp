#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int n;
	cin>>n;
	int arr[n][n];
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			cin>>arr[i][j];
		int start_row=0,start_col=0,end_col=n-1;
		while(start_row<n){
			start_col=0;
			end_col=n-1;
			while(start_col<end_col){
				swap(arr[start_row][start_col],arr[start_row][end_col]);
				start_col++;
				end_col--;
			}
			start_row++;
		}
		start_row=0;
		start_col=0;
		end_col=n-1;
		while(start_row<n){
			for(int j=start_col;j<=end_col;j++)
				swap(arr[start_row][j],arr[j][start_row]);
			start_row++;
			start_col++;
		}
		cout<<endl;
		for(int i=0;i<n;i++){
		for(int j=0;j<n;j++)
			cout<<arr[i][j]<<" ";
		cout<<endl;

		}
		

		
		return 0;


}