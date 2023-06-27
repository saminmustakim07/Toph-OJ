#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int value;
    cin >> value;

    for (int i=1; i<=value; i++){
        if (value%i == 0){
            cout << i << endl;
        }
    }

    return 0;
}