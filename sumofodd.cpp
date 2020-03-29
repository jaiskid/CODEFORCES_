#include<bits/stdc++.h>
using namespace std;
bool isprime(int x)
{
	for (int i = 2; i * i <= x; i++)
		if (x % i == 0)
			return false;
	return true;
}
bool isSumOfKprimes(int N, int K)
{

	if (N < 2 * K)
		return false;
	if (K == 1)
		return isprime(N);

	if (K == 2)
	{
		if (N % 2 == 0)
			return true;


		return isprime(N - 2);
	}

	// If K >= 3 return true;
	return true;
}
int main()
{
	int t;
	cin >> t;
	while (t--) {
		int n, k;
		cin >> n >> k;
		if (isSumOfKprimes (n, k))
			cout << "Yes" << endl;
		else
			cout << "No" << endl;
	}

	return 0;
}
