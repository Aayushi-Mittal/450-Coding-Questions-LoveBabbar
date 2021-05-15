# Arrays <img id="array" src="https://img.shields.io/badge/Arrays-36-brightgreen?style=for-the-badge">

An array is a collection of items of the same data type stored at contiguous memory locations. The size of the array is fixed and the memory for an array needs to be allocated before use, the size of an array cannot be increased or decreased dynamically.

`dataType arrayName[arraySize];`

`dataType arrayName[] = {1, 2, 3, 4, ...};`

Elements in an array can be accessed using indexes. Suppose an array named arr stores N elements. Indexes in an array are in the range of 0 to N-1.

## Related Topics:

- Insertion and Deletion in arrays. `O(n)`
- Searching an Element.
  - Linear Search `O(n)`
  - Binary Search `O(logn)`
- Reversing an Array. `O(n)`
- Rotating an Array. `O(n)`
- Sliding Window Technique.
- Sorting an array.
  - Bubble `O(n^2)`
  - Selection `O(n^2)`
  - Insertion `O(n^2)`
  - Quick `O(nlogn)`, `O(n^2)`
  - Merge `O(nlogn)`
- Dynamic Arrays - Vectors (STL)
  - pop()
  - push()

## Questions

<!--[![Reverse the array](https://img.shields.io/badge/Solution-green)](https://www.geeksforgeeks.org/write-a-program-to-reverse-an-array-or-string/)-->

| S. No | Problem                                                                                                                                                                                                             |           Solutions            |
| :---: | ------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- | :----------------------------: |
|   1   | [Reverse the array](https://www.geeksforgeeks.org/write-a-program-to-reverse-an-array-or-string/")                                                                                                                  | [O(n)](./01-Reverse-Array.cpp) |
|   2   | [Find the maximum and minimum element in an array](https://www.geeksforgeeks.org/maximum-and-minimum-in-an-array/)                                                                                                  |              <->               |
|   3   | [Find the "Kth" max and min element of an array](https://practice.geeksforgeeks.org/problems/kth-smallest-element5635/1)                                                                                            |              <->               |
|   4   | [Given an array which consists of only 0, 1 and 2. Sort the array without using any sorting algo](https://practice.geeksforgeeks.org/problems/sort-an-array-of-0s-1s-and-2s4231/1)                                  |              <->               |
|   5   | [Move all the negative elements to one side of the array](https://www.geeksforgeeks.org/move-negative-numbers-beginning-positive-end-constant-extra-space/)                                                         |              <->               |
|   6   | [Find the Union and Intersection of the two sorted arrays.](https://practice.geeksforgeeks.org/problems/union-of-two-arrays3538/1)                                                                                  |              <->               |
|   7   | [Write a program to cyclically rotate an array by one.](https://practice.geeksforgeeks.org/problems/cyclically-rotate-an-array-by-one2614/1)                                                                        |              <->               |
|   8   | [find Largest sum contiguous Subarray](https://practice.geeksforgeeks.org/problems/kadanes-algorithm-1587115620/1) <img src="https://img.shields.io/badge/V. IMP-orange">                                           |              <->               |
|   9   | [Minimise the maximum difference between heights](https://practice.geeksforgeeks.org/problems/minimize-the-heights3351/1) <img src="https://img.shields.io/badge/V. IMP-orange">                                    |              <->               |
|  10   | [Minimum no. of Jumps to reach end of an array](https://practice.geeksforgeeks.org/problems/minimum-number-of-jumps-1587115620/1)                                                                                   |              <->               |
|  11   | [find duplicate in an array of N+1 Integers](https://leetcode.com/problems/find-the-duplicate-number/)                                                                                                              |              <->               |
|  12   | [Merge 2 sorted arrays without using Extra space.](https://practice.geeksforgeeks.org/problems/merge-two-sorted-arrays5135/1)                                                                                       |              <->               |
|  13   | [Kadane's Algo](https://practice.geeksforgeeks.org/problems/kadanes-algorithm/0) <img src="https://img.shields.io/badge/V.V.V.V.V. IMP-red">                                                                        |              <->               |
|  14   | [Merge Intervals](https://leetcode.com/problems/merge-intervals/)                                                                                                                                                   |              <->               |
|  15   | [Next Permutation](https://leetcode.com/problems/next-permutation/)                                                                                                                                                 |              <->               |
|  16   | [Count Inversion](https://practice.geeksforgeeks.org/problems/inversion-of-array/0)                                                                                                                                 |              <->               |
|  17   | [Best time to buy and Sell stock](https://leetcode.com/problems/best-time-to-buy-and-sell-stock/)                                                                                                                   |              <->               |
|  18   | [find all pairs on integer array whose sum is equal to given number](https://practice.geeksforgeeks.org/problems/count-pairs-with-given-sum5022/1)                                                                  |              <->               |
|  19   | [find common elements In 3 sorted arrays](https://practice.geeksforgeeks.org/problems/common-elements1132/1)                                                                                                        |              <->               |
|  20   | [Rearrange the array in alternating positive and negative items with O(1) extra space](https://www.geeksforgeeks.org/rearrange-array-alternating-positive-negative-items-o1-extra-space/)                           |              <->               |
|  21   | [Find if there is any subarray with sum equal to 0](https://practice.geeksforgeeks.org/problems/subarray-with-0-sum/0)                                                                                              |              <->               |
|  22   | [Find factorial of a large number](https://practice.geeksforgeeks.org/problems/factorials-of-large-numbers/0)                                                                                                       |              <->               |
|  23   | [find maximum product subarray](https://practice.geeksforgeeks.org/problems/maximum-product-subarray3604/1)                                                                                                         |              <->               |
|  24   | [Find longest consecutive subsequence](https://practice.geeksforgeeks.org/problems/longest-consecutive-subsequence/0)                                                                                               |              <->               |
|  25   | [Given an array of size n and a number k, find all elements that appear more than " n/k " times.](https://www.geeksforgeeks.org/given-an-array-of-of-size-n-finds-all-the-elements-that-appear-more-than-nk-times/) |              <->               |
|  26   | [Maximum profit by buying and selling a share atmost twice](https://www.geeksforgeeks.org/maximum-profit-by-buying-and-selling-a-share-at-most-twice/)                                                              |              <->               |
|  27   | [Find whether an array is a subset of another array](https://practice.geeksforgeeks.org/problems/array-subset-of-another-array/0)                                                                                   |              <->               |
|  28   | [Find the triplet that sum to a given value](https://practice.geeksforgeeks.org/problems/triplet-sum-in-array/0)                                                                                                    |              <->               |
|  29   | [Trapping Rain water problem](https://practice.geeksforgeeks.org/problems/trapping-rain-water/0)                                                                                                                    |              <->               |
|  30   | [Chocolate Distribution problem](https://practice.geeksforgeeks.org/problems/chocolate-distribution-problem/0)                                                                                                      |              <->               |
|  31   | [Smallest Subarray with sum greater than a given value](https://practice.geeksforgeeks.org/problems/smallest-subarray-with-sum-greater-than-x/0)                                                                    |              <->               |
|  32   | [Three way partitioning of an array around a given value](https://practice.geeksforgeeks.org/problems/three-way-partitioning/1)                                                                                     |              <->               |
|  33   | [Minimum swaps required bring elements less equal K together](https://practice.geeksforgeeks.org/problems/minimum-swaps-required-to-bring-all-elements-less-than-or-equal-to-k-together/0)                          |              <->               |
|  34   | [Minimum no. of operations required to make an array palindrome](https://practice.geeksforgeeks.org/problems/palindromic-array/0)                                                                                   |              <->               |
|  35   | [Median of 2 sorted arrays of equal size](https://practice.geeksforgeeks.org/problems/find-the-median0527/1)                                                                                                        |              <->               |
|  36   | [Median of 2 sorted arrays of different size](https://www.geeksforgeeks.org/median-of-two-sorted-arrays-of-different-sizes/)                                                                                        |              <->               |
