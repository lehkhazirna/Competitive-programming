#include<bits/stdc++.h>
#define MOD 1000000007

using namespace std;
typedef long long ll;

// ( a + b ) % c = ( ( a % c ) + ( b % c ) ) % c
// ( a * b ) % c = ( ( a % c ) * ( b % c ) ) % c
// 
//  2^5 = 2*2*2*2*2
//  (2^5) mod B =((2 mod B)*(5 mod B)) mod B
//

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	ll ans=1,n;
	cin>>n;
	
	while (n--)
       ans = ans * 2 % MOD;
    
    cout<<ans%MOD;
	
    return 0;
}
