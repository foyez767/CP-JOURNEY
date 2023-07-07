#include<bits/stdc++.h>
#define ll long long
#define mod 10000007
using namespace std;

const int N = 1e4 + 7;
ll a, b, c, d, e, f;
ll val[N];

ll fn(ll n) {
    if (n == 0) return a;
    if (n == 1) return b;
    if (n == 2) return c;
    if (n == 3) return d;
    if (n == 4) return e;
    if (n == 5) return f;

    if(val[n] != -1) return val[n];

    ll ans = 0;
    for(int i = 1; i <= 6; i++){
        ans += fn(n - i);
        ans %= mod;
    }
    val[n] = ans;

    return val[n];
}
int main() {
    int n, cases;
    scanf("%d", &cases);

    for (int caseno = 1; caseno <= cases; ++caseno) {
        memset(val, -1, sizeof(val));
        scanf("%d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &n);
        printf("Case %d: %d\n", caseno, fn(n) % mod);
    }
    return 0;
}
