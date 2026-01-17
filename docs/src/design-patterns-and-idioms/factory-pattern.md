# Factory pattern

## Use case

Create architecture-specific disassembler without hardcoding which class to instantiate.

## Explanation

Factory encapsulates object creation logic. Client code works with abstract interface while concrete types are selected at runtime. Modern C++ uses `std::unique_ptr` for ownership.

## Code

```cpp
{{#include ../../../src/design-patterns-and-idioms/factory-pattern.cpp}}
```

[View on GitHub](https://github.com/gemesa/cpp-handbook/blob/main/src/design-patterns-and-idioms/factory-pattern.cpp).

## Output

```
$ ./src/design-patterns-and-idioms/build/factory-pattern
x86-64
arm64
Not supported: mips
```
