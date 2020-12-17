#include <iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    unsigned long long n,previous_input,current_input, steps=0ULL;

    cin >> n >> previous_input;
    for (int i = 1; i < n; i++) {
        
        cin >> current_input;

        if (previous_input > current_input) {
        
            steps += previous_input - current_input;
        }
        else {
            previous_input = current_input;
        }
    
    }

    cout << steps<<endl;
    
    return 0;
}
