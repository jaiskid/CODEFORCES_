#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	while (t--)
	{
		string s;
		cin >> s;
		if (s.size() <= 10) {
			cout << s << endl;
		}
		else {
			int count = 0;
			for (int i = 1; i < s.size() - 1; i++) {
				count++;
			}
			cout << s[0] << count << s[s.size()-1] << endl;
		}
	}
}