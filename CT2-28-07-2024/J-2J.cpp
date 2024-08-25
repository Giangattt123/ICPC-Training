#include<bits/stdc++.h>
using namespace std;
int main() {
	int n , m;
	cin >> n >> m;
	vector<int> a(m + 1, 0); 
    for (int i = 0; i < n; i++) {
        int val;
        cin >> val;
        a[val]++;
    }
    int firstMax = 0, secondMax = 0;
    for (int i = 1; i <= m; i++) {
        if (a[i] > firstMax) {
            secondMax = firstMax;
            firstMax = a[i];
        } else if (a[i] > secondMax && a[i] < firstMax) {
            secondMax = a[i];
        }
    }

    if (secondMax == 0) {
        cout << "NONE" << endl;
    } else {
        for (int i = 1; i <= m; i++) {
            if (a[i] == secondMax) {
                cout << i << endl;
                break;
            }
        }
    }

    return 0;
	
}