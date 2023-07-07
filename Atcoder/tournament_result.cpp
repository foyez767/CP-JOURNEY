#include<bits/stdc++.h>
using namespace std;

int main(){
ios::sync_with_stdio(0);
cin.tie(0);
    int n=0;
    cin>>n;  
    char arr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    int flag=0;
    for(int i=0;i<(n-1);i++){
        for(int j=0;j<n;j++){
            if(j=i)
                continue;
            if(arr[i][j]=='W'){
                if(arr[j][i] != 'L'){
                    flag=1;
                    break;
                }
            }else if(arr[i][j]=='L'){
                if(arr[j][i] != 'W'){
                    flag=1;break;
                }
            }else if(arr[i][j]=='D'){
                if(arr[j][i] != 'D'){
                    flag=1;break;
                }             
            }
        }
        if(flag==1)
            break;
    }
    if(flag==1)
        cout<<"incorrect\n";
    else
        cout<<"correct\n";

    return 0;
}