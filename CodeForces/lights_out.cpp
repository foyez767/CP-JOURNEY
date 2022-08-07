//Aug/07/2022 11:34UTC- : 275A
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
ios::sync_with_stdio(0);
cin.tie(0);
  
    int arr[5][5]{};
    //all initialized to 1
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++)
            arr[i][j]=1;
    }

    //main part
    int x=0,k=0;
    for(int r=1;r<4;r++){
        for(int c=1;c<4;c++){
                cin>>x;
            if(x%2 !=0){
                //own part
                if(arr[r][c]==0)
                    arr[r][c]=1;
                else
                    arr[r][c]=0;
                //right side
                if(arr[r][c+1]==0) 
                     arr[r][c+1]=1;
                else
                    arr[r][c+1]=0;
                //left side
                if(arr[r][c-1]==0)
                    arr[r][c-1]=1;
                else
                    arr[r][c-1]=0;
                //down
                if(arr[r+1][c]==0)
                      arr[r+1][c]=1;
                else
                    arr[r+1][c]=0;
                //upside
                if(arr[r-1][c]==0)
                      arr[r-1][c]=1;
                else
                    arr[r-1][c]=0;
                
            }
        }
    }
    //output
    for(int i=1;i<4;i++){
        for(int j=1;j<4;j++)
            cout<<arr[i][j];
        cout<<"\n";
    }
    return 0;
}