#!/usr/bin/env python3

# import tictactoe_ai

BOARD = [
    ["(1, 1)", "(2, 1)", "(3, 1)"],
    ["(1, 2)", "(2, 2)", "(3, 2)"],
    ["(1, 3)", "(2, 3)", "(3, 3)"],
]
E = [[0, 0, 0], [0, 0, 0], [0, 0, 0]]


def printboard():
    for i in range(3):
        print(BOARD[i][0], "|", BOARD[i][1], "|", BOARD[i][2])
        if i != 2:
            print("------------------------")


def checkwin(a):
    for i in range(0, 3):
        if BOARD[i][0] == BOARD[i][1] == BOARD[i][2]:
            return True
        elif BOARD[0][i] == BOARD[1][i] == BOARD[2][i]:
            return True
        elif BOARD[1][1] == BOARD[2][2] == BOARD[0][0]:
            return True
        elif BOARD[0][2] == BOARD[1][1] == BOARD[2][0]:
            return True
        else:
            return False


def dontoverlap(i, j):
    if E[i][j] == 0:
        E[i][j] = 1
        return True
    else:
        return False


def get_coordinates():
    i = "x"  # placeholders
    j = "y"
    while not i.isdigit() or not j.isdigit():
        i = int(input("X-Coordinate (1, 2, 3): ")) - 1
        j = int(input("Y-Coordinate (1, 2, 3): ")) - 1
        if i != int(i) or j != int(j):
            print("Invalid input.")
        else:
            break
    if i == int(i) and j == int(j):
        return i, j


def turn(a):
    while True:
        i, j = get_coordinates()
        if dontoverlap(i, j):
            BOARD[j][i] = a
            print("\n")
            break


def two_player():
    printboard()
    while True:
        for i in range(1, 9):
            if i / 2 == int(i / 2):
                a = "   X  "
            else:
                a = "   O  "
            print(f"\nturn: {a.strip()}")
            turn(a)
            printboard()

            if checkwin(a):
                print(f"{a} wins!")
                print("Thanks for playing")
                quit()
        if i == 9 and not checkwin("   X  ") and not checkwin("   O  "):
            print("Its a tie")
            print("Thanks for playing")
            quit()


def main():
    q = int(input("Number of players (1 or 2): "))
    match (q):
        case 2:
            two_player()
        case _:
            print("Bot in production")
            print("Bot is X and will go second. ")


if __name__ == "__main__":
    main()
