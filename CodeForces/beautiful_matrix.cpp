#include<bits/stdc++.h>
using namespace std;

int main(){
ios::sync_with_stdio(0);
cin.tie(0);
  
    int arr[5][5];
    int row=0,col=0;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin>>arr[i][j];
            if(arr[i][j]==1){
                row=i;
                col=j;
                break;
            }
        }
    }
    int x=0,y=0;
    if(row>=2)
        x=row-2;
    else
        x=2-row;
    if(col>=2)
        y=col-2;
    else
        y=2-col;
    
    cout<<x+y<<"\n";

    return 0;
}