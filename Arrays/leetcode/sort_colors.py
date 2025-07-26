
'''
Given an array nums with n objects colored red, white, or blue, 
sort them in-place so that objects of the same color are adjacent, with the colors in the order red, white, and blue.
We will use the integers 0, 1, and 2 to represent the color red, white, and blue, respectively.
You must solve this problem without using the library's sort function.

Example 1:
Input: nums = [2,0,2,1,1,0]
Output: [0,0,1,1,2,2]

Example 2:
Input: nums = [2,0,1]
Output: [0,1,2]
 
Constraints:

n == nums.length
1 <= n <= 300
nums[i] is either 0, 1, or 2.
 
SOLUTION BELOW!!!

To solve the problem of sorting the array of colors represented by 0, 1, and 2 in-place with a single pass and constant space,
 we can use the Dutch National Flag algorithm devised by Edsger W. Dijkstra. 
This algorithm is optimal for this problem because it sorts the array in linear time
O(n) and uses constant space O(1).

'''


def sortColors( nums):
        """
        :type nums: List[int]
        :rtype: None Do not return anything, modify nums in-place instead.
        """
        l,r = 0,len(nums) - 1
        i = 0

        def swap(i,j):          # swaping fuction
            temp = nums[i]
            nums[i] = nums[j]
            nums[j] = temp

        while i<=r:            
            if nums[i] == 0:    # start element comparison
                swap(l,i)       # swaping at element with the left one 
                l+=1            # incrementing position of left element
            elif nums[i] == 2:  # last element comparison
                swap(r,i)       # swaping at element with the right one     
                r-=1            # deccrementing position of right element
                i-=1            # decrementing ith element
            i+=1                # incrementing ith element after each pass


nums1 = [2, 0, 2, 1, 1, 0]
nums2 = [2, 0, 1]

sortColors(nums1)
sortColors(nums2)

print(nums1)  # Output: [0, 0, 1, 1, 2, 2]
print(nums2)  # Output: [0, 1, 2]