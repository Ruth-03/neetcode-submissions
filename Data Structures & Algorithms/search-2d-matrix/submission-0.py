from typing import List

class Solution:
    def searchMatrix(self, matrix: List[List[int]], target: int) -> bool:
        def binarysearch(row: List[int], target: int) -> bool:
            l, r = 0, len(row) - 1
            while l <= r:
                m = (l + r) // 2
                if target < row[m]:
                    r = m - 1
                elif target > row[m]:
                    l = m + 1
                else:
                    return True
            return False

        rows = len(matrix)
        l, r = 0, rows - 1
        while l <= r:
            m = (l + r) // 2
            if matrix[m][0] <= target <= matrix[m][-1]:
                return binarysearch(matrix[m], target)
            elif target < matrix[m][0]:
                r = m - 1
            else:
                l = m + 1
        return False