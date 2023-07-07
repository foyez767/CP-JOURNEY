#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
   int n, k;    cin >> n >> k;
   string s;  cin >> s;

   int cnter[150] {};

   for(int i = 0; i < s.length(); i++){
        cnter[(int)s[i]]++;
   }

   vector<int> vec;

    int cnt = 0;
   for(int i = 65; i <= 90; i++){
        int x = min(cnter[i],cnter[i + 32]);
        cnt += x;
        cnter[i] -= x;
        cnter[i + 32] -= x;

        x = max(cnter[i],cnter[i + 32]);

        vec.push_back(x);
   }

   sort(vec.begin(), vec.end());

   for(int i = vec.size()-1; i >= 0 and k > 0; i--){
        int x = vec[i];

        if(k <= (x / 2 )){
            cnt += k;
            break;
        }

        cnt += (x / 2);

        k -= (x / 2);
   }

   cout << cnt << "\n";
 
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