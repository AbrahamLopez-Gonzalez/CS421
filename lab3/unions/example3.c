/*Because your program has a lot of them and it takes a bit too much
 * memory for all of the variables, so you could use this:*/

struct operator {
    int type;
    union {
      int intNum;
      float floatNum;
      double doubleNum;
    } types;
};
