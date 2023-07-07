//**********In the name of Allah, most Gracious and Merciful******
#include<bits/stdc++.h>
#define ll long long
#define nn 
using namespace std;

void solve()
{
    int T;
    cin >> T;
    std::string temp;
    std::string input;
    for(int i=0;i<T;i++)
    {
        while(std::getline(std::cin,temp)) {
            input += temp;
        }
    }
    std::cout << input << endl;
 
 }
int main(){
ios::sync_with_stdio(0);
cin.tie(0);
ll t=1;
// cin>>t;
while(t--)   solve();
    
    return 0;
}