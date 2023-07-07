#include<bits/stdc++.h>
using namespace std;

void solve(){
    string s; cin >> s;

    string st, stt;
    bool batti = false;
    
    for(int i = 0; i < s.length(); i++) {
        if(s[i] == '.') {
            batti = true;
            continue;
        }
        (!batti) ? st += s[i] : stt += s[i];
    }

    int tak_val = stoll(st), cn_val = stoll(stt);
    int note [6] = {100, 50, 20, 10, 5, 2};
    int coin [6] = {100, 50, 25, 10, 5, 1};

//note distribution
    vector<pair<int,int>> taka_need; //[takar value, no of note]

    for(int i = 0; i < 6; i++) {
        if(tak_val > 0 and tak_val / note[i] > 0) {
            int can = tak_val / note[i];
            tak_val -= (can * note[i]);
            taka_need.push_back({note[i], can});
        } else {
            taka_need.push_back({note[i], 0});
        }
    }

    // cout << tak_val << endl;
    // for(auto t : taka_need) cout << t.first << " " << t.second << endl;

    if(tak_val) {
        cn_val += (tak_val * 100);
    }

    // cout << cn_val << endl;
//  Coin Distribution
    vector<pair<int,int>> coin_need;

    for(int i = 0;  i < 6; i++) {
        if(cn_val > 0 and cn_val / coin[i] > 0) {
            int can = cn_val / coin[i];
            cn_val -= (can * coin[i]);
            coin_need.push_back({coin[i], can});
        } else {
            coin_need.push_back({coin[i], 0});
        }
    }

    cout << "NOTAS:\n";
    for(auto t : taka_need) cout << t.second << " nota(s) de R$ " << t.first << ".00" << "\n";
    cout << "MOEDAS:\n";
    for(auto t : coin_need) cout << t.second << " moeda(s) de R$ "
                                 << setprecision(2) << fixed << (double)(t.first / 100.00) << "\n"; 

}
 
int32_t main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    // cin >> t;
    for(int i = 1; i <= t; i++){
        solve();
    }
    
    return 0;
}