#include<iostream>
using namespace std;
void product(int n)
{
    for (int i=2; i*i<=n; i++)
    {
        if (n % i == 0)
        {
            int d = n/i;

            for (int j=i+1; j*j<d; j++)
            {
                if (d % j == 0)
                {
                  cout<<"YES"<<endl;
                  cout<<i<<" "<<j<<" "<<d/j<<endl;
                    return;
                }
            }
        }
    }
    cout<<"NO\n"<<endl;
}
int main(){
	int t;
	cin>>t;
	while(t--){
	int n;
	cin>>n;
	product(n);
	}
}