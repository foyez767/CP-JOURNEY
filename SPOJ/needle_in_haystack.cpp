//**********In the name of Allah, most Gracious and Merciful******
#include<bits/stdc++.h>
#define ll long long
#define nn "\n"
using namespace std;

vector<int> prefix_function(string pattern){
    long long  n=pattern.length();
    vector<int> phi(n,0);

    for(int i=1; i<n; i++){
        int j=phi[i-1];

        while(pattern[i]!=pattern[j] and j>0){
            j=phi[j-1];
        }

        if(pattern[i]==pattern[j])
            j++;
        phi[i] = j;
    }
    return phi;
}

void solve(){
    ll len=0;                   cin>> len;
    string text,pattern;        
    cin>> pattern;
    // char ch; cin>> ch;
    // getline(cin,text);
    cin.ignore();
    getline(cin,text);
    // text= ch+text;
    
    vector<int>phi = prefix_function(pattern);
    vector<long long>index;

    int pat_index=-1;
    int i=0,j=0;
    while(i<text.size()){
        if(text[i]==pattern[j]){
            i++;
            j++;
        }else {
            if(j!=0)
                j= phi[j-1];
            else i++;
        }
        if(j==pattern.size()){
            index.push_back(i-pattern.size());
        }
    }
    if(pat_index==-1) cout<<endl;
    else{
        sort(index.begin(),index.end());
        for(auto in: index)
            cout<< in <<endl;
    }
 
 }
int main(){
ios::sync_with_stdio(0);
cin.tie(0);
ll t=1;
// cin>>t;
while(t--)   solve();
    
    return 0;
}