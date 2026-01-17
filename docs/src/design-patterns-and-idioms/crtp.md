# CRTP (Curiously Recurring Template Pattern)

## Use case

Implement common functionality for memory region types without virtual function overhead.

## Explanation

CRTP provides static polymorphism: a base class template takes the derived class as a parameter, enabling compile-time method dispatch (via `static_cast`). Zero runtime overhead compared to virtual functions (at the cost of increased binary size).

## Code

```cpp
{{#include ../../../src/design-patterns-and-idioms/crtp.cpp}}
```

[View on GitHub](https://github.com/gemesa/cpp-handbook/blob/main/src/design-patterns-and-idioms/crtp.cpp).

## Output

```
$ ./src/design-patterns-and-idioms/build/crtp
.text: 0x10001000
.data: 0x10002000
```
