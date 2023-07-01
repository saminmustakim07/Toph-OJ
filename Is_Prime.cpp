#include <bits/stdc++.h>

using namespace std;

int divisor_count(int value){
    int count = 0;
    for (int i=1; i<=value; i++){
        if (value%i == 0){
            count ++;
        }
    }
    return count;
}

int main(){

    int value;
    cin >> value;

    if (divisor_count(value)==2) cout << "Yes";
    else cout << "No";

    return 0;
}