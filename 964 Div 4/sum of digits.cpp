#include <iostream>  
using namespace std;

int main(){
    int n,sum;
    
    cin>> n ;
    int arr[n];
    int ans[n];

    for(int i=0;i<n;i++){
        sum=0;
        cin>>arr[i];
        sum+=arr[i]%10 + (arr[i]/10)%10;
        ans[i]=sum;
        
    }
    for(int i=0;i<n;i++){
    cout<<ans[i]<<"\n";
    }
    



    return 0;
}