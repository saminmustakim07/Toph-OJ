#include <bits/stdc++.h>

using namespace std;

int main(){

    int child, chocolate;

    cin >> child >> chocolate;

    cout << child - (chocolate % child);

    return 0;
}