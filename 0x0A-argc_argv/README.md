#C-argc,argv

## Working with command line arguments

To compile functions with unused variables or parameters in C, you can use either the __attribute__((unused)) attribute or the (void) keyword in the function parameter list. Here's how you can use each method:

### Method 1: __attribute__((unused))
You can use the __attribute__((unused)) attribute to indicate to the compiler that a particular variable or parameter is intentionally left unused. This attribute informs the compiler that it should not generate warnings about the unused variable.

### Method 2: (void)
Another common method to indicate that a parameter is intentionally unused is by casting it to (void) in the function parameter list.
