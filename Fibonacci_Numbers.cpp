#include <bits/stdc++.h>

using namespace std;

int fibonacci(int value){
    if (value == 0){
        return 0;
    } else if (value == 1){
        return 1;
    }
    else{
        return fibonacci(value-1) + fibonacci(value-2);
    }
}

int main(){
    
    int num;
    cin >> num;

    cout << fibonacci(num);

    return 0;
}