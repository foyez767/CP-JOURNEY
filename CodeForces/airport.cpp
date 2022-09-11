//Aug/25/2022 03:34UTC-6 : 
#include<bits/stdc++.h>
#define outer0(b) for(int i=0;i<b;i++)
#define outer1(b) for(int i=1;i<=b;i++)
#define ll long long
#define nn "\n"
using namespace std;
 
int main(){
ios::sync_with_stdio(0);
cin.tie(0);
    ll pass=0,plane=0,maxi=0,mini=0;
    cin>>pass>>plane;
    ll empty_seat[plane]{};
    ll copy[plane] {};
    for(int i=0;i<plane;i++){
        cin>>empty_seat[i];
        copy[i]=empty_seat[i];
    } 
    ll k=plane-1,flag=0,x=0;
    //maximum
        while(1){
                sort(empty_seat,empty_seat+plane);
                if(x<pass){
                    maxi+=(empty_seat[k]);
                    x++;
                    empty_seat[k]--;
                }else break;;
        }
    //minimum
    sort(copy,copy+plane);
    flag=0;
    k=0;
    for(int i=0;i<plane;i++){
        while(1){
            mini+=copy[i];
            copy[i]--;
            pass--;
             if(pass==0){
                flag=1;break;
            }
            if(copy[i]==0) break;          
        }
        if(flag==1) break;
    }
    cout<<maxi<<" "<<mini<<nn;
    return 0;
}