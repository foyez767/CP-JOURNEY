#include<bits/stdc++.h>
#define ll long long
using namespace std;

const ll N = 101, V = 1e5 +1;   
ll n, w,weight[N],value[N];
ll minW[N][V];
bool psbl[N][V];

void solve(){
    memset(psbl, false, sizeof(psbl));
    memset(minW, 0x3f, sizeof(minW));

    cin >> n >> w;

    for(int i = 1; i <= n; i++){
        cin >> weight[i] >> value[i];
    }

    psbl[0][0] = true;  // if no item has been taken
    minW[0][0] = 0;

    for(int i = 1; i <= n; i++){
        for(int val = 0; val < V; val++){
            //if ith item is not taken
            if(psbl[i - 1][val]){
                psbl[i][val] = true;
                minW[i][val] = min(minW[i][val], minW[i - 1][val]);
            }
            //it ith item is taken
            if(val - value[i] >= 0 and psbl[i - 1][val - value[i]] == true
                and minW[i - 1][val - value[i]] + weight[i] <= w){
                psbl[i][val] = true;
                minW[i][val] = min(minW[i][val], minW[i - 1][val - value[i]] + weight[i]);
            }
        }
    }

    int ans = 0;
    for(int val = 0; val < V; val++){
        if(psbl[n][val]){
            ans = val;
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