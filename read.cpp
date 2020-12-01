#include<iostream>
#include<cstring>
using namespace std;
int main(){
	string s;
	cin>>s;
	char ch[s.length()+1];
	for(int i=0;i<=s.length();i++)
		ch[i]=s[i];
	cout<<ch[0];
	for(int i=1;i<s.length();i++){
		if('a'<=ch[i])
			cout<<ch[i];
	else
	{
      cout<<endl<<ch[i];
	}
}

	return 0;
}

	

