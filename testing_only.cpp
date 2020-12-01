#include<iostream>
#include<string>
using namespace std;

int main(){
string s;
cin>>s;
long long int n;
cin>>n;
 int n1=s.length(),noa=0;
long long int total;
for (int i = 0; i < n1; ++i)
{
	/* code */
	if(s[i]=='a')
		noa++;
}
long long int n2=n/n1;
total=n2*noa;
n2=n%n1;
noa=0;
for (int i = 0; i < n2; ++i)
{
	/* code */
	if(s[i]=='a')
		noa++;
}
total=total+noa;
cout<<total<<endl;
	return 0;
}