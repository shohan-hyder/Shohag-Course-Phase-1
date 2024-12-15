#include<iostream>
using namespace std;
int main() {
    int N,counter;
    cin>>N;
    string s;
    if(N>=1 && N<=100) {
    for (int i=0;i<N;i++) {
    cin>>s;
    counter =1;

    if (s.length()<=10) {
        cout<<s<<endl;
    }
    else {
        for(int i=1;i<s.length()-2;i++) {

            counter++;
        }

        cout<<s[0]<<counter<<s[s.length()-1]<<endl;
    }

    }
    }

    return 0;
}
 