#include<iostream>
using namespace std;
int main() {
	std::ios::sync_with_stdio(false);
	long long int n, m;
	cin >> n >> m;
	long long int num = n ^ m;
	long long int msb = 0;
	while (num != 0) {
		num = num >> 1;
		msb++;
	}
	int result = 1;
	while (msb--) {
		result = result <<= 1;
	}
	cout << result - 1 << endl;
}