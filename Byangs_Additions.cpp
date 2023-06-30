#include <bits/stdc++.h>

using namespace std;

int main(){

    int value_1, value_2;
    cin >> value_1 >> value_2;

    int num = min(value_1, value_2);

    int count = 0;

    while (num != 0){
        num /= 10;
        count ++;
    }

    int out = 0;

    int new1, new2;

    int main = count;

    for (int i=1; i<=count; i++){
        for (int j=10; i<=count/2; j*=10){

            new1 = value_1 - (value_1%(j/10));
            new1 = new1/(j/10);

            new2 = value_2 - (value_2%(j/10));
            new2 = new2/(j/10);

            int sum = (new1%10) + (new2%10);
            if (sum >= 10){ 
                out = -10;
                break;
            }
            else {
                out += 1;
                if (out == main){
                    out = 1;
                    break;
                }
            }
        }
    }

    if (out == 1){
        cout << "No";
    } else {
        cout << "Yes";
    }

    return 0;
}