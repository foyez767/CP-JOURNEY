#include<bits/stdc++.h>
using namespace std;

int main(){
ios::sync_with_stdio(0);
cin.tie(0);
  
    vector<string>vec;
    vector<int> summ;
    int n=0,m=0;
    string ex,A,B;
    cin>>n>>m;
    for(int i=0;i<m;i++){
        cin>>ex;
        vec.push_back(ex);
    }
    int x=0,a=0,b=0,c=0,d=0,sum=0;
    for(int i=0;i<(n-1);i++){
        x=0;
        A=vec[i];
        for(int j=i+1;i<=n;j++){
            B=vec[j];
            for(int k=0;k<m;k++){
                if(A[k]<B[k])
                    sum+=B[k]-A[k];
                else if(A[k]>B[k])
                    sum+=A[k]-B[k];
                else if(A[k]==B[k])
                    sum+=0;                
            }
            summ.push_back(sum);
            sum=0;                
        }
    }
    for(int i=0;i<n;i++){
        cout<<summ[i]<<endl;
    }
    return 0;
}