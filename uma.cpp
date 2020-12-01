#include<iostream>
#include<string>
#include<cstring>
using namespace std;

int main(){
	int num,count=0;
	cin>>num;

	string arr_string[num];
	for (int i = 0; i < num; ++i)
	{
		/* code */
		cin >> arr_string[i];
	}
	int num_query;
	cin>>num_query;
	string query_arr[num_query];


	for (int i = 0; i < num_query; ++i)
	{
		/* code */
		cin>>query_arr[i];
	}

for (int i = 0; i < num_query; ++i)
{
	/* code */for (int j = 0; j < num; ++j)
	{
		/* code */if(arr_string[j]==query_arr[i])
		count++;
	}
	cout<<count<<endl;
	count=0;
}
return 0;
}
