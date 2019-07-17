# Sorting_Algorithms_in_detail 😃 😄 

- [ ] **Formal Definition : _Arranging the elements in a list or collection in increasing or decreasing order of some property._**

- The list should be homogeneous that is elements should be of same type.

- Numbers are sorted according to value.

- String often sorted lexicographic ally.

- complex data types like structures are sorted according to a specific property.
----------------------------------------------------------------------------------------------------------------------------------------

- [ ] **Sorting Algorithms Classification Parameters:**

- Time Complexity. O(n^2) or O(n) or O( n log n ) etc.

- Space Complexity.
 In place : use constant amount of extra memory to rearrange the elements. like Quick sort.
Not In Place : Extra memory use grows as input size. like Marge sort.

- Stability : A stable sorting algorithm in case of equality of key or property preserves the relative order of elements. Means which if property is equal , which comes first stay first.

- Internal or External sort : if all records are in main memory or RAM its internal sort. if records are in external storage like disk its external sort.

- Recursive or non Recursive : marge & quick are recursive. Insertion & selection are non recursive.
----------------------------------------------------------------------------------------------------------------------------------------

- [ ] **Properties of MARGE SORT Algorithm**

- Divide & conquer.

- Recursive.

- Stable.

- Not In Place. Extra Space complexity -> O(n).

- Time complexity: O(n log n).

- [ ] **Properties of Quick SORT Algorithm**
- Divide & conquer.

- Recursive.

- Not Stable. Because of line 17 in quick_sort.cpp code.

- In Place. Constant Extra Space Complexity:  O(log n) in average, O(n) in worst case. Most of the time the algorithm works in average case, so memory is not a matter of concern.

- Time complexity: O(n log n) in average case. O(n^2) is worst case but this can be avoided by using Randomized Quick sort. In Practical scenarios Quick sort is pretty fast.

- Sort functions in language libraries most of them are implantation of quick sort. 

- [ ] **Resource :**
[https://www.youtube.com/watch?v=pkkFqlG0Hds&list=PL2_aWCzGMAwKedT2KfDMB9YA5DgASZb3U&index=2&t=0s](url)

