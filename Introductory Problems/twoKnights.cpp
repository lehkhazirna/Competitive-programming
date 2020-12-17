#include<iostream>
using namespace std;
typedef long long ll;

int main()
{
	ll n;
	cin >> n;

	ll result;
	
	for (ll i = 1; i <=n; i++)
	{
		result = (long long)(( i *i* ((i * i) - 1)) - 8 - 24 - 16 * (i - 4) - 16 - 24 * (i - 4) - (i - 4)* (i-4) * 8);
		cout << result/2 << endl; // tah hian 2 in a divide nachhan chu knight 2 in attack hian square 1 kan 
                              // chhiar double vangin, 2 a divide lehin, a number dik tak a chhuak ang.       
	} 

	return 0;

}
