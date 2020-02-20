//632c
#include<iostream>
#include<algorithm>
using namespace std;
bool comp(string a,string b){
	return a+b<b+a;
}
int main(){
	int n;
	cin>>n;
	string arr[n];
	for(int i=0;i<n;i++){
	cin>>arr[i];
	}
	sort(arr,arr+n,comp);
	for(int i=0;i<n;i++){
	cout<<arr[i];
	}
}