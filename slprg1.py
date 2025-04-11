arr = [3, 1, 4, 1, 5, 9, 2, 6, 5, 3, 5]
maxval = arr[0]
minval = arr[0]
for num in arr:
    if num > maxval:
        maxval = num
    if num < minval:
        minval = num
print("Max:", maxval)
print("Min:", minval)
