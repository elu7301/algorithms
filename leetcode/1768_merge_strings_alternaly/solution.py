class Solution:
    def mergeAlternately(self, word1: str, word2: str) -> str:
        n, m = len(word1), len(word2)
        i, j = 0, 0
        parts = []

        while i < n and j < m:
            parts.append(word1[i])
            parts.append(word2[j])
            i += 1
            j += 1

        if i < n:
            parts.append(word1[i:])
        elif j < m:
            parts.append(word2[j:])

        return ''.join(parts)
