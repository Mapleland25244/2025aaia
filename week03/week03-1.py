# week03-1.py
# LeetCode 2579. Count Total Number of Colored Cells
class Solution:
    def coloredCells(self, n: int) -> int:
        return n**2 + (n-1)**2
        #把頭轉過來當正方形
