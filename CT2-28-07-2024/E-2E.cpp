#include<bits/stdc++.h>
using namespace std;
int main() {
	int n; cin >> n;
	long a[n];
	for (int i = 0 ; i < n ; i++) {
		cin >> a[i];
	}
	int countMax = 0;
	for (int i = 0 ; i < n ; i++) {
		int value = a[i];
		int buoc = 0;
		while (value % 2 == 0) {
			value /= 2;
			++buoc;
		}
		countMax += buoc;
	}
	cout << countMax << endl;
}