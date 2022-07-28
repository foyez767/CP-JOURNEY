#include<bits/stdc++.h>
using namespace std;

int main(){
ios::sync_with_stdio(0);
cin.tie(0);
  
    int t=0;
    cin>>t;
    while(t>0){

        int x=0,p=0,q=0,r=0; 

        cin>>x;
        int arr[4];
        for(int i=1;i<=3;i++){
            cin>>arr[i];
        }
        if(x==1){
            if(arr[1]==0)
                cout<<"NO"<<endl;
            else{
                p=arr[1];
                if(arr[p]==0)
                    cout<<"NO"<<endl;
                else{
                    q=arr[p];
                    if(arr[q]==0)
                        cout<<"YES"<<endl;
                    else{
                        cout<<"NO"<<endl;
                    }
                }
            }

        }else if(x==2){
            if(arr[2]==0)
                cout<<"NO"<<endl;
            else{
                p=arr[2];
                if(arr[p]==0)
                    cout<<"NO"<<endl;
                else{
                    q=arr[p];
                    if(arr[q]==0)
                        cout<<"YES"<<endl;
                    else{
                        cout<<"NO"<<endl;
                        
                    }
                }
            }

        }else if(x==3){
            if(arr[3]==0)
                cout<<"NO"<<endl;
            else{
                p=arr[3];
                if(arr[p]==0)
                    cout<<"NO"<<endl;
                else{
                    q=arr[p];
                    if(arr[q]==0)
                        cout<<"YES"<<endl;
                    else{
                        cout<<"NO"<<endl;
                    }
                }
            }

        }



        t--;
    }
    return 0;
}