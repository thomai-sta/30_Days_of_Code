class Node:
    def __init__(self, data):
        self.right = self.left = None
        self.data = data


class Solution:
    def insert(self, root, data):
        if root is None:
            return Node(data)
        else:
            if data <= root.data:
                cur = self.insert(root.left, data)
                root.left = cur
            else:
                cur = self.insert(root.right, data)
                root.right = cur
            return root

    def levelOrder(self, root):
        tree = [root]
        tree_string = ""
        while (len(tree) > 0):
            tree_string += "%d " % tree[0].data
            if (tree[0].left is not None):
                tree.append(tree[0].left)
            if (tree[0].right is not None):
                tree.append(tree[0].right)
            tree.pop(0)
        print(tree_string)


T = int(input())
myTree = Solution()
root = None
for i in range(T):
    data = int(input())
    root = myTree.insert(root, data)
myTree.levelOrder(root)
