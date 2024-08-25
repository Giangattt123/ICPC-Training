#include <iostream>
#include <queue>
#include <vector>

using namespace std;
int N , ST , EN , u , d;
int Min() {
    if (ST == EN) return 0;
    vector<bool> visited(N + 1, false);
    queue<pair<int, int>> q; 
    q.push({ST, 0});
    visited[ST] = true;
    while (!q.empty()) {
        pair<int , int> top = q.front();
        int curr = top.first;
        int step = top.second;
		q.pop();

        if (curr + u <= N && !visited[curr + u]) {
            if (curr + u == EN) 
				return step + 1;
            visited[curr + u] = true;
            q.push({curr + u, step + 1});
        }
        
        if (curr - d >= 1 && !visited[curr - d]) {
            if (curr - d == EN) 
				return step + 1;
            visited[curr - d] = true;
            q.push({curr - d, step + 1});
        }
    }
    return -1;
}

int main() {
    cin >> N >> ST >> EN >> u >> d;
    cout << Min() << endl;
    return 0;
}
