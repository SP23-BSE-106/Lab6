#include <stdlib.h>
#include <math.h>

#include "colorUtils.h"

int max(int a, int b, int c) {
  return (a > b) ? (a > c ? a : c) : (b > c ? b: c);
}

int min(int a, int b, int c) {
  return (a < b) ? (a < c ? a : c) : (b < c ? b : c);
}

Error toGrayScale(int *r, int *g, int *b, Mode mode) {
  //TODO: implement
  if(r == NULL || g == NULL || b == NULL ){
    return ERROR_PRESENT;
  }
}

int toSepia(int *r, int *g, int *b) {
  //TODO: implement
}
