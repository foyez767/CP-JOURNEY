#include<bits/stdc++.h>
using namespace std;

int main(){
    int t = 1; cin >> t;

    int x = 1;
    while(x <= t){
        int n; 
        if(x % 2) n = 3;
        else n = 2;

        int ans = 1;
        for(int i = 1; i <= n; i++){
            int y; cin >> y;
            ans *= y;
        }
        x++;
        cout << ans << "\n";
    }

return 0;
}