
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


 ll n,sum=0;
 cin>>n;

 for (int i=1;i<=n;i++) { //n times 10 == -- i =2
   for(int j=i;j<=n;j+=i) { // j times 10 
      sum += i;//
      cout<<i<<" conut time"<<endl;
   }
   cout<<endl;
   
   // n + n/2 + n/3 + n/4 + n/5 ....)
   // n (1+ 10/2 + 10/3 + 10/4 ....) harmonic series
 }
 // Time complexity 0(nlogn)
 cout<<sum<<endl;

 return 0;
}
