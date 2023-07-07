#include<bits/stdc++.h>
#define int long long
using namespace std;

int countSetBits(int n) {
    if(n <= 1)
        return n;

    int x = floor(log2(n));

    return (x * (int)pow(2, x - 1) + (n - (int)pow(2, x) + 1) + countSetBits(n - (int)pow(2, x)));
}

/*
 [x * pow(2, x - 1)] = total set bits with highest power of 2 that is less than n
 ->x is position of set bit of the largest power of 2 till n
 [n - pow(2, x ) + 1] = adding count of front set bits of the remaining number
 [n - pow(2, x)] = calling function recursively to perform same operation with new number got from remaining sequence
 */
void solve(){
    int n; cin >> n;

    cout << (int)countSetBits(n) << "\n";
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