//Print the sum of even terms of the Fibonacci series less than N
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

unsigned long long int evenFibSum(unsigned long long int n){
    unsigned long long int n1, n2, n3;
    n1 = 1;
    n2 = 2;
    n3 = 2;
    unsigned long long int sum = 2;
    while (1){
        n3 = n2 + n1;
        if(n3 > n) break;
        if(n3 % 2 == 0) sum += n3;
        n1 = n2;
        n2 = n3;
    }
    
    return sum;
    
}

int main() {
    int t;
    unsigned long long int n, s;
    cin >> t;
    while(t--){
        cin >> n;
        s = evenFibSum(n);
        cout << s << endl;
    }
    return 0;
}
