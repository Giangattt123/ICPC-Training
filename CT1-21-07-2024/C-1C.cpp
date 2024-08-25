#include<bits/stdc++.h>
using namespace std;
int n , X[400] , col[20] , dcx[400] , dcn[400] , cnt = 0;


void Try(int i) {
    for (int j = 1; j <= n; j++) {
        if (!col[j] &&!dcx[i + j - 1] &&!dcn[i - j + n]) {
            X[i] = j;
            col[j] = dcx[i + j - 1] = dcn[i - j + n] = 1;
            if (i == n) {
                cnt++;
            } 
            else Try(i + 1);
            col[j] = dcx[i + j - 1] = dcn[i - j + n] = 0;
        }
    }
}

int main() {
    // Bài toán N quân hậu
    cin >> n;
    Try(1);
    cout << cnt;
}