#include <bits/stdc++.h>

using namespace std;

int main(){

    float radius;
    cin >> radius;

    float area = pow(radius,2) * acos(-1);

    cout << area << endl;

    return 0;
}