// Input Format
// First line contains T that denotes the number of test cases. This is followed by lines, each containing an integer, N.

// Output Format
// For each test case, print an integer that denotes the sum of all the multiples of N or below .

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

// O(n) solution. Fails two testcases due to timeout.
// int main() {
//     /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
//     int t, n;
//     cin >> t;
//     while(t--){
//         cin >> n;
//         long long int sum = 0;
//         while(--n){
//             if (n%3 == 0 || n%5 == 0)
//                 sum += n;
//         }
//         cout << sum << endl;
//     }
//     return 0;
// }


// O(1) solution.
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    long num, three, five, fifteen, t;
    cin >> t;
    while(t--){
        cin >> num;
        three=(num-1)/3;
	    five=(num-1)/5;
	    fifteen=(num-1)/15;
	
	    cout << 3*(three*(three+1)/2)+5*(five*(five+1)/2)-15*(fifteen*(fifteen+1)/2)<<endl;

    }
    return 0;
}
