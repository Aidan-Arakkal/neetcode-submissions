class Solution:
    def hasDuplicate(self, nums: List[int]) -> bool:
        numbers = []
        for idx, element in enumerate(nums):
            if element in numbers:
                return True
            numbers.append(element)
        return False
