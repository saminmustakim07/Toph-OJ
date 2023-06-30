#include <bits/stdc++.h>

using namespace std;

int main(){

    int test, num;
    cin >> test;

    vector <int> value;

    for (int i=0; i<test; i++){
        cin >> num;
        value.push_back(num);
    }

    int swap_count = 0;

    for (int j=0; j<test-1; j++){
        for (int l=0; l<test-2; l++){
            if (value[j] > value[j+1]){
                swap (value[j], value[j+1]);
                swap_count++;
            }
        }
    }

    if (swap_count==0){ cout << "Yes"; }
    else {cout << "No"; }

    return 0;
}