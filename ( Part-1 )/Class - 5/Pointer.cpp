#include<bits/stdc++.h>
using namespace std;

void interchage(int a , int b) {
   int temp = a;
   a = b;
   b = temp;
}

void interchage2(int* a, int* b) {
   int temp = *a;
   *a = *b;
   *b = temp;
}

void interchage3(int& a, int& b) {
   int temp = a;
   a = b;
   b = temp;
}

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
 
 /* 
   // call by pointer
   int a = 10;
   int* ptr;
   ptr = &a;

   *ptr=123;
   *ptr += 2; // can also adding *ptr value -- 

   //Address Same ----
   cout<<"Address: "<<'\n';
   cout<<ptr<<endl;
   cout<<&a<<endl;

   cout<<a<<endl; // a = 20
   cout<<*ptr<<endl; // ptr = 


   // Call by reference
   int g =10;
   int& b = g;

   //adress -- Value --- Same ---
   cout<<&g<<'\n'<<&b<<'\n';   
   cout<<g<<'\n'<<b<<'\n';
*/


  int first = 99, second = 78;

  interchage(first,second);
  cout << first << ' ' << second << '\n'; // Output: 99 78 (no change in the values first & second )

  interchage2(&first, &second);
  cout << first << ' ' << second << '\n'; // Output: 78 99 (values of 'first' and 'second' are swapped)
  
  interchage3(first,second);
  cout << first << ' ' << second << '\n'; // Output: 99 78 (values of 'first' and 'second' are swapped)

  //int a = 10, b = 20;
  //swap1(a, b);

  //swap2(&a, &b);
  //cout << a << ' ' << b << '\n'; // Output: 20 10 (values of 'a' and 'b' are swapped)

  //swap3(a, b);
  //cout << a << ' ' << b << '\n'; // Output: 10 20 (values of 'a' and 'b' are swapped)

  return 0;
}