# import math

def is_palindrome(n):
    #Fill here
    sum = 0
    num = n
    while(n):
        sum = sum*10 + n%10
        n = n//10
    if (num == sum):
        return True
    else:
        return False

print(is_palindrome(1234321))

print(is_palindrome(1234322))