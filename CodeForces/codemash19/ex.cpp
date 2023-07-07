#include<bits/stdc++.h>
using namespace std;

int main(){
    int s, x; cin >> s >> x;
    int p = (s - x) >> 1;

    int a = p;
    int b = a ^ x;
    cout << a << " " << b << endl;


return 0;
}