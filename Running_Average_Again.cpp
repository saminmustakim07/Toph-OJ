#include <bits/stdc++.h>

using namespace std;

int main(){

    int test;
    cin >> test;

    int value[test];

    for (int i=0; i<test; i++){
        cin >> value[i];
    }

    double sum = 0;

    double average;

    for (int j=0; j<test; j++){
        sum += value[j];
        average = sum/(j+1);
        cout << average << endl;
    }

    return 0;
}