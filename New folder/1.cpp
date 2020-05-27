#include <bits/stdc++.h>
using namespace std;
int a, b, s, c, f, d, n, i;
main() {

	cin >> n;
	for (i = 0; i < n; i++) {
		cin >> s >> d >> f;
		a = a + s;
		b = b + d;
		c = c + f;
	}
	if (a == 0 & b == 0 & c == 0 )  cout << "YES"; else cout << "NO";


}