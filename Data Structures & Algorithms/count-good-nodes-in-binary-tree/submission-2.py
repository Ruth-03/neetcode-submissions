# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

class Solution:
    def goodNodes(self, root: TreeNode) -> int:
        goodnodes=0
        largest=0
        def dfs(node,largest):
            nonlocal goodnodes
            if node is None:
                return 0
            if node.val>=largest:
                goodnodes+=1
            largest=max(largest,node.val)
            dfs(node.right,largest)
            dfs(node.left,largest)
        dfs(root,root.val)
        return goodnodes