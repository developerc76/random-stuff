#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void gameloop(); 

int main() {
	srand(time(NULL)); 
	gameloop(); 
	return 0; 
}

void gameloop() {
	char input = '!'; 
	int player_sc  = 0; 
	int comp_sc = 0; 
	while (input != 'q') {
		input = '!'; 
		printf("Player: %d\nComputer: %d\n", player_sc, comp_sc);
		while (input != 'p' && input != 'q') {
			printf("Play (p) or Quit (q): ");
			scanf(" %c", &input); 
		}
		if (input == 'q') {
			return; 
		}
		int comp_ch = rand()%3; 
		char choices[3] = {'p', 'r', 's'}; 
		char play_ch = '!'; 
		char computer_ch = choices[comp_ch]; 
		while ((play_ch != 'r' && play_ch != 'p') && play_ch != 's') {
			printf("Choice (r, p, s): ");
			scanf(" %c", &play_ch);
		}
		if (play_ch == computer_ch) {
			printf("Computer chose %c - Tie\n", play_ch); 
		} else {
			switch (play_ch) {
				case 'r': 
					if (computer_ch == 's') {
						printf("Computer chose Scissors - You Win\n"); 
						player_sc ++; 
					} else {
						printf("Computer Chose Paper - You lost\n"); 
						comp_sc++; 
					}
					break; 
				case 'p': 
					if (computer_ch == 'r') {
						printf("Computer chose Rock - You Win\n"); 
						player_sc ++; 
					} else {
						printf("Computer Chose Scissors - You lost\n"); 
						comp_sc++; 
					}
					break;
				case 's': 
					if (computer_ch == 'p') {
						printf("Computer chose Paper - You Win\n"); 
						player_sc ++; 
					} else {
						printf("Computer Chose Rock - You lost\n"); 
						comp_sc++; 
					}
					break; 
				default: 
					break; 
			}
		}
	}
}