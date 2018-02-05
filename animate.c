// animate1 --- create animation using img lib.
#include "img.h"

int main(void) {
  struct color c1 = { 253, 232, 1 };
  struct color c2 = { 255, 255, 255 };
  for(int i = 0; i < 50; ++i) {
    img_clear();
    img_fillcircle(c1, 300 - 10*i, 100, 40);
    img_filltriangle(c2, 300-10*i, 200, 320-10*i, 100, 300-10*i, 120);
    img_write();
  }
}
