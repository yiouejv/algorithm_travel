
<h2>满二叉树</h2>

满二叉树：如果一棵二叉树只有度为0的结点和度为2的结点，并且度为0的结点在同一层上，则这棵二叉树为满二叉树。

<h2>完全二叉树</h2>

在完全二叉树中，除了最底层节点可能没填满外，其余每层节点数都达到最大值，

并且最下面一层的节点都集中在该层最左边的若干位置。

若最底层为第 h 层，则该层包含 1 ~ 2^h -1  个节点。

<h2>二叉搜索树</h2>

- 若它的左子树不空，则左子树上所有结点的值均小于它的根结点的值；
- 若它的右子树不空，则右子树上所有结点的值均大于它的根结点的值；
- 它的左、右子树也分别为二叉排序树

<h2>平衡二叉搜索树</h2>

平衡二叉搜索树：又被称为AVL（Adelson-Velsky and Landis）树，

且具有以下性质：它是一棵空树或它的左右两个子树的高度差的绝对值不超过1，并且左右两个子树都是一棵平衡二叉树。

------------------

<h2>存储方式</h2>

顺序存储和链式存储

- 顺序存储：用数组存储, 遍历：如果父节点的数组下标是 i，那么它的左孩子就是 i * 2 + 1，右孩子就是 i * 2 + 2。
- 链式存储: 用指针, 链式存储更有利于理解。

------------------

<h2>遍历方式</h2>

深度优先和广度优先

- 深度优先: 往深了走，遇到子节点再回头
    - 前序遍历
    - 中序遍历
    - 后序遍历

- 广度优先: 一层一层遍历
    - 层序遍历

------------------

<h2>二叉树节点的定义</h2>

```c++
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int value, TreeNode *left=nullptr, TreeNode *right=nullptr) : val(value) {}
};
```

------------------

<h2>递归怎么写?</h2>

每次写递归都是碰运气写对，递归到底怎么写？

递归看似简单好理解，但是经常一写就错。

编写递归代码时，掌握这三部分，可以保证大家写出正确的递归算法。

1. **确定递归函数的参数和返回值**: 确定哪些参数是递归过程中需要处理的，需要处理的加在递归函数的参数上，并且还要确认递归函数的返回值以确认返回值的类型。
2. **递归的终止条件**: 避免忘记写递归函数的终止条件或者写错导致内存栈溢出。
3. **单次递归需要完成的工作**：确定单次递归需要做的事件，多层递归就把整件事情解决了。

<a href="https://leetcode-cn.com/problems/binary-tree-preorder-traversal/" target="_blank">144. 二叉树的前序遍历</a>

<a href="https://leetcode-cn.com/problems/binary-tree-inorder-traversal/" target="_blank">94. 二叉树的中序遍历</a>

<a href="https://leetcode-cn.com/problems/binary-tree-postorder-traversal/" target="_blank">145. 二叉树的后序遍历</a>

这里以二叉树的前中后序遍历来尝试一下。

二叉树的前序遍历, 先遍历根节点，再遍历左子树节点，再遍历右子树节点。

1. 确定递归函数的参数和返回值: 递归过程需要对一个vector 进行追加操作，追加节点的值，也就是前序遍历的结果，vector需要作为递归函数的参数，遍历的结果直接放进了vector，不需要返回值，所以递归函数返回值为void。

    ```c++
        void Traversal(TreeNode *node, vector<int> &ans) {
        }
    ```

2. 递归函数的终止条件: 当遍历节点为空时，递归结束了。

    ```c++
        void Traversal(TreeNode *node, vector<int> &ans) {
            if (node == nullptr) {
                return;
            }
        }
    ```
3. 单层递归需要做的事: 前序遍历，中左右，所以单层递归时，先加入根节点的值，再递归左子节点，再递归右子节点。

    ```c++
        void Traversal(TreeNode *node, vector<int> &ans) {
            if (node == nullptr) {
                return;
            }
            ans.push_back(root->val);  // 先根
            Traversal(node->left);  // 左
            Traversal(node->right);  // 右
        }
    ```

中序遍历，后序遍历也是同样的道理，可以去试试。

------------------

<a href="144.cpp">144. 二叉树的前序遍历</a>

<a href="145.cpp">145. 二叉树的后序遍历</a>

<a href="94.cpp">94. 二叉树的中序遍历</a>

------------------

<h2>二叉树的层序遍历</h2>

<a href="102.cpp">102. 二叉树的层序遍历</a>
