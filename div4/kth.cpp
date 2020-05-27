#include<bits/stdc++.h>
using namespace std;
int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		int k;
		cin >> k;
		for (int i = 1; i < k; i++) {
			if (i % n != 0)
				cout << k <<" ";
		}
		cout << endl;
	}
}
