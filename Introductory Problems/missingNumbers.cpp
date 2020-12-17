#include <bits/stdc++.h>
using namespace std;
int main()
{   
	ios::sync_with_stdio(0);
    cin.tie(0);
	long long n; // long int = input thenkhat a fail
	cin>>n;
	long long a[n];
	
	for(int i=0;i<n-1;i++){ // n-1 hian test case thenkhat a tidiklo in ka ring
		
		cin>>a[i];}
		
	sort(a,a+(n-1));
        
	for(long long i=0;i<n;i++){	
		if(a[i]!=i+1){
			cout<<i+1;
			break;
			}	
		
		
			}
			
		return 0;
	}
