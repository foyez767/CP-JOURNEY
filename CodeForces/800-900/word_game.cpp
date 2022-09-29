#include<bits/stdc++.h>
#define outer0(b) for(int i=0;i<b;i++)
#define outer1(b) for(int i=1;i<=b;i++)
#define ll long long
#define nn 
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin>>t;

    while(t--) {
        int n;
        cin>>n;

        vector<string> v1(n);
        vector<string> v2(n);
        vector<string> v3(n);

        map<string,int> cnt;

        for(int i=0;i<n;i++) {
            cin>>v1[i];
            cnt[v1[i]]++;
        }

        for(int i=0;i<n;i++) {
            cin>>v2[i];
            cnt[v2[i]]++;
        }

        for(int i=0;i<n;i++) {
            cin>>v3[i];
            cnt[v3[i]]++;
        }

        int a=0,b=0,c=0;

        for(int i=0;i<n;i++) {
            if (cnt[v1[i]]==1) a+=3; 
            if (cnt[v1[i]]==2) a+=1; 
        }

        for(int i=0;i<n;i++) {
            if (cnt[v2[i]]==1) b+=3; 
            if (cnt[v2[i]]==2) b+=1; 
        }

        for(int i=0;i<n;i++) {
            if (cnt[v3[i]]==1) c+=3; 
            if (cnt[v3[i]]==2) c+=1; 
        }

        cout<<a<<" "<<b<<" "<<c<<"\n";

    }
    
    return 0;
}