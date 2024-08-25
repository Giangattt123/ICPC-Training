#include<bits/stdc++.h>
using namespace std;
int gcd(int a , int b) {
    while (b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}
int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        sort(a ,  a + n , greater<int>());
        int max_gcd = 0;
        for (int i = 0 ; i < n - 1 ; i++) {
            for (int j = j + 1 ; j < n ; j++) {
                max_gcd = max(max_gcd , gcd(a[i], a[j]));
            }
        }
        cout << max_gcd << endl;
    }
}