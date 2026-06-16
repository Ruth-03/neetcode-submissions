# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

class Solution:
    def removeNthFromEnd(self, head: Optional[ListNode], n: int) -> Optional[ListNode]:
        curr=head
        count=0
        while curr:
            count=count+1
            curr=curr.next
        m=count-n
        if m==0:
            return head.next
        curr=head
        while m>0:
            if m==1:
                curr.next=curr.next.next
            curr=curr.next
            m=m-1

        return head
        