//https://www.spoj.com/problems/TOHMOVE1/
#include<bits/stdc++.h>
#define ll long long
#define endl '\n'

using namespace std;
int disk;


void tower_of_hanoi(int num, string Source, string Auxilary, string Final) {


	if (num == 1) {
		cout << "Disk sent " << Source << " to " << Final << endl;
		return;
	}

	tower_of_hanoi(num - 1, Source , Final, Auxilary);

	cout << "Disk sent " << Source << " to " << Final << endl;

	tower_of_hanoi(num - 1, Auxilary, Source, Final);


}

int32_t main() {
	ios_base :: sync_with_stdio(0);
	cin.tie(0); cout.tie(0);


	cin >> disk ;
	tower_of_hanoi(disk, "Source", "Auxilary", "Final");


	return 0;
}