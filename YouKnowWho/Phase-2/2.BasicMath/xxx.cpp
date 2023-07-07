#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int N = 1e8;
int spf[N + 8];
void calc_spf () {
    for (int i = 1; i <= N; i++) spf[i] = i;
    for (int i = 2; i * i <= N; i++) {
        if (spf[i] == i) {
            for(ll j = i * i; j <= N; j += i) {
                spf[j] = min(spf[j], i);
            }
        }
    }
}
int main() {
    calc_spf();
    int cs = 0;
    while (1) {
        ll n, m, tr;
        scanf ("%lld %lld %lld", &n, &m, &tr);
        if (!n && !m && !tr) break;
        ll dv1 = 1, dv2 = 1, mod = 100000007;;
        while (n > 1) {
            ll prm = spf[n], cnt = 0;
            while (n % prm == 0) {
                n /= prm;
                cnt++;
            }
            cnt *= m;
            ll tmp = cnt;
            cnt /= tr;
            dv1 = ((dv1 % mod) * ((cnt + 1) % mod)) % mod;
            cnt = tmp;
            cnt /= (tr + 1ll);
            dv2 = ((dv2 % mod) * ((cnt + 1) % mod)) % mod;
        }
        ll ans = (((dv1 - dv2) % mod) + mod) % mod;
        printf("Case %d: %lld\n", ++cs, ans);
    }
}