'''
You are given an array of digits called digits. Your task is to determine the number of distinct three-digit even numbers that can be formed using these digits.
Note: Each copy of a digit can only be used once per number, and there may not be leading zeros.

Example 1:
Input: digits = [1,2,3,4]
Output: 12
Explanation: The 12 distinct 3-digit even numbers that can be formed are 124, 132, 134, 142, 214, 234, 312, 314, 324, 342, 412, and 432. Note that 222 cannot be formed because there is only 1 copy of the digit 2.

Example 2:
Input: digits = [0,2,2]
Output: 2
Explanation: The only 3-digit even numbers that can be formed are 202 and 220. Note that the digit 2 can be used twice because it appears twice in the array.'''

class Solution(object):
    def totalNumbers(self, digits):
        """
        :type digits: List[int]
        :rtype: int
        """
        
        ans = set()

        for i in range(len(digits)):
            for j in range(len(digits)):
                for k in range(len(digits)):
                    
                    if i==j or j==k or k==i:
                        continue
                    
                    if digits[i] == 0:
                        continue

                    if digits[k] %2 != 0:
                        continue
                    
                    num = digits[i]*100 + digits[j]*10 + digits[k]
                    ans.add(num)

        return len(ans)
