/*Like this the size of the struct is just the size of the int type,
 *+ the size of the largest type in the union (the double). 
 *Not a huge gain, only 8 or 16 bytes, but the concept can be applied to similar structs.*/

operator op;
op.type = 0; // int, probably better as an enum or macro constant
op.types.intNum = 352;
