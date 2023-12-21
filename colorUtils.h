
#ifndef MODE_H
#define MODE_H

typedef enum {
  AVERAGE,
  LIGHTNESS,
  LUMINOSITY
} Mode;

typedef enum {
  NO_ERROR = 0,
  ERROR_PRESENT,
}Error;

#endif /* MODE_H */

/**
 * Returns the maximum value among the three given values
 */
int max(int a, int b, int c);

/**
 * Returns the minimum value among the three given values
 */
int min(int a, int b, int c);

/**
 * TODO: add documentation here
 */
Error toGrayScale(int *r, int *g, int *b, Mode mode);

/**
 * TODO: add documentation here
 */
Error toSepia(int *r, int *g, int *b);
