#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

//  1 2 3 4 5 6 7 8 9 10  = hemi ah hian 5 hi vawi 2 a awm chutiangin 15 ah chuan 3 a awm
//
//  Hemi hi n/5 nen a inang dawn eg 10/5=2  leh 15/5=3
// 	
//  mahse 1 2 3 .... 25 ah hian
//        25/5 = 5 ??? hi a dik em?? dik lo
//        25 ah hian 5 a awm double avangin
//
//
//  1 2 3..... 25 ah chuan 5 hi 5 nilo in 6 a awm ang
//
//
// chuvangin program ah hian n kha 5 in kan divide zel anga chuan a quotient kha counter ah kan thun zel ang
//
//  25 ah erawh extra in  counter ah 1 kan add ang, a chunga mi ang khian


int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	ll n,count=0,n_loop;
	cin>>n;
	n_loop=n;
	
	for (ll i=0;i<n_loop;i++){
			
			if(n==25) count++; // 25 anih chuan 5 extra 1 a awm avangin  1 kan dah
			
			n=n/5;              // number kha 5 in kan divide
			
			if(n<=5){ count+=n;break;}		// 5 aia tlem anih tawh chuan tih nawn a ngai tawh lo a	
											// a number chhuak kan add a chuan kan break			
			
			count+=n; // number chhuak kha 5 aia a la tam chuan a la divide theih chuvangin a number kha
					  //counter ah kan add	
			
			}
       
    
    cout<<count;
	
    return 0;
}
