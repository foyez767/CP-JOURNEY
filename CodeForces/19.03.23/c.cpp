#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n; cin >> n;
    string s ; cin >> s;

    vector<int> mark1(150, -1), mark2(150, - 1);

    bool batti = false;

    for(int i = 0; i < n; i++){
        int x = s[i] - 'a';
        if(mark1[x] == -1){
            if((i + 1) % 2){
                mark1[x] = 0;
            }else mark1[x] = 1;
        }else{
            if((i + 1) % 2 == 0 and mark1[x] == 0){
                batti = true;
                break;
            }else if((i + 1) % 2 == 1 and mark1[x] == 1){
                batti = true;
                break;
            }
        }
    }
    bool flag = false;
    for(int i = 0; i < n; i++){
        int x = s[i] - 'a';
        if(mark1[x] == -1){
            if((i + 1) % 2){
                mark1[x] = 1;
            }else mark1[x] = 0;
        }else{
            if((i + 1) % 2 == 0 and mark1[x] == 1){
                flag = true;
                break;
            }else if((i + 1) % 2 == 1 and mark1[x] == 0){
                flag = true;
                break;
            }
        }
    }

    if(flag and batti){
        cout << "NO\n";
    }else cout << "YES\n";
 
 
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