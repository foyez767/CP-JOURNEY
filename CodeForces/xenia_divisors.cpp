//Aug/25/2022 09:00UTC-6:342A
#include<bits/stdc++.h>
#define outer0(b) for(int i=0;i<b;i++)
#define outer1(b) for(int i=1;i<=b;i++)
#define ll long long
#define nn "\n"
using namespace std;

int main(){
ios::sync_with_stdio(0);
cin.tie(0);
    ll n=0;
    cin>>n;
    ll arr[100001]{},counter[8]{};
    outer0(n){
        cin>>arr[i];
        counter[arr[i]]++;
    }
    if(counter[1] !=(n/3)){
        cout<<-1<<nn;
        return 0;
    }
    ll x=n/3,flag=0,a=0,b=0,c=0;
    vector<ll>vec;
    while(x--){
        a=0,b=0,c=0;
         a=1;counter[1]--;
         vec.push_back(a);
        for(int i=2;i<=7;i++){
            if(counter[i]>0 && (i%a==0)){
                b=i;
                vec.push_back(i);
                counter[i]--;break;
            }
        }
        for(int j=b+1;j<=7;j++){
            if(counter[j]>0 && (j%b==0)){
                c=j;
                vec.push_back(c);
                counter[j]--;break;
            }
        }
        if(b==0 || c==0){
            flag=1;break;
        }
    }
    if(flag!=1){
        for(int i=0;i<vec.size();i++){
            cout<<vec[i]<<" ";
            if((i+1)%3==0)
                cout<<nn;
        }

    }else 
        cout<<-1<<nn;
    return 0;
}