#include <bits/stdc++.h>

using namespace std;

int main(){

    string x, y;
    cin >> x >> y;

    int last_x, last_y;

    last_x = x[x.length()-1] - '0';
    last_y = y[y.length()-1] - '0';

    if ((last_x+last_y)%2==0) { 
        cout << "Black";
    }
    else {
        cout << "White"; 
    }

    return 0;
}