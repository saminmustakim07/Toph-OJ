#include <bits/stdc++.h>

using namespace std;

int main(){

    int value;
    cin >> value;

    for (int i=1; i<=value; i++){
        for (int j=1; j<=(value-i); j++){
            cout << ' ';
        }
        for (int l=1; l<i; l++){
            cout << "* ";
        }
        cout << '*' << endl;
    }

    return 0;
}