#include <iostream>
#include <array>
using namespace std;

int fibonacci(int n) {
        //create array to store fibonacci sequence
        int *f{ new int[n]{} }; //dynamically allocating array
        f[0]=0;
        f[1]=1;

        for(int i=2; i<=n;i++)
             f[i]=f[i-1]+f[i-2];

        return f[n];
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