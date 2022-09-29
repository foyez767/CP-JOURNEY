//Aug/18/2022 02:21UTC-6: 450A
#include<bits/stdc++.h>
#define ll long long
#define nn  "\n"
using namespace std;

int main(){
ios::sync_with_stdio(0);
cin.tie(0);
	ll n=0,m=0;
	cin>>n>>m;
	int arr[n+1],cpy[n+1],counter[n+1]{};
	for(int i=1;i<=n;i++){
		cin>>arr[i];
		cpy[i]=arr[i];
	}
	int cnt=0;
	for(int i=1;i<=n;i++){
		cnt=0;
		while(arr[i]>m){
				cnt++;
				arr[i]-=m;
			}
		if(arr[i]<=m){
			cnt++;
		}
		counter[i]=cnt;
	}
	ll max=0,pos=0;
	for(int i=1;i<=n;i++){
		if(counter[i]>=max){
			pos=i;max=counter[i];
		}
	}
	cout<<pos<<nn;
	
	return 0;
}