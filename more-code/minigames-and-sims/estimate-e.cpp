#include<bits/stdc++.h>
using namespace std;

long double factorial (int a) {
    if (a==0) return 1.0L;
    long double ans =1.0L;
    for (long i = 1; i <= a; i++){
        ans *= i;
    }
    return ans;
}
int main() {
    long long n = 0; 
    while (n == 0 || n > 9999) {
        printf("CONSTRAINTS FOR n: 0 < n <= 9999; "); 
        printf("n= ");
        cin >> n; 
    }
    long double e = 0.0;
    for (long long i = 0; i <= n; i++) {
        e+=(1.0/factorial(i));
    }
    printf("%.20Lf\n", e);
    return 0;
}