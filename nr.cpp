#include<iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	int k;
	cin >> k;
	int arr[1005];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	int max;
	for (int i = 0; i < n; i++) {
		if (i + 1 == k)
			max = arr[i];
	}
	int count = 0;
	for (int i = 0; i < n; i++) {
		if (arr[i] >= max and arr[i] > 0) {
			count++;
		}
	}
	cout << count << endl;
}