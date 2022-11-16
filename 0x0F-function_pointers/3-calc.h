 #ifndef _HEADER_
  2 #define _HEADER_
  3 /**
  4  * struct op - Struct op
  5  *
  6  * @op: The operator
  7  * @f: The function associated
  8  */
  9 typedef struct op
 10 {
 11         char *op;
 12         int (*f)(int a, int b);
 13 } op_t;
 14
 15 int op_add(int a
