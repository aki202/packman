// animate1 --- create animation using img lib.
#include <stdio.h>
#include <math.h>
#include "img.h"

static struct color c1 = { 253, 232, 1 };
static struct color c2 = { 255, 255, 255 };
void draw_packman(int i);
void draw_mouth(int i);

int main(void) {
  for(int i = 0; i < 50; ++i) draw_packman(i);
}

// 鎌田
void draw_packman(int i) {
  img_clear();
  img_fillcircle(c1, 300-10*i, 100, 40);
  draw_mouth(i);
  img_write();
}

// 桑原
void draw_mouth(int i) {
  int diff = 36 * sin(i);
  int x1 = 250-10*i;
  int y1 = 136 - diff;
  int x2 = 250-10*i;
  int y2 = 64 + diff;
  int x3 = 300-10*i;
  int y3 = 100;

  printf("x1: %d / x2: %d / x3: %d/ diff: %d\n", x1, x2, x3, diff);

  img_filltriangle(c2, x1, y1, x2, y2, x3, y3);
}
