//https://www.spoj.com/problems/TOHMOVE1/
#include<bits/stdc++.h>
#define ll long long
#define endl '\n'

using namespace std;
int disk, step, cnt ;


void tower_of_hanoi(int num, char Source, char Auxilary, char Final) {


	if (num == 0) {
		return;
	}

	tower_of_hanoi(num - 1, Source , Final, Auxilary);

	cnt++;

	if (step == cnt) {
		cout << num << " : " << Source << " => " << Final << endl;
	}


	tower_of_hanoi(num - 1, Auxilary, Source, Final);


}

int32_t main() {
	ios_base :: sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int t;
	cin >> t;

	while (t--) {
		cin >> disk >> step;
		cnt = 0;
		tower_of_hanoi(disk, 'A', 'B', 'C');
	}


	return 0;
}