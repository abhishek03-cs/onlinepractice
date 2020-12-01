#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int n,m;
	cin>>n>>m;
	int arr[n][m];
	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++)
			cin>>arr[i][j];
		int key;
		cin>>key;
		int start_row=0,start_col=0,end_row=n-1,end_col=m-1;
		while(start_row<=end_row && start_col<=end_col){
			if(key<arr[start_row][end_col])
				end_col--;
			else if(key>arr[start_row][end_col])
				start_row++;
			else{
				cout<<"1";
				return 0;
			}
		}
		cout<<"0";
		return 0;

	}


