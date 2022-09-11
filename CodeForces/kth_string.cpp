//Aug/25/2022 07:24UTC-6:219A
#include<bits/stdc++.h>
#define outer0(b) for(int i=0;i<b;i++)
#define outer1(b) for(int i=1;i<=b;i++)
#define ll long long
#define nn "\n" 
using namespace std;

int main(){
ios::sync_with_stdio(0);
cin.tie(0);
    ll k=0,x=0;
    cin>>k;
    string s;
    cin>>s;
    int counter[126] {},times[126]{};
    for(int i=0;i<s.length();i++){
        counter[s[i]]++;
    }
    //possibe or not checking
    for(int i=97;i<=122;i++){
        if(counter[i]!=0){
            if((counter[i]%k!=0)){
            cout<<-1<<nn;
            return 0;
        }else{
            times[i]=(counter[i]/k);
        }
        }
    }
    char ch;
    while(k){
        for(int i=97;i<=122;i++){
            if(times[i]!=0){
                x=times[i];
                ch=i;
                for(int j=1;j<=x;j++){
                    cout<<ch;
                }
            }
        }
        k--;
    }    
    return 0;
}