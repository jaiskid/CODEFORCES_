// C++ program to find if it is possible to
// write a number n as product of exactly k
// positive numbers greater than 1.
#include <bits/stdc++.h>
using namespace std;

// Prints k factors of n if n can be written
// as multiple of k numbers. Else prints -1.
int kFactors(int n, int k)
{
	// A vector to store all prime factors of n
	vector<int> P;

	// Insert all 2's in vector
	while (n % 2 == 0)
	{
		P.push_back(2);
		n /= 2;
	}

	// n must be odd at this point
	// So we skip one element (i = i + 2)
	for (int i = 3; i * i <= n; i = i + 2)
	{
		while (n % i == 0)
		{
			n = n / i;
			P.push_back(i);
		}
	}

	// This is to handle when n > 2 and
	// n is prime
	if (n > 2)
		P.push_back(n);

	// If size(P) < k, k factors are not possible
	if (P.size() < k)
	{

		return -1;
	}

	// printing first k-1 factors
	//for (int i = 0; i < k - 1; i++)
	//cout << P[i] << ", ";

	// calculating and printing product of rest
	// of numbers
	int product = 1;
	for (int i = k - 1; i < P.size(); i++)
		product = product * P[i];
	return product;
}

// Driver program to test above function
int main()
{
	int t;
	cin >> t;
	while (t--) {
		int n, k;
		cin >> n >> k;
		if (kFactors(n, k) != -1)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}

	return 0;
}
