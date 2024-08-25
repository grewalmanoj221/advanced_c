# advanced_c
Sample code for implementing advanced C concept. For learning purpose only.


## Topic 

### Function Pointer
[function_pointer.c](function_pointer.c) helps explain how to use function as pointer.


Can be used to make function more generic.

Can be declared as typedef as well-

typedef < return-type. (*< typedef-name>)(< arguments data type>);

Ex. - ```typedef int (*foo_sample)(int, int);```

Now you can assign your function with typedef-name

< typedef-name> new_func = foo;

Ex. - ```foo_sample f = foo;```


#### Sample code run
```bash
gcc function_pointer.c && ./a.out
```

### Bit Flag
[bit_flag.cpp](bit_flag.cpp) helps explain how to use bit flags.

It helps to make code more readable, help shorten the argument of functions and helps user to understand the code.

It uses specific bit to set the value which can be used to set a specific value. 

#### Sample code run

##### With OpenCV example
```bash
g++ bit_block.cpp -I/usr/include/opencv4 `pkg-config --libs opencv4 2> /dev/null || pkg-config --libs opencv` -D OPEN_CV  && ./a.out
```

##### Without OpenCV example
```bash
gcc bit_block.cpp && ./a.out
```

### Void Pointer
[void_pointer.c](void_pointer.c) helps explain how to void pointers.

It helps to make code more dynamic and helps with support for different data types.

It can also make a programmer life difficult. 


#### Sample code run
```bash
gcc void_pointer.c && ./a.out
```

### Designate Initializer
[array_index_assign.c](array_index_assign.c) helps explain how to use designate initializer while array declaration.

It helps you to assign macros, enum to define the array index point to defined value. Kind of HASH MAP Mimic.

It can help with code reachability.


#### Sample code run
```bash
gcc array_index_assign.c &&./a.out
```

### Union
[union.c](union.c) helps explain how to use union.

Union helps to make the code more dynamic and all member share the same memory.


#### Sample code run
```bash
gcc union.c  && ./a.out 
```


### Bit Field
[bit_field.c](bit_field.c) helps explain how to specify and use bit field.

We can specify the size (in bits) of the Structures and Unions. This makes them more memory efficient. 

This can be used to parse a binary file (images) and packets where bits structure is not in complete order to parse to complete bytes.

Example implemented in [ip.h](/usr/include/linux/ip.h).

#### Sample code run
```bash
gcc bit_field.c  && ./a.out
```


### Variable  Argument
[variable_argument.c](variable_argument.c) helps explain how to use variable argument.

Variable arguments are exactly as the name suggest. Variable arguments are needed to format the array, format the output etc.

#### Sample code run
```bash
gcc variable_argument.c && ./a.out
```
