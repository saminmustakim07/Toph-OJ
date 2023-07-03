#include <bits/stdc++.h>

using namespace std;

#define fast_io ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main (){

    fast_io;

    int value;
    cin >> value;

    int sum = 0;

    for (int i=1; i<=value; i++){
        sum += pow(i,2);
    }

    cout << sum;

    return 0;

}