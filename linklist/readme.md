
**链表**

链表是一种通过指针串联在一起的线性结构，每一个节点由两部分组成，

一个数据域，一个指针域（存放下一个节点的指针），最后一个节点的指针域指向null。


**单链表**

上述所描述的就是单链表。


**双链表**

单链表中的节点只能指向节点的下一个节点。

双链表的每一个节点有两个指针域，一个指向下一个节点，一个指向上一个节点。

双链表既可以向前查询也可以向后查询。


**循环链表**

链表首尾相连。


**链表的存储方式**

数组在内存中是连续分布的，但是链表在内存中不一定是连续的。

链表通过指针域的指针链接在内存中的各个节点。

链表是否连续分布取决于操作系统的内存管理。

-------------------------

***移除链表元素***

<a href="203.cpp">203. 移除链表元素</a>

可以使用一个虚拟的头节点来辅助编码，这样就不用特殊判断是否是头节点了。

-------------------------

***设计链表***

<a href="707.cpp">707. 设计链表</a>

----------------------- 
***翻转链表***

<a href="206.cpp">206. 反转链表</a>

----------------------
***删除链表的倒数第n个数***

<a href="19.cpp">19. 删除链表的倒数第 N 个结点</a>

----------------------
***链表相交***

<a href="0207.cpp">面试题 02.07. 链表相交</a>

---------------------
***链表成环***

<a href="142.cpp">142. 环形链表 II</a>
