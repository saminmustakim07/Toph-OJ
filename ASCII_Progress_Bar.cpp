#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int value;
    cin >> value;

    cout << '[';

    int main_value = value/10;
    for (int j=1; j <= main_value; j++){
        cout << '+';
    }
    for (int l=1; l<=(10-main_value); l++){
        cout << '.';
    }

    cout << "] " << value << '%';

    return 0;

}