#include <iostream>
using namespace std;
int gcd(int a,int b){
    if(b==0){
        return a;
    }
    return gcd(b,a%b);
}
int main() {
    int n;
    cin>>n;
    int ans=0;
    for(int i=1;i<=n;i++){
        if(gcd(i,n)==1)
        ans+=gcd(i,n);
    }
   cout<<ans<<endl;
}
