/*Also, if you don't give the union a name then it's members are accessed
 * directly from the struct:*/

struct operator {
    int type;
    union {
        int intNum;
        float floatNum;
        double doubleNum;
    }; // no name!
};

operator op;
op.type = 0; // int
// intNum is part of the union,
// but since it's not named you access it directly off the struct itself
op.intNum = 352;
