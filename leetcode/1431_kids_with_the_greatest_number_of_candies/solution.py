class Solution:
    def kidsWithCandies(self, candies: List[int], extraCandies: int) -> List[bool]:
        max_value = max(candies)
        result = []

        for num in candies:
            result.append(num + extraCandies >= max_value)

        return result