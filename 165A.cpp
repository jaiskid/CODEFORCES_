#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define mp make_pair
#define pb push_back
#define fi first
#define si second
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL);
#define F(a,n) for(int i=0;i<n;i++){cin>>a[i];}
#define F1(a,n) for(int i=1;i<=n;i++){cin>>a[i];}
#define P(a,n) for(int i=0;i<n;i++){cout<<a[i]<<' ';}cout<<endl;
#define P1(a,n) for(int i=1;i<=n;i++){cout<<a[i]<<' ';}cout<<endl;
#define NF(a,n,m) for(int i=0;i<n;i++){for(int j=0;j<m;j++){cin>>a[i][j];}}
#define NF1(a,n,m) for(int i=1;i<=n;i++){for(int j=1;j<=m;j++){cin>>a[i][j];}}
#define PNF(a,n,m) for(int i=0;i<n;i++){for(int j=0;j<m;j++){cout<<a[i][j]<<' ';}cout<<endl;}cout<<endl;
#define PNF1(a,n,m) for(int i=1;i<=n;i++){for(int j=1;j<=m;j++){cout<<a[i][j]<<' ';}cout<<endl;}cout<<endl;
#define AS 200001
#define mod 1000000007
int main() {
	fastIO
	int n;
	cin >> n;
	int x[n], y[n];
	for (int i = 0; i < n; i++) {
		cin >> x[i] >> y[i];
	}

	int count = 0;
	int a, b, c, d;
	for ( int i = 0; i < n; ++i) {
		for (int j = a = b = c = d = 0; j < n; ++j) {
			a |= x[i] == x[j] && y[i] < y[j];
			b |= x[i] == x[j] && y[i] > y[j];
			c |= y[i] == y[j] && x[i] < x[j];
			d |= y[i] == y[j] && x[i] > x[j];
		}
		if (a & b & c & d)++count;
	}
	cout << count << " ";
}