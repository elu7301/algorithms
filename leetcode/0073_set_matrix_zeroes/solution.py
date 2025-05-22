class Solution:
    def setZeroes(self, matrix: List[List[int]]) -> None:
        rows, cols = len(matrix), len(matrix[0])
        first_row_zero = any(val == 0 for val in matrix[0])
        first_col_zero = any(row[0] == 0 for row in matrix)

        for i, row in enumerate(matrix[1:], start=1):
            for j, val in enumerate(row[1:], start=1):
                if val == 0:
                    matrix[i][0] = 0
                    matrix[0][j] = 0

        for i, row in enumerate(matrix[1:], start=1):
            for j in range(1, cols):
                if matrix[i][0] == 0 or matrix[0][j] == 0:
                    matrix[i][j] = 0

        if first_row_zero:
            for j in range(cols):
                matrix[0][j] = 0

        if first_col_zero:
            for i in range(rows):
                matrix[i][0] = 0
