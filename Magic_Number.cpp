#include <bits/stdc++.h>

using namespace std;

#define fast_io ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

bool prime (int value) {
    int count = 0;
    for (int i = 1; i <= value; i++) {
        if (value % i == 0) {
            count++;
        }
    }
    if (count == 2) {
        return true;
    } else {
        return false;
    }
}

int main () {

    fast_io;

    int test;
    cin >> test;

    while (test--) {
        int value;
        cin >> value;

        int main_value = sqrt(value);

        double main = sqrt(value);

        if (main_value == main) {
            if (prime(main_value) == 1) cout << "YES." << endl;
            else cout << "NO." << endl;
        } else {
            cout << "NO." << endl;
        }
    }

    return 0;

}