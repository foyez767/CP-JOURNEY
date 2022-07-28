#include<bits/stdc++.h>
using namespace std;

int main(){
ios::sync_with_stdio(0);
cin.tie(0);
  
    int h=0,w=0,r=0,c=0;
    cin>>h>>w>>r>>c;
    if(h==1 && w==1)
        cout<<0<<"\n";
    else if(h==1 || w==1){
        if((r>1 && r<h) || (c>1 && c<w))
            cout<<2<<"\n";
        else
            cout<<1<<"\n";
    }
    else if((r==1 && c==1)|| (r==1 && c==w)|| (r==h && c==1)||(r==h && c==w))
        cout<<2<<"\n";
    else if((r>1 && r<h) && (c>1 && c<w)){
        cout<<4<<"\n";
    }else
        cout<<3<<"\n";
    return 0;
}