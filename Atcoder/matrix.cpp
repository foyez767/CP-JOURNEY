#include<bits/stdc++.h>
using namespace std;

int main(){
ios::sync_with_stdio(0);
cin.tie(0);
  
    vector< vector<int>> vec(2, vector<int> (2));
    int r=0,c=0,ex=0;
    cin>>r>>c;
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cin>>vec[i][j];          
        }
    }
    cout<<vec[r-1][c-1]<<"\n";
    return 0;
}