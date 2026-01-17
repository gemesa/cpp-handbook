#include <print>
#include <stack>

int main() {
  std::stack<uint64_t> callStack;

  callStack.push(0x1000);
  callStack.push(0x2000);
  callStack.push(0x3000);

  while (!callStack.empty()) {
    std::println("Return to: {:#x}", callStack.top());
    callStack.pop();
  }

  return 0;
}