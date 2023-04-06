/*Another, perhaps more useful feature, is when you always have multiple
 * variables of the same type, and you want to be able to use both names
 * (for readability) and indexes (for ease of iteration), 
 * in that case you can do something like this:*/

union Coins {
    struct {
        int quarter;
        int dime;
        int nickel;
        int penny;
    }; // anonymous struct acts the same way as an anonymous union, members are on the outer container
    int coins[4];
};
