#include<bits/stdc++.h>
using namespace std;

int enemies = 5;

void func () {
    int enemies = 8;
    cout << "inside : " << enemies << endl;
}
int main(){
    cout << "Outside : " << enemies << endl;

    func();
    
    cout << "outside:  " << enemies << endl;

return 0;
}


