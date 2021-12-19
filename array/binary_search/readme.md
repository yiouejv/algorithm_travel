
- binary search

二分法，区间的定义一般为两种，左闭右闭即[left, right]，或者左闭右开即[left, right)。

**左闭右闭**

左闭右闭的区间，循环不变量要写成:

while (left <= right)  因为 right 要包含在内, right = nums.size() - 1;

当 nums[middle] > target 时，right = middle - 1, 因为右闭时middle 已经包含过了。

当 nums[middle] < target 时，left = middle + 1

**左闭右开**

循环不变量写成:

while (left < right) right 不包含在内, right = nums.size();

当 nums[middle] > target 时, right = middle

当 nums[middle] < target 时, left = middle + 1;

<a href="704.cpp">704. 二分查找</a>

<a href="35.cpp">35. 搜索插入位置</a>

<a href="34.cpp">34. 在排序数组中查找元素的第一个和最后一个位置</a>

<a href="69.cpp">69. Sqrt(x)</a>

<a href="367.cpp">367. 有效的完全平方数</a>
