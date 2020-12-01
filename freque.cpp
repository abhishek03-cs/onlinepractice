#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
char freq(char ch[],int n){
	
	int max=0;

	sort(ch,ch+n);
	cout<<ch<<endl;
	char key=ch[0],c;
	while(key!='\0'){
		char * j=lower_bound(ch,ch+n,key);
		char * k=upper_bound(ch,ch+n,key);
		int m=k-j+1;
		if(m>max){
			max=m;
			c=key;

		}
		key=*k;}
		return c;
	}

int main(){
	string s;
	cin>>s;
	int n=s.length();
	char ch[n];
	for(int i=0;i<=n;i++)
		ch[i]=s[i];

	char dh=freq(ch,n);
	cout<<dh<<endl;
	return 0;
}
