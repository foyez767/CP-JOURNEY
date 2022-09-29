//Sep/04/2022 10:56UTC-6
#include<bits/stdc++.h>
#define ll long long
#define nn "\n"
using namespace std;

int main(){
ios::sync_with_stdio(0);
cin.tie(0);
ll t=0;
cin>>t;
while(t--){
    //input
    ll n=0,x=0;
    string s;
    cin>>n;
    ll arr[n]{};
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<string>vec;
    for(int i=0;i<n;i++){
        cin>>x;
        cin>>s;
        vec.push_back(s);
    }
    s.clear();
    //process
    for(int i=0;i<n;i++){
            s=vec[i];
            for(int k=0;k<s.length();k++){
                if(s[k]=='U'){
                    if(arr[i]==0 ){
                        arr[i]=9;
                    }
                    else{
                        arr[i]--;
                    }

                }else if(s[k]=='D'){
                    if(arr[i]==9){
                        arr[i]=0;
                    }
                    else{
                        arr[i]++;
                    }
                }
            }
        }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<nn;
}  
    return 0;
}