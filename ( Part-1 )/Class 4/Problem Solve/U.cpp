#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main() {
    string s;
    int num;
    cin>>s;
    sort(s.begin(), s.end());

    for(int i=0;i<s.size();i++) {
        if (s[i] == '+') {
            continue;
        }
        else {
            num = s.size()-1;
            if (i != num)
            cout<<s[i]<<"+";
            else
            cout<<s[i];
        }
    }





    return 0;
}