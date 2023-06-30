#include <bits/stdc++.h>

using namespace std;

int fib(int value){
    if (value == 0) return 0;
    else if (value == 1) return 1;
    else if (value == 2) return 2;
    else {
        return fib(value-1) + fib(value-2);
    }
}

int main(){

    int up, down;
    cin >> down >> up;

    for (int i=0; i<10000000; i++){
        if (fib(i)>=down && fib(i)<=up){
            cout << fib(i) << endl;
        } else if (fib(i)>=up) break;
    }

    return 0;
}