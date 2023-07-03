#include <bits/stdc++.h>

using namespace std;

#define fast_io ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main () {

    fast_io;

    long long int value;
    cin >> value;

    if (value % 2 == 0) cout << value/2;
    else cout << (value+1)/2;

    return 0;

}