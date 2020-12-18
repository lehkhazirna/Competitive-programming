#include <iostream>
#include <vector>
typedef long long ll;
using namespace std;

int main()
{
    ll n, fel = 1, vsum = 0, wsum;
    cin >> n;
    vector<ll> v1, v2;
    wsum = (n * (n + 1) / 4);
    bool begin = false;

    if ((n * (n + 1)) % 4 != 0) {

        cout << "NO";
        return 0;
    }
    else {
        cout << "YES\n";
        while (vsum != wsum) {
            if (begin == false) {
                vsum += n;
                v1.push_back(n);
                n--;
                begin = true;

            }
            else {
                vsum += fel;
                v1.push_back(fel);
                fel++;
                begin = false;

            }
            //cout<<" loop "<<begin<<endl;

        }
    }

    for (int i = fel; i <= n; i++) {
        v2.push_back(i);


    }
    cout << v1.size() << "\n";
    for (int i : v1)
        cout << i << " ";


    cout << "\n" << v2.size() << "\n";

    for (int i : v2)
        cout << i << " ";

    return 0;
}
