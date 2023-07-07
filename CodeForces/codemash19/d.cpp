#include<bits/stdc++.h>
#define ll long long
using namespace std;

const int N = 2e6 + 7;
vector<ll> divs(N, 0);

void divisors(){
    divs[1] = 0;
    for(int i = 2; i < N; i++){
        for(int j = i; j < N; j += i){
            divs[j]++;
        }
    }
}

void divUpdate(){
    for(int i = 2; i < N; i++){
        if(divs[i] > 1){
            for(int j = i; j < N; j += i){
                if(j == i) continue;
                else{
                    divs[j] += (divs[i] - 1);
                }
            }
        }
    }
}

void solve(){
    divisors();
    divUpdate();

    int q; cin >> q;
    // for(int i = 1; i <= 10; i++) cout << divs[i] << " ";cout << endl;
    // cout << divs[100000] << endl;

    partial_sum(divs.begin(), divs.end(), divs.begin());


    // for(int i = 1; i <= 10; i++) cout << divs[i] << " ";

    while(q--){
        int l ,r; cin >> l >> r;
        cout << divs[r] - divs[l - 1] << "\n";
    }
 
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