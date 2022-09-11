// #include<bits/stdc++.h>
// #define outer0(b) for(int i=0;i<b;i++)
// #define outer1(b) for(int i=1;i<=b;i++)
// #define ll long long
// #define nn "\n"
// using namespace std;

// int main(){
// ios::sync_with_stdio(0);
// cin.tie(0);
//     ll t=0;
//     cin>>t;
//     string s1,s2;
//     while(t--){
//         int arr[26] {},cnt=0;
//         cin>>s1>>s2;
//         for(int i=0;i<2;i++){
//             if(arr[s1[i]-97]==0)
//                 arr[s1[i]-97]++;
//             if(arr[s2[i]-97]==0)
//                 arr[s2[i]-97]++;
//         }
//         for(int i=0;i<26;i++){
//             if(arr[i]!=0)
//                 cnt++;
//         }
//         cout<<cnt-1<<nn;
//     }
   
//     return 0;
// }
#include<bits/stdc++.h>
#define outer0(b) for(int i=0;i<b;i++)
#define outer1(b) for(int i=1;i<=b;i++)
#define ll long long
#define nn "\n"
using namespace std;

int main(){
ios::sync_with_stdio(0);
cin.tie(0);
    ll t=0;
    cin>>t;
    while(t--){
        string a,b;
        cin>>a>>b;
        set<char>s;
        s.insert(a[0]);s.insert(a[1]);s.insert(b[0]);s.insert(b[1]);
        cout<<s.size()-1<<nn;
    }
    
    return 0;
}