# `std::forward_list`

## Explanation

Singly-linked list. Minimal memory overhead compared to `std::list`.

See [`std::forward_list`](https://en.cppreference.com/w/cpp/container/forward_list.html).

Memory: each node contains element + one pointer (next).

Time complexity:

| Operation                        | Complexity                 |
| -------------------------------- | -------------------------- |
| `front()`                        | O(1)                       |
| `push_front()`, `pop_front()`    | O(1)                       |
| `insert_after()`/`erase_after()` | O(1) (with iterator)       |

"With iterator" means we already have an iterator to the position where we want to insert/erase.

## Use case

- Rarely used. Only if memory is extremely tight and we only traverse forward.
