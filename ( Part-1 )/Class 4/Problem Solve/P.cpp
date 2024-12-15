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

int prime_number(ll num) {

   if(num == 1 || (num%2==0 && num!=2) ) {
      return 0;
   }
   else {
      for(int i=3;i<=sqrt(num);i+=2) {
         if(num % i == 0 ) {
            return 0;
         }
      }
   }

   return 1;

}

int bin_exponentiation(int base, int power) {
    int res = 1;
    //Time Complexity --- 0(log(n))
    while(power) {
        if(power%2) {
            res = (res * base) % MOD;
            power--;
        }
        else {
            base = (base * base) % MOD;
            power /=2;
        }
    }
    return res;

}

int palindrome(vi &ar, int elm) {
   bool flag=true;

   for(int i=0;i<(elm/2);i++) {
      if(ar[i] != ar[elm-i-1]) {
         flag = false;
         break;
      }
   }

   if(!flag) return 0;

   return 1;
}

int main() {
   fasterIO();

   TestCase() {
      int n,k; cin>>n>>k;
   vll a(n+1);
   vll b(n+1);
   bool flag = true;

   loopi(i,n-k+1,n+1) cin>>a[i];

   if(k==1) {
      cout<<"YES"<<endl;
   }
   else {
   for (int i = n - k + 2; i <= n; ++i)
      b[i] = a[i] - a[i - 1];


   if (!is_sorted(b.begin() + n - k + 2, b.end()))
   {
      flag = false;
   }

   cout<<a[n-k+1]<<' '<<b[n-k+2]<<endl;

   if (a[n - k + 1] > b[n - k + 2] * (n - k + 1))
   {
      flag = false;
   }

  if(flag) cout<<"YES"<<endl;
   else cout<<"NO"<<endl;
}

}
   return 0;


/*
   int first = a[0];
   bool flag = true;
   loopi(i,0,k-1) {

      //cout<<a[i]<<" "<<a[i+1] - a[i]<<endl;
      if(first > (a[i+1] - a[i]) ) {
         flag = false; 
         break;
      }

      first = a[i+1] - a[i];

   }


   if(flag) cout<<"YES"<<endl;
   else cout<<"NO"<<endl;
   }
*/ 
}

//Link: https://codeforces.com/contest/1738/problem/B
