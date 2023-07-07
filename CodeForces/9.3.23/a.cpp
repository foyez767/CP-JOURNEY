#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n, sbx = 0, dbx = 0, ebx = 0;   cin >> n;

    int arr[n];

    for(int i = 0; i < n; i++) cin >> arr[i];

    for(int i = 0; i < n; i++){
        if(arr[i] == 1){
            if(ebx == 0){
                sbx++;
            }else{
                sbx++;
                ebx--;
            }
        }else if(i != (n - 1) and (arr[i] == 2 and arr[i + 1] == 2)){
            continue;
        }
        else if(arr[i] == 2){
            if(sbx >= 3){
                int x = 0, y = 0;
                if(sbx % 2){
                    x = (sbx / 2) + 1;
                    y = sbx - x;
                }else{
                    x = sbx/ 2, y = sbx/ 2;
                }

                dbx += (x / 2);
                sbx -= (x / 2);
                ebx += y;
            }
        }
    }

    cout << sbx + dbx + ebx << "\n";
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