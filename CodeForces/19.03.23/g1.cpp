#include<bits/stdc++.h>
#define ll long long
using namespace std;

const int N = 5001;
void solve(){
    int n; cin >> n;

    int one = 0;
    vector<int> vec(n+1, 0),vec2(n+1, 0);
    for(int i = 1; i <= n; i++){
        int x; cin >> x;
        vec[i] = x;
        vec2[i] = x;
        if(x == 1) one++;
    }

    sort(vec.begin(),vec.end());
    sort(vec2.begin(),vec2.end());

    if((n == 1 and one == 1)){
        cout << "YES\n";
        return;
    }else if((n == 1 and one == 0) or n > 1 and one < 2){
        cout << "NO\n";
        return;
    }

    partial_sum(vec.begin(),vec.end(), vec.begin());


    bool batti = true;
    for(int i = 2; i <= n; i++){
        bool flag = false;
        for(int j = i-2; j >= 0; j--){
            if(abs(vec[i-1] - vec[j]) == vec2[i]){
                flag = true;
                break;
            }
        }
        if(!flag){
            batti = false;
            break;
        }
    }
 
   

    if(batti) cout << "YES\n";
    else cout << "NO\n";
}
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    cin >> t;
    for(int i = 1; i <= t; i++){
        solve();
    }
    
    return 0;
}