#include <iostream>
#include <vector>
#include <cmath>  // For std::ceil

using namespace std;

int main() {
    int N, K;
    cin >> N >> K;

    vector<int> A(N);
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }

    // Số bước biến đổi ít nhất cần thực hiện
    int steps = (N + K - 1) / K;

    cout << steps << endl;

    return 0;
}
