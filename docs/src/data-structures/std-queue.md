# `std::queue`

## Explanation

FIFO (First In, First Out). Uses `std::deque` internally.

See [`std::queue`](https://en.cppreference.com/w/cpp/container/queue.html).

Time complexity:

| Operation                         | Complexity |
| --------------------------------- | ---------- |
| `push()`                          | O(1)       |
| `pop()`                           | O(1)       |
| `empty()`, `size()`               | O(1)       |

## Code

```cpp
{{#include ../../../src/data-structures/std-queue.cpp}}
```

[View on GitHub](https://github.com/gemesa/cpp-handbook/blob/main/src/data-structures/std-queue.cpp).

## Output

```
$ ./src/data-structures/build/std-queue
Process: 0x1000
Process: 0x2000
Process: 0x3000
```
