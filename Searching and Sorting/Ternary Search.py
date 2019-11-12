def ternary_search(arr, first, last, key):
    while(first>=last):
        mid1 = first + ((last-first)//3)
        mid2 = last - ((last-first)//3)

        if(key == arr[mid1]):
            return mid1

        elif(key == arr[mid2]):
            return mid2

        elif(key < arr[mid1]):
            return ternary_search(arr, first, mid1-1, key)

        elif(key > arr[mid2]):
            return ternary_search(arr, mid2+1, last, key)

        elif(key < arr[mid2] and key > arr[mid1]):
            return ternary_search(arr, mid1+1, mid2-1, key)

    return -1


arr = [10, 20, 30, 40, 50]
key = 10

result = ternary_search(arr, 0, len(arr), key)

if result == -1:
    print("not found")
else:
    print("Element found at", result+1)