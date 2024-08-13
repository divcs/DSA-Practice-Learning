class Solution(object):  
    def isValid(self, s):  
        """  
        :type s: str  
        :rtype: bool  
        """  
        stack = []  # Initialize an empty stack  
        bracket_map = {')': '(', '}': '{', ']': '['}  # Mapping of closing to opening brackets  
        
        for char in s:  
            if char in bracket_map.values():  # If it's an opening bracket  
                stack.append(char)  # Push onto stack  
            elif char in bracket_map.keys():  # If it's a closing bracket  
                if not stack or stack[-1] != bracket_map[char]:  # Check for matching  
                    return False  # Invalid  
                stack.pop()  # Pop the matched opening bracket  
        
        return not stack  # Ensure all opening brackets are closed  

# Example usage:  
solution = Solution()  
print(solution.isValid("()"))       # Output: True  
print(solution.isValid("()[]{}"))   # Output: True  
print(solution.isValid("(]"))