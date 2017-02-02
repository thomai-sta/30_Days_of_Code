class Node:
    def __init__(self, data):
        self.data = data
        self.next = None


class Solution:
    def insert(self, head, data):
        p = Node(data)
        if head is None:
            head = p
        elif head.next is None:
            head.next = p
        else:
            start = head
            while(start.next is not None):
                start = start.next
            start.next = p
        return head

    def display(self, head):
        current = head
        while current:
            print(current.data, end=' ')
            current = current.next
        print()

    def removeDuplicates(self, head):
        if head is None:
            return head
        current_node = head
        while (current_node.next is not None):
            if (current_node.data == current_node.next.data):
                current_node.next = current_node.next.next
            else:
                current_node = current_node.next
        return head


mylist = Solution()
T = int(input())
head = None
for i in range(T):
    data = int(input())
    head = mylist.insert(head, data)
head = mylist.removeDuplicates(head)
mylist.display(head)
