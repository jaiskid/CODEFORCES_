#include <bits/stdc++.h>
using namespace std;
int largestSumAfterKNegations(vector<int>& A, int K) {
	sort(A.begin(), A.end());
	int remain = K;
	for (int i = 0; i < K && A[i] < 0; ++i) {
		A[i] = -A[i];
		--remain;
	}
	return accumulate(A.cbegin(), A.cend(), 0) -
	       (remain % 2) * *min_element(A.cbegin(), A.cend()) * 2;
}
int main() {
	int n;
	cin >> n;
	vector<int> A(n);
	for (int i = 0; i < n; i++) {
		cin >> A[i];
	}
	int k;
	cin >> k;
	cout << largestSumAfterKNegations(A, k);
}