#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int bit_max_int = 32;
const ll value_max_int = (ll) pow(2 , bit_max_int - 1) - 1;

int main() {
    string s;
    ll sum = 0;
    
    while (getline(cin, s)) {
        stringstream ss(s);
        string tmp;
        
        while (ss >> tmp) {
        	if (s.empty()) break;
            stringstream num(tmp);
            ll val;
            if (num >> val) {
                if (val > value_max_int) { 
                    sum += val;
                }
            }
        }
    }
    
    cout << sum << endl;
    return 0;
}
