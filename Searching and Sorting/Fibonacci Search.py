import sys
def fibonacci_search(arr, first, last, key):
    return 0



#driver code

arr = [10, 20, 30, 40, 50]
key = 40

result = fibonacci_search(arr, 0, len(arr), key)

if result == -1:
    print("Not found")

else:
    print("Elements at index ", result)