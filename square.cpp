#include<bits/stdc++.h>
using namespace std;
bool isPerfectSquare(long double x)
{
	// Find floating point value of
	// square root of x.
	long double sr = sqrt(x);

	// If square root is an integer
	return ((sr - floor(sr)) == 0);
}
int main() {

	int t;
	cin >> t;
	while (t--) {
		int ans = 0;
		int a, b, c, d;
		cin >> a >> b >> c >> d;
		ans = (a * b) + (c * d);
		(isPerfectSquare(ans)) ? cout << "YES" << endl : cout << "NO" << endl;
	}


}
