#include <bits/stdc++.h>

using namespace std;

#define fast_io ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int co_prime_count(int value){

    int count = 0;

    for (int i = 1; i<=value; i++) {
        if (__gcd(value, i) == 1) {
            count++ ;
        }
    }

    return count;

}

int main () {

    fast_io;

    int value;
    cin >> value;

    cout << co_prime_count(value);

    return 0;

}