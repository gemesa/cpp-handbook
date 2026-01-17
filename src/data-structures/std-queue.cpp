#include <print>
#include <queue>

int main() {
  std::queue<uint64_t> workQueue;

  workQueue.push(0x1000);
  workQueue.push(0x2000);
  workQueue.push(0x3000);

  while (!workQueue.empty()) {
    std::println("Process: {:#x}", workQueue.front());
    workQueue.pop();
  }

  return 0;
}