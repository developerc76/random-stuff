#include<stdio.h>
#include<math.h>

int max(int a, int b) {
	if (a > b) return a; 
	else return b; 
}

bool isPyth(int a, int b, int c) {
	return (a*a + b*b == c*c);
}

int main() {
	char input = '!'; 
	printf("Pythagorean Triple Checker\n"); 
	while (input != 'q') {
		do {
			printf("Continue (c) or Quit (q): "); 
			scanf(" %c", &input); 
		} while (input != 'c' && input != 'q');
		if (input == 'q') break; 
		int a, b, c; 
		printf("Int a: "); 
		scanf("%d", &a); 
		printf("Int b: "); 
		scanf("%d", &b); 
		printf("Int c: "); 
		scanf("%d", &c); 
		int d = max(max(a, b), c); 
		bool ans; 
		if (c == d) ans = isPyth(a, b, d);
		else if (b == d) ans = isPyth(a, c, d); 
		else if (a == d) ans = isPyth(b, c, d);   
		if (ans) printf("True\n"); 
		else printf("False\n"); 
		input = '!';  
	}
	return 0; 
}
