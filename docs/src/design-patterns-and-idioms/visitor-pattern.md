# Visitor pattern

## Use case

Process different instruction types in a disassembler without modifying each instruction class.

## Explanation

The visitor pattern separates algorithms from the objects they operate on. Modern C++ uses `std::variant` + `std::visit`.

## Code

```cpp
{{#include ../../../src/design-patterns-and-idioms/visitor-pattern.cpp}}
```

[View on GitHub](https://github.com/gemesa/cpp-handbook/blob/main/src/design-patterns-and-idioms/visitor-pattern.cpp).

## Output

```
$ ./src/design-patterns-and-idioms/build/visitor-pattern
Disassembly:
mov x0, x1
bl 0x10001000 ; _printf
ret
```
