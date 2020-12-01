#include<iostream>
using namespace std;
void chaos(int arr[],int n){
    int count=0, smallest=100001,sec=100001;
    for (int i = n-1; i >=0; --i)
    {
        /* code */
        if(arr[i]>i+3){
            cout<<"Too chaotic"<<endl;
            return ;
        }
        if(arr[i]>sec){
            count=count+2;
            continue;
        }
        else if(arr[i]>smallest){
            count++;
            sec=arr[i];
        }
        else{
            sec=smallest;
            smallest=arr[i];
        }

    }
    cout<<count<<endl;

}
int main(){
    int t;
    cin>>t;
    int i=1;
    while(i<=t){
        int n;
        cin>>n;
        int arr[n];
        for(int j=0;j<n;j++){
            cin>>arr[j];
        }
        chaos(arr,n);
        ++i;
    }
    return 0;

}
