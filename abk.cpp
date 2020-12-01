#include <cmath>
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    long int N,K,p,q,sum,i,j,max=0,x=0;

    cin>>N>>K;
    long int *a=new long int[N+1]();

    for(i=0;i<K;i++)
    {
        cin>>p>>q>>sum;
        a[p]+=sum;
        if((q+1)<=N) a[q+1]-=sum;
        cout<<endl<<"after "<<++max<<" iteration array is";
        for(int k=1;k<=N;k++)
        	cout<<a[k]<<" ";
        cout<<endl;
        cin.get();
    }
    return 0;
}