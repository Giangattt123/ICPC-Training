#include<bits/stdc++.h>
using namespace std;
int n, X[100];

void out() {
    for (int i = 1 ; i <= n ; i++)
        cout << X[i];
    cout << endl;
}
void Try(int i) {
    for (int j = 0 ; j <= 1 ; j++) {
        X[i] = j;
        if (i == n) out();
        else Try(i + 1);
    }
}
int main() {
    cin >> n;
    Try(1);
}