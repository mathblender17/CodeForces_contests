#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int val[4];
        for(int i: {0,1,2,3}) cin>>val[i];

        int ans=0;
        for(int a:{0,1}){
            for(int b:{0,1}){
                int r=0;
                for(int i:{0,1}){
                    r+=(val[i^a] > val[(i+2)^b]);
                    r-=(val[i^a] < val[(i+2)^b]);
                }
                ans+=(r>0);
        }
        }
        cout<<ans<<"\n";

    }
    return 0;
}