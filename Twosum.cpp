#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a=1;
	int b=1;
	int sum=0;
	int t;
	for(int i=1;i<=n;i++){
		
		sum+=a;
		t=a+b;
		a=b;
		b=t;
	}
	cout<<sum<<endl;
}