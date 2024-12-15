
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

int print(map<int,string> m) {
   for(auto it=m.begin();it!=m.end();it++) {
      cout<<(*it).first<<' '<<(*it).second<<' '<<'\n';
   }
   cout<<'\n';
}


int main() {
   fasterIO();

   map<int,string> sh;

   sh.insert({1,"show"});
   sh[1] = "Believe";
   sh[2] = "Trust";
   sh[-3] = "Lose";

   print(sh);  
   
   cout<<endl;
   // ---- Bitset ----

   bitset<10> a(1101011110),b(1010100011);
   //cout<<a<<endl;
   //a.set(1);
   //a.reset();
   a.flip(0);
   cout<<a<<endl;

   cout<<"The count: "<<a.count()<<endl;
   // convert to long long 
   cout<<"u Long long: "<<a.to_ullong()<<endl; 
   cout<<"to_string "<<a.to_string()<<endl;

   cout<<"any number have 1: "<<a.any()<<endl;
   cout<<"AL number have 1 : "<<a.all()<<endl;
   a = a<<1;
   cout<<"Left shift: "<<a<<endl;

   cout<<endl;
   cout<<a<<endl<<b<<endl;
   // and -- or -- xor -- not
   cout<<"AND: "<< (a&b) <<endl;
   cout<<"OR:  "<< (a|b) <<endl;
   cout<<"XOR: "<<(a^b) <<endl;
   cout<<"NOT: "<<(~a)<<endl;



   // -- Stringstram -- 
   string s ="assddd 78 90 37 038 12";

   stringstream ss(s);
   cout<< ss.str()<<endl;

   return 0;
}
