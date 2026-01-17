# `std::vector`

## Explanation

Dynamic array. The default container, use this unless we have a specific reason not to.

See [`std::vector`](https://en.cppreference.com/w/cpp/container/vector.html).

Memory: control block on stack, elements in heap (contiguous).

Time complexity:

| Operation                   | Complexity                 |
| --------------------------- | -------------------------- |
| `[]`, `at()`                | O(1)                       |
| `front()`, `back()`         | O(1)                       |
| `size()`,`empty()`          | O(1)                       |
| `push_back()`, `pop_back()` | O(1) amortized             |
| `insert()`/`erase()`        | O(n) (must shift elements) |
| `reserve()`/`resize()`      | O(n)                       |

Amortized means it is not truly constant. When the array is full, it needs to allocate a new, larger block of memory and copy everything over. Some implementations might also shrink the array, therefore `pop_back()` is marked as amortized as well.

## Use case

- Default choice for sequences.
- Size not known at compile time.
- Need fast random access.

## Code

```cpp
{{#include ../../../src/data-structures/std-vector.cpp}}
```

[View on GitHub](https://github.com/gemesa/cpp-handbook/blob/main/src/data-structures/std-vector.cpp).

## Output

```
$ ./src/data-structures/build/std-vector
Size: 3, capacity: 100
```
