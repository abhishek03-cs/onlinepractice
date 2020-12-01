#include<iostream>
using namespace std;
int main(){
	char c;
	cin>>c;
	if(c>='a' && c<='z')
		cout<<"lowercase"<<endl;
	else if(c>='A' && c<='z')
		cout<<"UPPERCASE"<<endl;
	else
		cout<<"invalid"<<endl;
	return 0;

}