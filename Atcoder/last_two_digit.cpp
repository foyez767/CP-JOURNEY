/*#include<bits/stdc++.h>
using namespace std;

int main(){
ios::sync_with_stdio(0);
cin.tie(0);
  
    string s;
    cin>>s;
    cout<<s[1]<<s[2]<<endl;
    return 0;
}
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
ios::sync_with_stdio(0);
cin.tie(0);
  
    int n=0,rem=0,div=0,a=0,b=0;
    cin>>n;
    a=n%10;
    n/=10;
    b=n%10;
    cout<<b<<a<<endl;
    return 0;
}