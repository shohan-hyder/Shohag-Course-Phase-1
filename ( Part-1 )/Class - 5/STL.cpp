
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

   deque<int> a;
   a.pb(5);
   a.pb(331);
   a.pb(22);
   a.pb(2311);
   a.push_front(11);
   a.pop_front();
   for(auto x : a) cout<<x<<" ";

   cout<<endl;

   //Priority queue
   priority_queue<ll> p;
   p.push(3);
   p.push(12);
   p.push(56);
   p.push(90);

   cout<<"The top: "<<p.top()<<endl;

   p.pop();
   cout<<"The top: "<<p.top()<<endl;

   if(p.empty()) cout<<"YES"<<endl;
   else cout<<"NO"<<endl;

   priority_queue<ll> copy;
   copy.push(90);
   copy.push(115);
   copy.push(963);
   copy.push(1025);

   p.swap(copy);

   cout<<"The top: "<<p.top()<<endl;

   cout<<"Size: "<<p.size()<<endl;

   // Set
   cout<<"---Set---"<<endl;
   set<int> num;
   num.insert(1);
   num.insert(2);
   num.insert(2);
   num.insert(4);
   num.insert(5);

   //using iterator
   cout<<"Using Iterator: ";
   for(set<int>::iterator it = num.begin();it!=num.end();it++) {
      cout<< *it <<" " ;
   }
   cout<<endl;

   cout<<"Using Loop: ";
   for(auto x : num ) {
      cout<<x<<" ";
   }
   cout<<endl;

   cout<<"After Erase: ";
   num.erase(2);
   for(auto x : num ) {
      cout<<x<<" ";
   }
   cout<<endl;

   // using iterator to erase any elemnet
   set<int>::iterator val = num.find(4);
   //num.erase(val);
   for(auto x : num ) {
      cout<<x<<" ";
   }
   cout<<endl;
   cout<< *val <<endl;// represents value
   //cannot use val - num.begin() -- to find the index value
   set<int>::iterator o = num.begin();
   cout<<"First element: "<<*o<<endl<<endl;


   //--- MULTISET -----
   multiset<int> m;
   m.insert(8);
   m.insert(9);
   m.insert(7);
   m.insert(7);
   m.insert(9);
   m.insert(8);

   //Sorted value --
   cout<<"Multi-Set Value: ";

   for(auto k: m) cout<<k<<" ";
   cout<<endl;

  
   //using to iterator to print value
   cout<<"Using iterator: ";
   for( multiset<int>::iterator op=m.begin();op!=m.end();op++) cout<<*op<<" ";
   cout<<endl;

   int n = m.count(8); // awesome thing
   cout<<"The count Number: "<<n<<endl;

   //Removing all the 7 elements
   m.erase(7);
   cout<<"After Erasing: ";
   for(auto k: m) cout<<k<<" ";
   cout<<endl;

   
   //Using iterator to erase just one time;
   multiset<int>::iterator it1,it2,it3;
   it1 = m.begin();
   it2 = m.end();

   // 8 8 9 9 
   it2--,it2--;
   m.erase(it1,it2);
   for(auto k: m) cout<<k<<" ";
   cout<<endl;
   


   // only just 1 of item (8) ----
   m.insert(8);
   m.insert(8);
   m.insert(10);

   it3 = m.find(8);
   m.erase(it3);
   for(auto k: m) cout<<k<<" ";
   cout<<endl;

   return 0;
}
