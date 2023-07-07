//**********In the name of Allah, most Gracious and Merciful******
#include<bits/stdc++.h>
#define ll long long
#define nn "\n"
using namespace std;
 
void solve(){
    int n ; cin>> n;
    int arr [n+1][n],counter[n+1]{};

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <n; j++){
            cin>> arr[i][j];
        }
    }

    //first element detect: first column er maximum counter
    for(int i = 1; i <=n; i++)  counter[arr[i][1]]++;
    int maxi = 0, batti = 0, indx = 0;
    for(int i = 1; i <= n; i++){
        if(counter[i] > maxi){
            maxi = max(maxi,counter[i]);
            indx = i;
        }
    
    }

    cout<< indx << " ";
    for(int i = 1; i<= n; i++){
        if(arr[i][1] != indx){
            batti = 1;
            for(int j = 1; j < n; j++){
                cout<< arr[i][j] << " ";
            }
            cout<< nn;
            return;
        }
    }

 }
int main(){
ios::sync_with_stdio(0);
cin.tie(0);
ll t=1;
cin>>t;
while(t--)   solve();
    
    return 0;
}