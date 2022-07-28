#include<bits/stdc++.h>
using namespace std;

int main(){
ios::sync_with_stdio(0);
cin.tie(0);
  
    int q=0;
    cin>>q;
    set<int>s;

    while(q--){
        long long a=0,x=0;
        cin>>a;
        if(a==0){
            cin>>x;
            s.insert(x);
            cout<<s.size()<<endl;

        }else if(a==1){
            cin>>x;
            cout<<s.count(x)<<endl;

        }else if(a==2){
            cin>>x;
            s.erase(x);
        }else{
            long long l=0,r=0;
            cin>>l>>r;
            auto it=s.begin();
            for(int i=l;i<r;i++)
                

        }

    }
    return 0;
}