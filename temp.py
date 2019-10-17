arr = [1, 2, 3, 4, 5]
arr1 = []
d = 3

for i in range (d, len(arr)):
    arr1.append(arr[i])

for i in range (0, d):
    arr1.append(arr[i])

print(arr1)