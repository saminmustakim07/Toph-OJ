#include <bits/stdc++.h>

using namespace std;

int main(){

    int test;
    cin >> test;

    int value[test];

    for (int i=0; i<test; i++){
        cin >> value[i];
    }

    sort (value, value + test);

    cout << value[test-1];

    return 0;
}