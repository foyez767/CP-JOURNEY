//Sep/05/2022 14:24UTC-6
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
    int star[9]{},cnt=0,k=1,row=0,col=0;
    char arr[8+1][8+1] {};
    for(int i=1;i<=8;i++){
        for(int j=1;j<=8;j++){
            cin>>arr[i][j];
            if(arr[i][j]=='#') cnt++;
        }
        star[k]=cnt;
        cnt=0;
        k++;
    }
    for(int i=1;i<=8;i++){
        if(star[i]==2 && star[i+1]==1 && star[i+2]==2){
            row=i+1;
            break;
        }
    }
    for(int i=row;i<=(row+1);i++){
        for(int j=1;j<=8;j++){
            if(arr[i][j]=='#'){
                col=j+1;
                break;
            }
        }
    }    
    cout<<row<<" "<<col<<nn;
}
       
    return 0;
}