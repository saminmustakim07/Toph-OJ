#include <bits/stdc++.h>

using namespace std;

int main(){

    int value;
    cin >> value;

    int fact = 1;

    if (value <= 19){
        for (int i=1; i<=value; i++){
            fact = (fact*i)%10000;
        }
        cout << fact << endl;
    } else {
        cout << "0000" << endl;
    }

    return 0;
}