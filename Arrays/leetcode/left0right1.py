# Sort the array which contains all the 0's in left side and all the 1's in right side
# input array = [0,1,0,1,0,0,1,1]
# output array = [0,0,0,0,1,1,1,1]

def sort_binary_array(arr):
    left, right = 0, len(arr) - 1

    while left < right:
        if arr[left] == 0:
            left += 1
        elif arr[right] == 1:
            right -= 1
        else:
            arr[left], arr[right] = arr[right], arr[left]
            left += 1
            right -= 1

    return arr

# Input array
arr = [0, 1, 0, 1, 0, 0, 1, 1]
sorted_arr = sort_binary_array(arr)
print(sorted_arr)  # Output: [0, 0, 0, 0, 1, 1, 1, 1]


# Initialize two pointers:
# left starts from index 0
# right starts from the last index
# Move left forward if it's already 0
# Move right backward if it's already 1
# If left is 1 and right is 0, swap them
# Repeat until left crosses right
# This approach ensures an O(n) time complexity
    
