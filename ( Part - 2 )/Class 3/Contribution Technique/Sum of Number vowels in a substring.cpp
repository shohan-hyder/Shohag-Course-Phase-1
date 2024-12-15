#include<bits/stdc++.h>
#define ll long long
#define endl '\n'

using namespace std;
bool is_vowel(char temp) {
	return temp == 'a' || temp == 'e' || temp == 'i' || temp == 'o' || temp == 'u';
}

int32_t main() {
	ios_base :: sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	// ---------------------------------------------------------------------
	//Sum of number of vowels in a substring (contribution Technique)
	// ---------------------------------------------------------------------

	string s;
	cin >> s;
	//Brute force
	/*
		for (int i = 0; i < s.size(); i++) {
			string temp;
			for (int j = i; j < s.size(); j++) {
				temp = temp + s[j];
				for (int k = 0; k < temp.size(); k++) {
					if (temp[k] == 'a' || temp[k] == 'e' || temp[k] == 'i' || temp[k] == 'o' || temp[k] == 'u') {
						cnt++;
					}

				}
				//cout << temp << " " << cnt << endl;
	// TC -- 0(n^2)


			}
		}*/


	//1st process
	ll cnt = 0;
	int n = s.size();
	for (int i = 0; i < s.size(); i++) {
		if (is_vowel(s[i])) {
			cnt += 1ll * (i + 1) * (n - i);
		}
	}
	cout << cnt << endl;

	// TC -- 0(n)


	//2nd process
	string temp = " ";
	temp = temp + s;
	ll ans = 0;

	for (int i = 1; i < temp.size(); i++) {
		if (temp[i] == 'a' || temp[i] == 'e' || temp[i] == 'i' || temp[i] == 'o' || temp[i] == 'u') {
			//cnt += 1ll * (i + 1) * (n - i);
			ans += (n - i + 1) * i;
		}
	}
	cout << ans << endl;

	// TC -- 0(n)





	return 0;
}