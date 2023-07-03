#include <bits/stdc++.h>

using namespace std;

#define fast_io ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

long long int summation (long long int n) {
    long long int sum = 0;
    for (long long int i=1; i <= n; i++){
        sum = (sum+i)%1000000007;
    }
    return sum;
}

long long int n_power_n (long long int n) {
    long long int value = 1;
    for (long long int i=1; i <= n; i++){
        value = (value*n)%1000000007;
    }
    return value;
}

long long int mul_summation (long long int n) {
    long long int value = 1;
    for (long long int i=1; i <= n; i++){
        value = (value*i)%1000000007;
    }
    return value; 
}

long long int two_three_n (long long int n) {
    long long int two_value = 1;
    long long int three_value = 1;
    for (long long int i=1; i <= n; i++){
        three_value = (three_value*3)%1000000007;
        two_value = (two_value*2)%1000000007;
    }
    return (two_value+three_value)%1000000007;
}

int main () {

    fast_io;

    long long int value;
    cin >> value;

    cout << summation(value) << ' ' << n_power_n(value) << ' ' << mul_summation(value) << ' ' << two_three_n(value);

    return 0;

}