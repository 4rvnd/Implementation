def binary_search(arr, first, last, key):
    mid = (first+last)//2
    if (arr[mid] == key):
        return mid
    
    elif (arr[mid] < key):
        return binary_search(arr, mid+1, last, key)
    
    elif (arr[mid] > key):
        return binary_search(arr, first, mid-1, key)
    
    else:
        return -1


def exponential_search(arr, first, last, key):
    if(arr[0] == key):
        return 0;
    
    i = 1
    while(i<last and arr[i] <= key):
        i *= 2
    
    return binary_search(arr, i//2, last, key)

#driver code

arr = [10, 20, 30, 40, 50]
key = 40

result = exponential_search(arr, 0, len(arr), int(key))

if (result == -1):
    print("Not Found")
else:
    print("index is", result)