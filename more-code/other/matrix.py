#!/usr/bin/env python3


def printmat(mat):
    for i in mat:
        print(i)


def det2x2(mat):
    return mat[0][0] * mat[1][1] - mat[0][1] * mat[1][0]


def adj(cofactor):
    adj = []
    for i in range(len(cofactor)):
        adj.append([])
        for j in range(len(cofactor)):
            adj[i].append(cofactor[j][i])
    return adj


def cofactor(mat):
    cofactor = [[], [], []]
    cofactor[0].append(det2x2([[mat[1][1], mat[1][2]], [mat[2][1], mat[2][2]]]))
    cofactor[0].append(-det2x2([[mat[1][0], mat[1][2]], [mat[2][0], mat[2][2]]]))
    cofactor[0].append(det2x2([[mat[1][0], mat[1][1]], [mat[2][0], mat[2][1]]]))

    cofactor[1].append(-det2x2([[mat[0][1], mat[0][2]], [mat[2][1], mat[2][2]]]))
    cofactor[1].append(det2x2([[mat[0][0], mat[0][2]], [mat[2][0], mat[2][2]]]))
    cofactor[1].append(-det2x2([[mat[0][0], mat[0][1]], [mat[2][0], mat[2][1]]]))

    cofactor[2].append(det2x2([[mat[0][1], mat[0][2]], [mat[1][1], mat[1][2]]]))
    cofactor[2].append(-det2x2([[mat[0][0], mat[0][2]], [mat[1][0], mat[1][2]]]))
    cofactor[2].append(det2x2([[mat[0][0], mat[0][1]], [mat[1][0], mat[1][1]]]))

    return cofactor


def det3x3(mat):
    cof = cofactor(mat)
    print(cof)
    return mat[0][0] * cof[0][0] - mat[0][1] * cof[0][1] + mat[0][2] * cof[0][2]


def inv2x2(mat):
    det = det2x2(mat)
    if det == 0:
        return "Matrix is singular (no inverse)"
    inv = [[mat[1][1] / det, -mat[0][1] / det], [-mat[1][0] / det, mat[0][0] / det]]
    return inv


def inv3x3(mat):
    det = det3x3(mat)
    if det == 0:
        return "Matrix is singular (no inverse)"
    adj_mat = adj(cofactor(mat))
    inv = []
    for i in range(3):
        inv.append([adj_mat[i][0] / det, adj_mat[i][1] / det, adj_mat[i][2] / det])

    return inv


if __name__ == "__main__":
    print("Matrix Inverse")
    size = input("Number of rows in square matrix (2 or 3): ")
    opt = ["2", "3"]
    while not size in opt: 
        size = input("Num of rows (2 or 3): ")
    size = int(size)
    mat = []
    for i in range(size):
        mat.append([])
        for j in range(size):
            num = input(f"A{i+1}{j+1}: ")
            while not num.isdigit(): 
                num = input(f"A{i}{j+1}: ")
            num = int(num)
            mat[i].append(num)

    print("Original Matrix: ")
    printmat(mat)

    if size == 2:
        inverse = inv2x2(mat)
    elif size == 3:
        inverse = inv3x3(mat)
    else:
        print("Invalid matrix size. Only 2x2 or 3x3 matrices are supported.")
        exit()

    if isinstance(inverse, str):  # Check if the result is an error message
        print("Inverse:", inverse)
    else:
        print("Inverse: ")
        printmat(inverse)
