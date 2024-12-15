#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
        int t;
        cin>>t;

        while(t--) {
            int n;
            cin>>n;

            if(n%2!=0) {
            for(int i=1;i<=n;i++) {
                if(i%2!=0) cout<<i<<" ";
            }

            for(int i=1;i<=n;i++) {
                if(i%2==0) cout<<i<<" ";
            }
            cout<<endl;
            }
            else {
               for(int i=1;i<=n;i++) {
                if(i%2==0) cout<<i<<" ";
            }
            for(int i=1;i<=n;i++) {
                if(i%2!=0) cout<<i<<" ";
            }
            cout<<endl;
            }
        }

}
 