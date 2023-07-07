#include<bits/stdc++.h>
#define ll long long
using namespace std;

int query(int i, int j){
    cout << "? " << i << " " << j << endl;
    int x; cin >> x;
return x;
}

void solve(){
    int a = query(1, 2);
    int b = query(2, 3);
    int c = query(3, 4);
    int d = query(4, 5);

    vector<int> vec = {4, 8, 15, 16,23,42};

    do{
        if(vec[0] * vec[1] == a and vec[1] * vec[2] == b and vec[2] * vec[3] == c and vec[3]* vec[4] == d){
            cout << "! ";
            for(auto v : vec) cout << v << " "; cout << endl;
        }
    }while(next_permutation(vec.begin(),vec.end()));
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