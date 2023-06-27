#include <bits/stdc++.h>

using namespace std;

int main(){
    
    double minute, hour, angle;
    cin >> hour >> minute;

    angle = abs(((11*minute)-(60*hour))/2);

    cout << min(angle, 360-angle);

    return 0;
}