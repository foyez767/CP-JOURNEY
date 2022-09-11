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
        string s;
        ll n=0,flag=0;
        cin>>n;
        vector<string>vec;
        //input
        for(int i=0;i<n;i++){
            cin>>s;
            vec.push_back(s);
        }
        //process and output at the same time
        string si,sj,sk;
        for(int i=0;i<vec.size();i++){
            si=vec[i];
            for(int j=0;j<vec.size();j++){
                flag=0;
                if(i!=j){
                    sj=vec[j];
                    for(int k=0;k<vec.size();k++){
                        sk=vec[k];
                        if(si==(sj+sk)){
                            cout<<1;
                            flag=1;
                            break;
                        }
                    }
                }
                if(flag==1) break;
            }
            if(flag==0) cout<<0;
        }
        cout<<nn;
    }
    
    return 0;
}