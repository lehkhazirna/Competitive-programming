#include <bits/stdc++.h>
using namespace std;
/*
string ah a tir character dah phawt
chuan a string sort chuan
next_permutation hmanga a output vector ah dah
vector chu print chhuah
*/

int main()
{
    ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
    string str;
    vector<string> v;
    cin>>str;
    sort(str.begin(),str.end());
    do{
        v.push_back(str);
    }while(next_permutation(str.begin(),str.end()));
    
    
    cout<<v.size()<<"\n";
    
    for(auto item: v)
        cout<<item<<"\n";
    return 0;
}
