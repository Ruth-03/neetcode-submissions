# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

class Solution:
    def rightSideView(self, root: Optional[TreeNode]) -> List[int]:
        res=[]
        def dfsright(node,depth):
            if node is None:
                return
            if len(res)==depth:
                res.append(node.val)
            dfsright(node.right,depth+1)
            dfsright(node.left,depth+1)
        dfsright(root,0)
        return res

        