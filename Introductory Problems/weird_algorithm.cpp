#include <iostream>
using namespace std;
 
int main()
{
    
    long long n; // Hetah hian int i hman chuan a range a pel anga, answer diklo a awm ang
    cin>>n;
    cout<<n<<" ";
    while(n!=1){
        if(n%2==0){ // n hi even anih chuan 2 in divide tur tih lai 
            n=n/2;
        }
        else{      // n hi odd anih chuan 3 a multiply a 1 belh tur
            n=n*3+1;
        }
        cout<<n<<" ";
    }
 
    return 0;
}
