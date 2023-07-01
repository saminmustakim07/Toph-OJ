#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int num, lower_bound, upper_bond;

    cin >> num >> lower_bound >> upper_bond;

    int value[num];

    for (int i=0; i<num; i++){
        cin >> value[i];
    }

    int sum = 0;

    for (int j=lower_bound; j<=upper_bond; j++){
        sum += value[j];
    }

    cout << sum;

    return 0;
}