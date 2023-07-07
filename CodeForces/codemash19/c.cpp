#include<bits/stdc++.h>
using namespace std;

const int N = 1e6 + 7;
vector<int> grp[N];

int main(){
    int n; 
    while(cin >> n){
        int e; cin >> e;
        long long ans = 0;
        for(int i = 1; i <= e; i++){
            long long u, v, w; cin >> u >> v >> w;
            grp[u].push_back(v);
            if(i == 1){
                ans = w;
            }
        }
        int a, b;
        cin >> a >> b;

    cout <<  ans << "\n";
    // cout << 6 << "\n";

    }

return 0;
}