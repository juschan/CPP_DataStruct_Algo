#include <iostream>
using namespace std;

//sum by iteration
int sum_method_a(int n) {
    int sum=0;
    for (int i=1; i<n+1; i++)
        sum += i;
    return sum;
}

//sum by formula
int sum_method_b(int n){
    return (n* (n-1))/2;
}

//sum by recursion
int sum_method_c(int n) {
    if (n==1)
        return 1;
    else
        return n + sum_method_c(n-1);
}

int main() {
    
    cout << "Sum Method A: " << sum_method_a(100) << endl;
    cout << "Sum Method B: " << sum_method_a(100) << endl;
    cout << "Sum Method C: " << sum_method_a(100) << endl;
    
    return 0;
}
