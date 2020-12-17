
#include<bits/stdc++.h>
using namespace std;
typedef long long ll; 

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	ll n,row,col;
	cin>>n;
	while(n--){
		
		cin>>row>>col;
		if(row<=col && col%2==0){
			cout<<(col-1)*(col-1)+row<<endl; //using pow function of C++ gives an error 
			continue;
			}
			
		if(row<=col && col%2!=0){
			cout<<(col)*(col)-row+1<<endl; //using pow function of C++ gives an error 
			continue;
			
			}
		if(row>=col && row%2==0){
			cout<<(row)*(row)-col+1<<endl; //using pow function of C++ gives an error 
			continue;
			}
		if(row>=col && row%2!=0){
			cout<<(row-1)*(row -1)+col<<endl; //using pow function of C++ gives an error 
			continue;
			}
		
		
		}
	
	
	
	
    return 0;
}
