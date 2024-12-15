#include <bits/stdc++.h>
#include <limits>
#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long


using namespace std;

int main(){

   ll numberOfmachine,product;
   cin>>numberOfmachine>>product;

   ll a[numberOfmachine];

   for(int i=0;i<numberOfmachine;i++){
    cin>>a[i];
   }

   ll lo=0,hi=1e18; //

   ll ans=0; //

   while(lo<=hi){

    ll mid=(lo+hi) /2;

    ll num_product=0;

    for(int i=0;i<numberOfmachine;i++){
        num_product+=mid /a[i];

        if(num_product>= product){
            break;
        }
    }
    if(num_product>= product){
        ans=mid;

        hi=mid-1;
    }
    else{
        lo=mid+1;
    }
   }
   cout<<ans<<'\n';


}
//Link: https://cses.fi/problemset/task/1620/