#include <bits/stdc++.h>

using namespace std;

#define fast_io ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main () {

    fast_io;

    int test;
    cin >> test;

    for (int i=1; i<=test; i++) {
        
        int num;
        cin >> num;

        cout << "Case " << i << ": " << num*((num*num)+1)/2 << endl;

    }

    return 0;

}