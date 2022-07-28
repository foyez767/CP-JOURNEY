/*#include<bits/stdc++.h>
using namespace std;

int main(){
ios::sync_with_stdio(0);
cin.tie(0);
    int n=0,x=0,count=26;
    string st;
    char es='A';
    cin>>n>>x;
    while(count>0){
        
        for(int i=0;i<n;i++){
            st+=es;
        }
        if(es<='Z')
            es++;
        count--;
    }
    cout<<st[x-1]<<"\n";

    return 0;
}*/



#include<bits/stdc++.h>
using namespace std;

int main(){
ios::sync_with_stdio(0);
cin.tie(0);
  
    int n,x;
    cin>>n>>x;
    vector<char>v;
    for(int i=65;i<=97;i++) {
        while(n--) {
            v.push_back(i);
        }
    }
    cout<<v[x]<<'\n';
    
    return 0;
}