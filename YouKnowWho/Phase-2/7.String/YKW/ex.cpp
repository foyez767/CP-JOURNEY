#include<bits/stdc++.h>
#define ll long long
using namespace std;

int countSubstrings(string s) { 
  int N = s.size(); 
  vector<int> fwhash(N + 1), bwhash(N + 1); 
  vector<long long> pow(N + 1); 
 
  // Hash parameters: Should be reasonably collision-free for small strings 
  const long long BASE = 26, MOD = 2'147'483'587ll; 
  pow[0] = 1; 
 
  // Compute the forward prefix hashes 
  for (int i = 0; i < N; ++i) { 
    fwhash[i + 1] = (fwhash[i] * BASE + s[i] - 'a') % MOD; 
    pow[i + 1] = (pow[i] * BASE) % MOD; 
  } 
  // Compute the backward prefix hashes 
  for (int i = N - 1; i >= 0; --i) { 
    bwhash[i] = (bwhash[i + 1] * BASE + s[i] - 'a') % MOD; 
  } 
 
  int cnt = 0; 
  // Process substrings of odd length with centre [i] 
  for (int i = 0; i < N; ++i) { 
    // Binary search over (half-)length of substring to find longest palindrome 
    int start = 1, end = min(i + 1, N - i) + 1; 
    // cout << 2 * end - 1 << endl;
    while (end - start > 1) { 
      int mid = (start + end) / 2, l = i - mid + 1, r = i + mid - 1; 
      // Find forward and backward hashes of substring from prefix hashes 
      int fw = (fwhash[r + 1] + MOD - (fwhash[l] * pow[r - l + 1]) % MOD) % MOD, 
          bw = (bwhash[l] + MOD - (bwhash[r + 1] * pow[r - l + 1]) % MOD) % MOD; 
      (fw == bw ? start : end) = mid; 
    } 
    // Half-length of the longest palindrome is also the number of palindromic 
    // substrings with this centre. Add it to the count 
    cnt += start; 
  } 
 
  //Repeat the procedure for even-length substrings with centre [i,i+1] 
  // for (int i = 0; i + 1 < N; ++i) { 
  //   int start = 0, end = min(i + 1, N - i - 1) + 1; 
  //   while (end - start > 1) { 
  //     int mid = (start + end) / 2, l = i - mid + 1, r = i + mid; 
  //     int fw = (fwhash[r + 1] + MOD - (fwhash[l] * pow[r - l + 1]) % MOD) % MOD, 
  //         bw = (bwhash[l] + MOD - (bwhash[r + 1] * pow[r - l + 1]) % MOD) % MOD; 
  //     (fw == bw ? start : end) = mid; 
  //   } 
  //   cnt += start; 
  // } 
 
  return cnt; 
} 

void solve(){
    string s; cin >> s;

    cout << countSubstrings(s) << "\n";
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