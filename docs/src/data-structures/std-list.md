# `std::list`

## Explanation

Doubly-linked list. Each element in its own heap allocation.

See [`std::list`](https://en.cppreference.com/w/cpp/container/list.html).

Memory: each node contains element + two pointers (prev/next). High memory overhead.

Time complexity:

| Operation                     | Complexity                 |
| ----------------------------- | -------------------------- |
| `front()`, `back()`           | O(1)                       |
| `size()`,`empty()`            | O(1)                       |
| `push_back()`, `pop_back()`   | O(1)                       |
| `insert()`/`erase()`          | O(1) (with iterator)       |
| `splice()`                    | O(1)                       |
| `sort()`                      | O(n log n)                 |

"With iterator" means we already have an iterator to the position where we want to insert/erase.

If `sort()` uses [merge sort](../algorithms/time-complexity-overview.md#merge-sort) (like [libstdc++ does](https://github.com/gcc-mirror/gcc/blob/e9e3383f86425f10d3a9bd4daac6e62e8f8176f0/libstdc%2B%2B-v3/include/bits/list.tcc#L474)), then the time complexity is O(n log n).

## Use case

- Frequent insertion/removal in the middle (with iterator).
- Need stable iterator after modification.
- `std::list` is rather rarely used. `std::vector` is usually faster due to cache locality.

## Code

```cpp
{{#include ../../../src/data-structures/std-list.cpp}}
```

[View on GitHub](https://github.com/gemesa/cpp-handbook/blob/main/src/data-structures/std-list.cpp).

## Output

```
$ ./src/data-structures/build/std-list
0x1000
0x1500
0x2000
0x3000
```
