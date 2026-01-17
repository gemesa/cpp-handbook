#include <cstdint>
#include <mutex>
#include <print>

std::mutex g_cache_mutex;

class CacheLock {
public:
  CacheLock(std::mutex &m) : mutex_(m) {
    mutex_.lock();
    std::println("Cache locked.");
  }

  ~CacheLock() {
    mutex_.unlock();
    std::println("Cache unlocked.");
  }

private:
  std::mutex &mutex_;
};

void disassemble(uint64_t addr) {
  CacheLock lock(g_cache_mutex);
  std::println("Disassembling {:#x}...", addr);
}

int main() {
  disassemble(0x10001000);
  disassemble(0x10002000);
  return 0;
}