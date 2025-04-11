# Python Program to reverse an array using temporary array
  841  # function to reverse an array
  842  def reverseArray(arr):
  843      n = len(arr)
  844      
  845      # Temporary array to store elements in reversed order
  846      temp = [0] * n
  847    
  848      # Copy elements from original array to temp in reverse order
  849      for i in range(n):
  850          temp[i] = arr[n - i - 1]
  851    
  852      # Copy elements back to original array
  853      for i in range(n):
  854          arr[i] = temp[i]
  855  if __name__ == "__main__":
  856      arr = [1, 4, 3, 2, 6, 5]
  857      reverseArray(arr)
  858    
  859      for i in range(len(arr)):
  860          print(arr[i], end=" ")">
