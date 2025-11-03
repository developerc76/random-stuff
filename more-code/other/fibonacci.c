#include<stdio.h>


long fibonacciLoop(int n) {
	if (n <= 2) return 1;
	long fn, fn_1, fn_2;
	fn_2 = 1; 
	fn_1 = 1; 
	fn = 2;  
	printf("%ld %ld ", fn_2, fn_1); 
	n -= 2; 
	while (n--) {
		fn = fn_1 + fn_2; 
		fn_2 = fn_1; 
		fn_1 = fn; 
		printf("%ld ", fn); 
	}
	return fn; 
}
int main() {
	int n = 0; 
	printf("N = "); 
	scanf("%d", &n); 
	long ans = fibonacciLoop(n); 
	return 0; 
}
