#include<bits/stdc++.h>
#define ll long long
using namespace std;

const int N = 1001, P = 1e4 + 1;
bool psbl[N][P];
int minP[N][P], n, x,price[N],page[N];

void solve(){
    memset(psbl, false, sizeof(false));
    memset(minP, 0x3f, sizeof(minP));

    cin >> n >> x;

    for(int i = 1; i <= n; i++){
        cin >> price[i] >>  page[i];
    }

    psbl[0][0] = true;
    minP[0][0] = 0;

    for(int i = 1; i <= n; i++){
        for(int val = 0; val < P; val++){
            //if ith item is not taken
            if(psbl[i - 1][val]){
                psbl[i][val] = true;
                minP[i][val] = min(minP[i][val], minP[i - 1][val]);
            }
            //if ith item is taken
            if(val - page[i] >= 0 and psbl[i - 1][val - page[i]] == true
                and minP[i - 1][val - page[i]] + price[i] <= x){
                psbl[i][val] = true;
                minP[i][val] = min(minP[i][val], minP[i - 1][val - page[i]] + price[i]);
            }
        }
    }

    int ans = 0;

    for(int val = 0; val < P; val++){
        if(psbl[n][val]){
            ans = val;
            // cout << k ++ << " : \n";
            // cout << psbl[n][val] << endl;
        }
    }

    cout << ans << "\n";
 
}
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    // cin >> t;
    for(int i = 1; i <= t; i++){
        solve();
    }
    
    return 0;
}