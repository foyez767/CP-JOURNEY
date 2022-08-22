#include<bits/stdc++.h>
#define ll long long
#define nn "\n"
using namespace std;

int main(){
ios::sync_with_stdio(0);
cin.tie(0);
    int a=0,b=0,c=0;
    cin>>a>>b>>c;
    vector<int>vec1(a);
    vector<int>vec2(b);    
    vector<int>vec3(c); 
    ll x=0,sum1=0,sum2=0,sum3=0;
    for(int i=0;i<a;i++){
        cin>>x;
        sum1+=x;
        vec1[i]=x;
    }   
    for(int i=0;i<b;i++){
        cin>>x;
        sum2+=x;
        vec2[i]=x;
    } for(int i=0;i<c;i++){
        cin>>x;
        sum3+=x;
        vec3[i]=x;
    } 
    int i=0,j=0,k=0;
    while(sum1!=sum2 || sum2 !=sum3){
        if(sum1>=sum2 && sum1>=sum3){
            sum1-=vec1[i];i++;
        }else if(sum2>=sum1 && sum2>=sum3){
            sum2-=vec2[j];j++;
        }else if(sum3>=sum1 && sum3>=sum2){
            sum3-=vec3[k];k++;
        }
    }
    cout<<sum1<<nn;
    
    return 0;
}