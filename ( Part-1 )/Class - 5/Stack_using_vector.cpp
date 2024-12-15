
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


struct ss{
   vector<int> st;

   void push(int x) {
      st.push_back(x);
   }

   int top() {
      if(st.empty()!=0) {
         cout<<"Vector is empty\n";
         return -1;
      }
      else {
         return st.back();
      }
   }

   void pop() {
      if(st.empty()!=0) {
         cout<<"Can't pop\n";
      }
      else {
         st.pop_back();
      }
   }

   int size() {
      return st.size();
   } 

   bool empty() {
      return st.empty();
   }
};

int main() {
   fasterIO();

   ss sp;
   sp.push(10);
   sp.push(30);
   sp.push(90);

   cout<<sp.top()<<endl;
   sp.pop();
   cout<<sp.top()<<endl;
   sp.pop();
   sp.pop();

   sp.pop(); // cann't pop
   sp.top(); // vector is empty
   cout<<"Size: "<<sp.size()<<endl;
   cout<<"Empty or not: "<<sp.empty()<<endl;
   
   return 0;
}
