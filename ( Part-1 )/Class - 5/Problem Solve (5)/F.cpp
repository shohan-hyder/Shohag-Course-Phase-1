
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

int main() {
   fasterIO();

   //pair<pair<int,int>,string> p;
   map<pair<int,int>,string> m; 

   int n; cin>>n;
   loopi(i,1,n+1) {
    int x,y;
    string name;
    cin>>x>>y>>name;
    //p[make_pair(x,y)] = name;
    //pair <int,int> p = make_pair(x,y);
    //m.insert({make_pair(x,y),s}); // can't update the values of pair
    m[make_pair(x,y)] = name; // also updated the value of the pair values

   }

   int t; cin>>t;
   while(t--) {
    int f,n;
    cin>>f>>n;
    //pair<int,int> c = make_pair(f,n);
    //cout<< m[c] <<endl;
    cout << m[make_pair(f,n)] << endl; 
   }
   
   return 0;
}
