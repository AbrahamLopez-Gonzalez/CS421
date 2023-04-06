/*Combining this with a structure allows you to create a "tagged" union
 * which can be used to store multiple different types, one at a time.
 *
 * For example, you might have a "number" struct, but you don't want to
 * use something like this:*/

struct operator {
    int intNum;
    float floatNum;
    int type;
    double doubleNum;
};
