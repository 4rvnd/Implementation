def linear_search(arr1, x):
    for i in range(0, len(arr1)):
        if (arr1[i] == x):
            return i
    return -1


arr1 = [10, 20, 30, 40]
x = 40

result = linear_search(arr1, x)
if result == -1:
    print("Not found")
else:
    print("Number at", result+1)