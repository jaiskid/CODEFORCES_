#include <iostream>
using namespace std;
int counter(int n, int k) {
  for (int i = 0; i < k; i++)
  {
    int rem = n % 10;
    if (rem == 0)
      n = n / 10;
    else n = n - 1;
  }
  return n;
}
int main() {
  int n, k;
  cin >> n >> k;
  cout << counter(n, k);
}
