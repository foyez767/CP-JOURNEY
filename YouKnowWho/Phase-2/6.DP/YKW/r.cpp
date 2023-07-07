#include<bits/stdc++.h>
using namespace std;

const int N = 103;
string dp[N][N];
bool batti [N][N];
string a, b;

string lcs(int i, int j){
    if(i >= a.length() or j >= b.length())
        return "";
    if(batti[i][j])
        return dp[i][j];

    if(a[i] == b[j]){
        dp[i][j] = a[i] + lcs(i + 1, j + 1);
        return dp[i][j];
    }

    string lcs1 = lcs(i + 1, j);
    string lcs2 = lcs(i, j + 1);

    if(lcs1.length() > lcs2.length())
        dp[i][j] = lcs1;
    else if(lcs1.length() < lcs2.length())
        dp[i][j] = lcs2;
    else{
        if(lcs1 > lcs2)
            dp[i][j] = lcs2;
        else dp[i][j] = lcs1;
    }

    batti[i][j] = true;
return dp[i][j];
}
void solve(){
    memset(batti, false, sizeof(batti));
    cin >> a >> b;
    string s = lcs(0,0);

    if(s.empty()){
        cout << ":(\n";
    }else cout << s << "\n";
 
}
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    // cin >> t;
    for(int i = 1; i <= t; i++){
        cin.ignore();
        cout << "Case " << i << ": ";
        solve();
    }
    
    return 0;
}