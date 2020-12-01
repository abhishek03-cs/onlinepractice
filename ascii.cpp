#include<iostream>
#include<string>
using namespace std;
int main(){
	string s;
	cin>>s;
	char ch[s.length()];
	for(int i=0;i<=s.length();i++){
		ch[i]=s[i];
	}
	char c=ch[0];
	cout<<c;
	for(int i=1;i<s.length();i++){
		cout<<ch[i]-c<<ch[i];
		c=ch[i];
	}
	return 0;
	}
7
100 100 50 40 40 20 10
4
5 25 50 120