#include<bits/stdc++.h>
#define ll long long
using namespace std;

string arr[] = {"Iron Man", "Captain America", "Thor", "Black Widow", "The Hulk", "Black Panther","Shuri", "Okoye", "Ant Man", "Wasp", "Doctor Strange", "Winter Solder(Bucky Barners)",
"Hawkeye", "Falcon", "Maria Hill", "Vison", "War Machine", "Hulkbuster"};

void solve(){
    int n = 18;

    int a[n]{};
    map<int,int> mp;

    for(int i = 0; i < n; i++){
        cin >> a[i];
        mp[a[i]] = 1;
    }

    if(mp.size() < 18){
        cout << "Thanos Destroyed half of us\n";
    }else{
        for(int i = 0; i < n; i += 2){
            if(a[i] > a[i + 1]){
                cout << arr[i] << "\n";
            }else cout << arr[i + 1] << "\n";
        }
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