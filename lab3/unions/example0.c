/*So if you wanted to be able to read a variable's memory in different ways,
 * for example read an integer one byte at a time,
 * you could have something like this:*/

union intParts {
  int theInt;
  char bytes[sizeof(int)];
};
