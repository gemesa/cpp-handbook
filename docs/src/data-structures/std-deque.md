# `std::deque`

## Explanation

Double-ended queue. Fast insertion/removal at both front and back.

See [`std::deque`](https://en.cppreference.com/w/cpp/container/deque.html).

Memory: array of pointers to fixed-size chunks (all on heap).

Time complexity:

| Operation                     | Complexity                 |
| ----------------------------- | -------------------------- |
| `[]`, `at()`                  | O(1)                       |
| `front()`, `back()`           | O(1)                       |
| `size()`,`empty()`            | O(1)                       |
| `push_back()`, `pop_back()`   | O(1)                       |
| `push_front()`, `pop_front()` | O(1)                       |
| `insert()`/`erase()`          | O(n)                       |

## Use case

- Need fast `push_front`/`pop_front`.
- Need stable references (`push`/`insert` do not invalidate).
- Do not need contiguous memory.

## Code

```cpp
{{#include ../../../src/data-structures/std-deque.cpp}}
```

[View on GitHub](https://github.com/gemesa/cpp-handbook/blob/main/src/data-structures/std-deque.cpp).

## Output

```
$ ./src/data-structures/build/std-deque
Front: 0x10002000
Back: 0x10001000
```
