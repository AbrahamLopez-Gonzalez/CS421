/*Structures can also hold pointers
 * - which allows them to hold strings, or pointers to other structures as well -
 *   which is their real power.
 *   For example, we can define a vehicle structure in the following manner:*/

typedef struct {
    char * brand;
    int model;
} vehicle;
