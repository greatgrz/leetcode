
//way to avoid overflow when int is INT_MIN and you want to get the absolute value of it !
//IMPORTANT!
unsigned long tn = long(n);
tn = labs(tn);
