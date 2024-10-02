#include <cstdint>
#include "army.h"
#include <conio.h>

int main() {
  Army *army1 = new Army(100, 50, 100, 100, 100);
  Army *army2 = new Army(100, 100, 100, 100, 100);
  army1->~Army();
  army2->~Army();
  return 0;
}