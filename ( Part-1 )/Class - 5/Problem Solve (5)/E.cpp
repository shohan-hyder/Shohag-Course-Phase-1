
#include<bits/stdc++.h>
#define ll long long int
#define ull unsigned ll
#define vi vector<int>
#define vll vector<long long int>
#define vd vector<double>
#define vs vector<string>
#define ipair pair<int,int>
#define llpair pair<ll,ll>
#define dblpair pair<double,double>
#define vpi vector< pair<int,int> >
#define vpll vector< pair<ll,ll> >
#define li list<int> 
#define lill list<long long int>
#define lid list<double>
#define loopi(i,a,n) for(int i=a;i<n;i++)
#define loopl(i,a,n) for(ll i=a;i<n;i++)

#define gcd(aaa, aaaa) __gcd((aaa), (aaaa));
#define lcm(aaa, aaaa) (abs((aaa)*(aaaa))/gcd(aaa, aaaa))

#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define endl '\n'
#define sz(x) x.size()
#define sqr(a) ((a) * (a))
const ll MOD = 1e9+7;

#define TestCase() int tc;cin >> tc; while(tc--)
#define fasterIO() ios_base :: sync_with_stdio(0); cin.tie(0);cout.tie(0)
#define openFile() freopen("input.txt","r",stdin);freopen("output.txt","w",stdout)
#define noScientific() cout.setf(ios::fixed)

using namespace std;

bool compare(pair<int,int> p1 , pair<int,int> p2) {

    //int x1 = p1.ff, y1 = p1.ss;
    auto [x1,y1] = p1;
    //int x2 = p2.ff,  y2 = p2.ss;
    auto [x2,y2] = p2;

    if(x1 > x2) return true;
    else if(x1 == x2 ){
        if(y1 < y2) {
            return true;
        }
    }

    return false;


}

int main() {
   fasterIO();

   TestCase(){
    int n;
    cin>>n;

    vector< pair<int,int> > a;

    while(n--) {
        int x,y;
        cin>>x>>y;
        a.pb({x,y});
    }

    sort(a.rbegin(),a.rend(),compare);
    //reverse(a.begin(),a.end());

    for (auto k: a) {
        cout<<k.ff<<" "<<k.ss<<endl;
    }



   }
   
   return 0;
}
//Link: https://www.spoj.com/problems/SORT2D/