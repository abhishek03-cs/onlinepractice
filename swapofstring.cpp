#include<iostream>
#include<string>
using namespace std;
int main(){
	string s;
	cin>>s;
	char ch[s.length()];
	for(int j=0;j<=s.length();j++)
		ch[j]=s[j];
	
     int k,c=0,d=0;
     cin>>k;
     int t=k;
     int i=0,first,start=0;
    int  key=s[0];
     while(i<s.length()){
     	if(key==ch[i]){
     		i++;
     		d++;
     		if(d>c)
     			c=d;
     		continue;

     	}
     	else{
     		t--;
     		d++;
     		first=i;
     		i++;
     		while(i<s.length()){
     			if(key==ch[i]){
     				i++;
     			d++;
     			continue;}
     			if(t<1)
     				break;
     			else{
     				t--;
     				i++;
     				d++;
     			}}
     				
     			if(t>0){
     				i=start-1;
     				while(i>=0 && t>0){
     					if(ch[i]==key){
     						d++;
     						i--;
     					}
     					else{
     						t--;
     						d++;
     						i--;
     					}
     				}}

     			}
     			i=first;
     			start=first;
     			if(d>c)
     			c=d;
               key=ch[first];
               t=k;
               d=0;
     			}
     		cout<<c<<endl;
     		return 0;

     		}