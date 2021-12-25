extern int x;
// As we've learnt in the storage class section, the extern keyword is used to give us access to a variable that has been declared in a different file

// Because we declared the variable b as static in main.cpp, if we tried to add "extern int b" here, we would get an error when compiling

int addToX(int i) {
  return x + i;
}