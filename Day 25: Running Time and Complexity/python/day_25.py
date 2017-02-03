import math

T = int(input())
for i in range(T):
    n = int(input())
    if n == 1:
        print("Not prime")
    elif n == 2:
        print("Prime")
    else:
        upper_limit = int(math.sqrt(n)) + 1
        divisor = 2
        while (divisor < upper_limit):
            if (n % divisor == 0):
                print("Not prime")
                break
            divisor += 1
        if (divisor == upper_limit):
            print("Prime")
