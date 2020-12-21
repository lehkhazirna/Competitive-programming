#include <iostream>

typedef long long ll;
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    bool x,y;
    ll n, a, b;
    cin >> n;
    for (ll i = 0; i < n;i++) {
        cin >> a >> b;
        
        x =((2*a - b)>=0 && (2 * a - b)%3==0);
        y = ((2 * b - a) >= 0 && (2 * b - a) % 3 == 0);;
        
        if (x==true && y==true )cout << "YES\n";
        else cout << "NO\n";
    
    }

    return 0;
}
