#include <sys/syscall.h>
#include <unistd.h>

const char txt[] = "Hello World!\n";

int main() {
  syscall(SYS_write, STDOUT_FILENO, txt, sizeof(txt) - 1);
  return 0;
}
