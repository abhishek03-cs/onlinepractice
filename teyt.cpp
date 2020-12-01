#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int i=1;
    while(i<=t){
        int n,k,j;
        cin>>n>>k;
        int arr[n+1];
          j=1;
        while(j<=n){
            int l;
            if(j+k-1+k>n)
                break;
            else{
            for(l=j;l<j+k;l++)
                    arr[l]=l+k;
                j=l;
                for(;l<j+k;l++)
                    arr[l]=l-k;}
                j=l;}

        if(j==n+1){
            for(j=1;j<=n;j++){
                cout<<arr[j]<<" ";
            }
            cout<<endl;
        }
        else cout<<"-1"<<endl;
        i++;}
        return 0;}
