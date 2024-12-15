
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

int n,m;
int a[100][100];
int b[100][100];
int ans[100][100];
void solve(int f, int e) {

   if(f == n || e == m) return ;

   if(e<m-1) {// e < column -1
      solve(f,e+1);
   }
   else {
      solve(f+1,0);
   }

   ans[f][e] = a[f][e] + b[f][e];

}

int main() {
   fasterIO();

   cin>>n>>m;
   
   loopi(i,0,n) {
      loopi(j,0,m) {
         cin>>a[i][j];
      }
   }

   loopi(i,0,n) {
      loopi(j,0,m) {
         cin>>b[i][j];
      }
   }
   
  solve(0,0);

  loopi(i,0,n) {
      loopi(j,0,m) {
         cout<<ans[i][j]<<" ";
      }
      cout<<endl;
   }
   
   
   
   return 0;
}
