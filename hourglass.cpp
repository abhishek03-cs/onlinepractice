#include<iostream>
using namespace std;
int main(){
	int n=6;
	int arr[n][n];
	for (int i = 0; i < n; ++i)
	{
	for (int j = 0; j < n; ++j)
	{
		cin>>arr[i][j];
		
	}
	}
  int sum=0,max_sum=0;
  for (int i = 0; i < n-2; ++i)
  {
  	for (int j = 0; j < n-2; ++j)
  	{
      sum=arr[i][j]+arr[i][j+1]+arr[i][j+2]+arr[i+1][j+1]+arr[i+2][j]+arr[i+2][j+1]+arr[i+2][j+2];
      if(sum>max_sum)
      max_sum=sum; 
  	}
  	/* code */
  }
cout<<max_sum<<endl;
return 0;
}