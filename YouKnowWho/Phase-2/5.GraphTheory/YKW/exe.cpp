#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int N = 2e5 + 5;
ll inf = 1e18;
ll dis[N], vis[N], ans[N];
vector <int> adj[N];
int main() {
    int n;
    cin >> n;
    int a[n + 2];
    queue <int> qu;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        if (i + a[i] <= n) {
            adj[i + a[i]].push_back(i);
        }
        if (i - a[i] >= 1) {
            adj[i - a[i]].push_back(i);
        }
    }
    for (int i = 1; i <= n; i++) dis[i] = inf;
    for (int i = 1; i <= n; i++) {
        if (a[i] % 2 == 0) {
            qu.push(i);
            dis[i] = 0;
        }
    }
    while (!qu.empty()) {
        int x = qu.front();
        qu.pop();
        for (int i = 0; i < adj[x].size(); i++) {
            int chld = adj[x][i];
            if (dis[chld] == inf) {
                dis[chld] = dis[x] + 1;
                qu.push(chld);
            }
        }
    }
    for (int i = 1; i <= n; i++) {
        if (a[i] % 2) ans[i] = dis[i];
    }
    for (int i = 1; i <= n; i++) dis[i] = inf;
    for (int i = 1; i <= n; i++) {
        if (a[i] % 2 == 1) {
            qu.push(i);
            dis[i] = 0;
        }
    }
    while (!qu.empty()) {
        int x = qu.front();
        qu.pop();
        for (int i = 0; i < adj[x].size(); i++) {
            int chld = adj[x][i];
            if (dis[chld] == inf) {
                dis[chld] = dis[x] + 1;
                qu.push(chld);
            }
        }
    }
    for (int i = 1; i <= n; i++) {
        if (a[i] % 2 == 0) {
            ans[i] = dis[i];
        }
    }
    for (int i = 1; i <= n; i++) {
        if (ans[i] != inf) cout << ans[i] << " ";
        else cout << -1 << " ";
    }
    cout << '\n';
}