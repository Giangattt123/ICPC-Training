#include <bits/stdc++.h>
using namespace std;

void reverse(string &s , int left , int right) {
    while (left < right) {
        swap(s[left], s[right]);
        left++;
        right--;
    }
}
int main() {
    string s;
    cin >> s;
    int m;
    cin >> m;
    int a[m];
    for (int i = 0 ; i < m ; i++) cin >> a[i];
    int len = s.size();
    vector<int> cnt(len + 1 , 0);
    for (int i = 0 ; i < m ; i++) {
        cnt[a[i] - 1]++;
        if (len - a[i] > a[i] - 1)
            cnt[len - a[i]]--;
    }
    for (int i = 1 ; i < len ; i++) {
        cnt[i] += cnt[i - 1];
    }

    for (int  i = 0 ; i < len / 2 ; i++) {
        if (cnt[i] % 2 == 1) {
            swap(s[i] , s[len - i - 1]);
        }
    }

    cout << s << endl;
} 
