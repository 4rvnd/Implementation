def Binary_Search(arr, first, last, x):

    if(last>=first):
        mid = (first + last)//2
        if (arr[mid] == x):
            return mid
        elif (arr[mid] > x):
            return Binary_Search(arr, first, mid - 1, x)
        else:
            return Binary_Search(arr, mid + 1, last, x)    

    else:
        return -1




arr1 = [10, 20, 30, 40]
x = int(input())

results = Binary_Search(arr1, 0, len(arr1)-1, x)
if results == -1:
    print("Not Found")
else:
    print("Number at", results+1)
