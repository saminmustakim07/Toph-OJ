#include <bits/stdc++.h>

using namespace std;

#define fast_io ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main () {

    fast_io;

    int value;
    cin >> value;

    cout << value/3 << ' ' << value/3 << ' ' << (value-(value/3*2));

    return 0;

}