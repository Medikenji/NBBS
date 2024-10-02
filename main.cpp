#include <cstdint>
#include "army.h"
#include <conio.h>

int main() {
  Army *army1 = new Army(100, 50, 100, 100, 1000000);
  Army *army2 = new Army(100, 100, 100, 100, 10000000);
  while (true) {
    std::cout << "Press any key to exit." << std::endl;
  }
  army1->~Army();
  army2->~Army();

  
  return 0;
}