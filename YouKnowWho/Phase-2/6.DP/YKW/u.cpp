#include<bits/stdc++.h>
#define ll long long
using namespace std;

const int N = 1001;
int memo[N][2][2], soap[N], n;

//ith house, take = true[can take] else don't take, first = first house is taken then don't take n othewise take n
int cntMxSp(int i,bool take, bool first){
    if(i == n + 1){
        return 0;
    }
    if(memo[i][take][first] != -1){
        return memo[i][take][first];
    }

    int ans = 0;
    if(i == 1){
        //take it and move to next
        ans = soap[i] + cntMxSp(i + 1, false, true);
        //don't take it, move to next
        ans = max(ans, cntMxSp(i + 1, true, false));
    }
    else if(take == false or (first == true and i == n)){
        //if we have taken previous one, then move to next one
        //if we taken first, then it is not valid to take nth hence move to next one
        ans = max(ans, cntMxSp(i + 1, true, first));
    }
    else {
        //take it and move next
        ans = max(ans, soap[i] + cntMxSp(i + 1, false, first));
        //don't take it and move next
        ans = max(ans, cntMxSp(i + 1, true, first));
    }

    memo[i][take][first] = ans;
return memo[i][take][first];
}

void solve(){
    memset(memo, -1, sizeof(memo));
    cin >> n;

    for(int i = 1; i <= n; i++) cin >> soap[i];

    cout << cntMxSp(1, true, true) << "\n";

}
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    cin >> t;
    for(int i = 1; i <= t; i++){
        cout << "Case " << i << ": "; 
        solve();
    }
    
    return 0;
}