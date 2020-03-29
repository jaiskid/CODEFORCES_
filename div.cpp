#include<bits/stdc++.h>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	long long int t;
	cin >> t;
	while (t-- > 0) {
		long long int a, b;
		cin >> a >> b;
		long long int count = 0;
		if (a % b == 0) {
			cout << 0 << endl;
		}
		else {
			cout << (b - a % b) << endl;
		}
	}

}