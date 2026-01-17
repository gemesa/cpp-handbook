#include <print>
#include <queue>

int main() {
  std::priority_queue<int, std::vector<int>, std::less<int>> maxHeap;

  maxHeap.push(0x2000);
  maxHeap.push(0x3000);
  maxHeap.push(0x1000);

  while (!maxHeap.empty()) {
    std::println("Process: {:#x}", maxHeap.top());
    maxHeap.pop();
  }

  return 0;
}