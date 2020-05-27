#include<bits/stdc++.h>
using namespace std;
vector<int> ans;
int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif
	int t;
	cin >> t;

	while (t--) {
		int n;
		cin >> n;
		int p = 1;
		int count = 1;
		while (n > 0) {

			int rem = n % 10;
			if (rem != 0) {
				ans.push_back(rem * p);
				count++;
			}
			n /= 10;
			p *= 10;
		}
		cout << count << endl;
		for (int i = 0; i < count; i++) {
			cout << ans[i] << " ";
		}
		cout << endl;
	}
}
