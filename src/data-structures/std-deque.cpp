#include <deque>
#include <print>

int main() {
  std::deque<uint64_t> addresses;

  addresses.push_back(0x10001000);
  addresses.push_front(0x10002000);

  std::println("Front: {:#x}", addresses.front());
  std::println("Back: {:#x}", addresses.back());

  return 0;
}