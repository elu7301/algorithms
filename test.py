class Solution:
    def findMaxAverage(self, nums: List[int], k: int) -> float:
        result = float("-inf")
        count, total_amount = 0, 0

        for i in range(len(nums)):
            total_amount += nums[i]
            count += 1

            if count >= k:

                if total_amount / count > result:
                    print(i , total_amount / count)
                    result = total_amount / count

                total_amount -= nums[i - k]
                count -= 1

        return result