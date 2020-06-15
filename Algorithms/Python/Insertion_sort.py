arr = [5,2,4,65,46,45,46]

for i in range(1 , len(arr)) :
    key = arr[i]
    j = i-1

    while j >= 0 and arr[j] > key :
        arr[j] = key
        j -= 1

    arr[j+1] = key

print(arr)
