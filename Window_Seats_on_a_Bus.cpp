#include <bits/stdc++.h>

using namespace std;

#define fast_io ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main () {

    fast_io;

    int test;
    cin >> test;

    for (int i=1; i<=test; i++) {
        
        double l, w, d;
        cin >> l >> w >> d;

        cout << "Case " << i << ": " << fixed << setprecision(2) << (w-d)/2*l << endl;

    }
    

    return 0;

}