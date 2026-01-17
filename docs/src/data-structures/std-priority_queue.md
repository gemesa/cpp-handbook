# `std::priority_queue`

## Explanation

Largest element always on top. Uses `std::vector` internally.

See [`std::priority_queue`](https://en.cppreference.com/w/cpp/container/priority_queue.html).

Time complexity:

| Operation                         | Complexity |
| --------------------------------- | ---------- |
| `push()`                          | O(log n)   |
| `pop()`                           | O(log n)   |
| `empty()`, `size()`               | O(1)       |

`std::priority_queue` is implemented as a [binary heap](https://en.wikipedia.org/wiki/Binary_heap).

## Code

```cpp
{{#include ../../../src/data-structures/std-priority_queue.cpp}}
```

[View on GitHub](https://github.com/gemesa/cpp-handbook/blob/main/src/data-structures/std-priority_queue.cpp).

## Output

```
$ ./src/data-structures/build/std-priority_queue
Process: 0x3000
Process: 0x2000
Process: 0x1000
```
