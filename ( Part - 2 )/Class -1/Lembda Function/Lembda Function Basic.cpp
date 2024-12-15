#include<bits/stdc++.h>
#define ll long long
#define endl '\n'

using namespace std;

int32_t main() {
	ios_base :: sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	//Lembda Function ---
	int n = 80;
	//capture all the values outside of the fuunction but not inside of the function
	auto get_sum = [ = ] (int a, int b) -> int {
		//n = 100; // Because it cann't capture the value inside the function
		return a + b + n;
	};

	cout << " [ = ] " << get_sum(1, 2) << endl;

	// Capture value also modify also in the function;
	int s = 10;
	auto get_sum2 = [ & ] (int a, int b) -> int {
		s = 100; // here : s - value convert 10 to 100
		return a + b + s;
	};

	cout << " [ & ] " << get_sum2(1, 2) << endl;


	//Another way
	int f = 1000;
	auto get_sum3 = [&f] (int a, int b)  { // capture by reference  and [f] indicates capture by intial
		return a + b + f;
	};

	cout << get_sum3(1, 2) << endl;




	return 0;
}