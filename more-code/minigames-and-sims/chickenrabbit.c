#include<stdio.h>

void solve(int heads, int legs) {
	// c + r = heads
	// c = 2 legs && r = 4 legs
	int rabbits = (legs - (2 * heads)) / 2; 
	int chickens = heads - rabbits; 
	printf("R: %d; C: %d\n", rabbits, chickens); 
}

int main() {
	int h, l; 
	printf("Heads: "); 
	scanf(" %d", &h); 
	printf("Legs: "); 
	scanf(" %d", &l); 
	solve(h, l); 
	return 0;
}	
