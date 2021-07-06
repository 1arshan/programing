#include<bits/stdc++.h>
using namespace std;

vector<int> adj[105];
vector<bool> vis(105, 0);
vector<int> idominator(105, 0); // immediate dominator

void traversal(int curr) {
    vis[curr] = 1;
    for (auto to : adj[curr]) {
        if (!vis[to]) {
            idominator[to] = curr;
            traversal(to);
        }
    }
}

signed main() {
    freopen("18bcs075.txt", "r", stdin);
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; ++i) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
    }
    vis[1] = 1; // root = 1
    idominator[1] = -1; // no immediate dominator of root
    traversal(1); // start finding paths
    vector<vector<int>> mat(n + 1, vector<int>(n + 1));
    for (int i = 2; i <= n; ++i) {
        mat[i][idominator[i]] = 1;
        mat[idominator[i]][i] = 1;
    }
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}