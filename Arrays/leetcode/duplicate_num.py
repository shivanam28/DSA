''' Problem: Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n] inclusive.
There is only one repeated number in nums, return this repeated number.
You must solve the problem without modifying the array nums and uses only constant extra space.

Example 1:
Input: nums = [1,3,4,2,2]
Output: 2

Example 2:
Input: nums = [3,1,3,4,2]
Output: 3

Example 3:
Input: nums = [3,3,3,3,3]
Output: 3
 
Constraints:

1 <= n <= 105
nums.length == n + 1
1 <= nums[i] <= n
All the integers in nums appear only once except for precisely one integer which occurs two or more times.

Follow up:

How can we prove that at least one duplicate number must exist in nums?
ans: Given that there are n+1 numbers in the range [1, n], by the pigeonhole principle, at least one number must be repeated because there are more numbers than possible unique values.

Can you solve the problem in linear runtime complexity?
ans: This algorithm runs in linear time, O(n), and uses constant extra space, O(1), making it an efficient and optimal solution for this problem.

SOLUTION BELOW !!!

To solve the problem of finding the duplicate number in an array without modifying the array and using only constant extra space, 
we can use a clever algorithm known as Floyd's Tortoise and Hare (Cycle Detection) algorithm. 
This algorithm is typically used for detecting cycles in linked lists, but it can be adapted for this problem
'''

def findDuplicate(nums):
    # Phase 1: Finding the intersection point in the cycle
    tortoise , hare = 0,0
        
    while True:
        tortoise = nums[tortoise] # one jump
        hare = nums[nums[hare]]   # two jumps
        if tortoise == hare:      # meet here and cycle detected
            break

    # Finding the entrance to the cycle
    tortoise = 0                  # after detecting cycle init tortoise to 0 to get the entrance
    while tortoise != hare:
        tortoise = nums[tortoise] # now one jump for both
        hare = nums[hare]
    
    return hare          

# Use cases
nums1 = [1, 3, 4, 2, 2]
nums2 = [3, 1, 3, 4, 2]
nums3 = [3, 3, 3, 3, 3]

print(findDuplicate(nums1))  # Output: 2
print(findDuplicate(nums2))  # Output: 3
print(findDuplicate(nums3))  # Output: 3
