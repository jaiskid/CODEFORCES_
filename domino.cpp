#include<bits/stdc++.h>
using namespace std;
int rectangle(int n, int m) {
	return (n * m) / 2;
}
int main() {
	int n, m;
	cin >> n >> m;
	cout << rectangle(n, m);
}