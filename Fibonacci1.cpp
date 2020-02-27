#include <iostream>
using namespace std;

int fibonacci(int n) {
    if (n==0 || n==1)
        return n;
    else
        return fibonacci(n-1) + fibonacci(n-2); //think of it as going from the final result towards 1
}

int main() {

    // 0,1,1,2,3,5,8,13,21,33...
    cout <<  fibonacci(0) << endl;
    cout <<  fibonacci(1) << endl;
    cout <<  fibonacci(2) << endl;
    cout <<  fibonacci(3) << endl;
    cout <<  fibonacci(4) << endl;
    cout <<  fibonacci(5) << endl;
    cout <<  fibonacci(6) << endl;
    
    return 0;
}