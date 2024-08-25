#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

// Hàm tính ƠCƠ giữa hai số
long long gcd(long long a, long long b) {
    while (b != 0) {
        long long temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Hàm chính
int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;
        vector<int> A(N);
        for (int i = 0; i < N; ++i) {
            cin >> A[i];
        }

        // Tính ƠCƠ của toàn bộ dãy
        long long overall_gcd = A[0];
        for (int i = 1; i < N; ++i) {
            overall_gcd = gcd(overall_gcd, A[i]);
        }

        // Kết quả là ƠCƠ của toàn bộ dãy
        cout << overall_gcd << endl;
    }

    return 0;
}
