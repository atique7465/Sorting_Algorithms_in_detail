# Sorting_Algorithms_in_detail 

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
- Time Complexity Proof
```
01. calculate mid -> c
02. copy teo array -> n/2 + n/2 = n.c
03. t time call merge function with n/2 -> 2.T(n/2)

constant timr to merge each element  = c;

T(n) = c + c.n + 2.T(n/2) ..... (1)

T(n/2) = c + c.n/2 + 2.T(n/4) ....(2)

T(n/4) = c + c.n/4 + 2.T(n/8) ....(3)

.
.
.
T(n/2^k) = c + c.n/2^k + 2.T(n/2^k) ....(4)

Modified (1)
T(n) = n.c + 2.T(n/2)
     = n.c + 2.(c.n/2 + 2.T(n/4)) [Applying equation (2)]
     = 2.n.c + 4.T(n/4)
     = 2.n.c + 4.(c.n/4 + 2.T(n/8)) [Applying equation (3)]
     = 3.n.c + 8.T(n/8)
     .
     .
     = k.n.c + 2^k.T(n/2^k)
in last devidation n/2^k = 1
                   n = 2^k
                   k = log2(n) ...(5)

So, T(n) = log2(n).n.c + 2^log2(n).T(n/2^log2(n)) [Applying equation (5)]
         = n.log(n).c + n.T(n/n)
         = n.log(n) + n
         = n.log(n)
So. merge sort Time Complexity is: O(nlogn)

[Note n = 2^x
      log2(n) = x
      2^log2(n) = 2^x = n]
```

- [ ] **Properties of Quick SORT Algorithm**
- Divide & conquer.

- Recursive.

- Not Stable. Because of line 17 in quick_sort.cpp code.

- In Place. Constant Extra Space Complexity:  O(log n) in average, O(n) in worst case. Most of the time the algorithm works in average case, so memory is not a matter of concern.

- Time complexity: O(n log n) in average case. O(n^2) is worst case but this can be avoided by using Randomized Quick sort. In Practical scenarios Quick sort is pretty fast.

- Most of the Sort functions in language libraries are implantation of quick sort. 

- [ ] **Properties of Selection Sort algorithm**

- Recursive / Non Recursive.

- in place.

- Not Stable
 [https://www.quora.com/Why-is-a-selection-sort-algorithm-not-stable](url)

- it can be stable
[https://www.geeksforgeeks.org/stable-selection-sort/](url)

- Time complexity : O (n^2).  for stable implementation.
- Time complexity : O (n^3).  for unstable implementation.

- [ ] **Properties of INSERTION SORT Algorithm**

- Stable.

- In Place.

- Time complexity: O(^2).

- [ ] **Properties of BUBBLE SORT Algorithm**

- Stable
- In Place as, Space Complexity : O(1) extra space
- Time Complexity : O(n^2), comparisons and swaps
- Adaptive: O(n) when nearly sorted

- [ ] **Resource :**
[https://www.youtube.com/watch?v=pkkFqlG0Hds&list=PL2_aWCzGMAwKedT2KfDMB9YA5DgASZb3U&index=2&t=0s](url)
