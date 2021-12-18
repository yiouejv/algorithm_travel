
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

