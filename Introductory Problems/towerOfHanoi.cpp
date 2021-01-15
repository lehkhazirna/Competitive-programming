#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll counter=0; // Hei hi a step awmzat dahna tur
vector<vector<int>> v; // vector hi a result dahna tur ani

void towerOfHanoi(int n, int start,
                    int end, int temp);


int main() 
{ 
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n ;    // Number of disks 
    cin>>n;
    
    towerOfHanoi(n, 1, 3, 2); // 1, 2 and 3 are names of rods
    
    cout<<counter<<endl;
    
    vector<vector<int>>::iterator it1;
 
    // Iterator for each vector inside the 2-D vector
    vector<int>::iterator it2;
 
    // Traversing a 2-D vector using iterators
    for(it1 = v.begin();it1 != v.end();it1++){
        for(it2 = it1->begin();it2 != it1->end();it2++)
            cout<<*it2<<" ";
        cout<<endl;}
    
    return 0; 
} 
 
/*
Hemi recursive function ah hian 
1. A base case chu disc pakhat chauh a awm chuan a disc kha rod 1 atang 3 ah dah tur.
2. A recursive call pakhatna chu Disc pakhat ai tam a awm chuan A hnuai ber tihloh zawng chu
   rod 2 ah sawn tur.
3. Chuan A disc hnuai ber kha rod 1 atang rod 3 ah sawn tur.
4. A disc dang la bang ho kha rod 2 atang 3 ah sawn leh tur mahse tunah chuan
   Rod 1 kha a temporary rod ah hman tur.
*/
void towerOfHanoi(int n, int start,
                    int end, int temp) 
{  
    
    if (n == 1) // Hei hi a base case chu ani
    { 
        
        vector<int> a;
        a.push_back(start);
        a.push_back(end);
        v.push_back(a);
        counter+=1;
        return; 
    } 
    towerOfHanoi(n - 1, start, temp, end); // Hei hi a step no 2 ani
    
    vector<int> b;      
    b.push_back(start);
    b.push_back(end);
    v.push_back(b);
    counter+=1;       // A chung ami ho hi a step no 3 ani

    towerOfHanoi(n - 1, temp, end, start);  // Hei hi step no 4 ani.
    
} 
 
