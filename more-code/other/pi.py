import timeit
import random

def main():
    setup_code = """
import random #
in_circle = 0
total = 0
n = int(input("Iterations (1 <= n <= 2^31 - 1): ")) 
if (n <= 0): 
    n = int(input("Iterations (1 <= n <= 2^31 - 1): "))
pi = 4
"""
    test_code = """
while n > 0: 
    x = random.uniform(-1, 1)
    y = random.uniform(-1,1)
    if (x**2 + y**2 <= 1): 
        in_circle+=1
    total+=1   
    pi = 4 * (in_circle/total)
    n-=1
"""
    print(f"Execution Time: {timeit.timeit(stmt=test_code, setup=setup_code):.6f} seconds")
if __name__ == "__main__": 
    main()