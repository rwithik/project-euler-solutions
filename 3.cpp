#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

//Fails two test cases.

int main() {
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        for (int i = n - 1; i > 1; i--) {
        	if (n % i == 0) {
        	    n = i;
        	}
    	}
        cout << n << endl;
    }
    return 0;
}
