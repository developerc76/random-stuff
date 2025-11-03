#! /usr/bin/env python

import random
print("Coin flip")
i = True
while i == True: 
	choice = int(input("Heads (1) or tails (0): "))
	result = random.choice([0, 1, 0, 1, 0, 1, 0, 1, 0, 1])
	if result == choice:
		print("You guessed correct \n")
	else: 
		print("You guessed incorrectly \n")
	quit = int(input("Try again (1) or quit (0): "))
	if quit == 0: 
		i = False

