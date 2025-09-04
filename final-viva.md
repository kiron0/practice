# 📘 C Programming Viva Q\&A Cheat Sheet (with Examples)

---

## **1. Basics**

**Q1. What is C language?**

* C is a general-purpose, structured, procedural programming language.
* It is widely used for developing system software, operating systems, and embedded systems.

```c
#include <stdio.h>
int main() {
   printf("Hello, C!");
   return 0;
}
```

---

**Q2. Who developed C and when?**

* C was developed by **Dennis Ritchie in 1972** at **Bell Labs**.
* It evolved from B language and is the foundation of modern languages like C++, Java, Python.

---

**Q3. What are the basic data types in C?**

* `int` (integers), `float` (decimals), `double` (double precision decimals), `char` (characters), `void` (no value).

```c
int a = 10;
float b = 3.14;
char c = 'A';
```

---

**Q4. Difference between `==` and `=`?**

* `=` is the **assignment operator** (stores value in variable).
* `==` is the **comparison operator** (checks equality).

```c
int x = 5;     // assignment
if (x == 5)    // comparison
   printf("Equal");
```

---

## **2. Variables & Constants**

**Q5. What are variables?**

* Variables are named memory locations that store values which can change during execution.

```c
int age = 20;
printf("%d", age);
```

---

**Q6. How to declare and initialize a variable?**

* Declaration tells compiler about the variable, initialization assigns a value.

```c
int x = 10;    // declare and initialize
float y = 3.5;
```

---

**Q7. Difference between `const` and `#define`?**

* `const` creates a typed constant stored in memory, while `#define` replaces value before compilation.

```c
const int a = 10;
#define PI 3.14
```

---

## **3. Input/Output**

**Q8. Functions for input and output?**

* Input is taken using `scanf()`, output is displayed using `printf()`.

```c
int num;
scanf("%d", &num);
printf("Number = %d", num);
```

---

## **4. Operators**

**Q9. Types of operators in C?**

* Arithmetic, Relational, Logical, Assignment, Bitwise, Increment/Decrement, Conditional (`?:`).

```c
int a=5, b=3;
printf("%d", a+b); // Arithmetic
printf("%d", a>b); // Relational
```

---

**Q10. Example of ternary operator?**

* The ternary operator `? :` is a shorthand for `if-else`.

```c
int a=5, b=10;
int max = (a > b) ? a : b;
printf("%d", max);
```

---

## **5. Control Statements**

**Q11. Syntax of `if-else`?**

* Used for decision-making when a condition is true or false.

```c
if (x > 0)
   printf("Positive");
else
   printf("Negative or Zero");
```

---

**Q12. `switch` syntax?**

* Used for multiple choices instead of long `if-else` chains.

```c
switch(n) {
  case 1: printf("One"); break;
  case 2: printf("Two"); break;
  default: printf("Other");
}
```

---

## **6. Loops**

**Q13. Difference between `for`, `while`, `do-while`?**

* `for` is used when iterations are known, `while` checks before execution, `do-while` executes at least once.

```c
for(int i=0;i<3;i++) printf("%d ",i);   // 0 1 2
```

```c
int i=0; while(i<3){ printf("%d ",i); i++; } // 0 1 2
```

```c
int j=0; do { printf("%d ",j); j++; } while(j<3); // 0 1 2
```

---

## **7. Functions**

**Q14. Function declaration and definition?**

* Declaration gives function prototype; definition provides actual code.

```c
int add(int a, int b); // declaration
int add(int a, int b){ return a+b; }
```

---

**Q15. What is recursion?**

* A function calling itself to solve a problem (like factorial).

```c
int fact(int n){
   if(n==0) return 1;
   return n * fact(n-1);
}
```

---

## **8. Arrays & Strings**

**Q16. Array declaration?**

* Array stores multiple elements of the same type.

```c
int arr[3] = {10, 20, 30};
```

---

**Q17. String declaration?**

* String is an array of characters ending with `\0`.

```c
char str[] = "Hello";
```

---

**Q18. Common string functions?**

* `strlen()` → length, `strcpy()` → copy, `strcat()` → join, `strcmp()` → compare.

```c
char s1[]="Hi", s2[]="All";
printf("%d", strlen(s1));
```

---

## **9. Pointers**

**Q19. What is a pointer?**

* A pointer stores the address of another variable.

```c
int x=5, *p=&x;
printf("%d", *p); // prints 5
```

---

**Q20. What is NULL pointer?**

* A pointer initialized with `NULL` points to no memory.

```c
int *p = NULL;
```

---

**Q21. What is pointer arithmetic?**

* Incrementing/decrementing a pointer moves it by size of its data type.

```c
int arr[3]={1,2,3}, *p=arr;
printf("%d", *(p+1)); // prints 2
```

---

## **10. Structures & Unions**

**Q22. Structure syntax?**

* Structure groups variables of different data types.

```c
struct Student { int id; char name[20]; };
```

---

**Q23. Difference between structure and union?**

* Structure allocates separate memory for members, union shares same memory for all.

```c
union Data { int i; float f; };
```

---

## **11. File Handling**

**Q24. Functions for file I/O?**

* File handling uses functions like `fopen()`, `fprintf()`, `fscanf()`, `fclose()`.

```c
FILE *fp = fopen("test.txt","w");
fprintf(fp,"Hello File");
fclose(fp);
```

---

## **12. Memory Management**

**Q25. Functions for dynamic memory allocation?**

* `malloc()` allocates, `calloc()` allocates+initializes, `realloc()` resizes, `free()` releases memory.

```c
int *p = (int*) malloc(5*sizeof(int));
free(p);
```

---

## **13. Miscellaneous**

**Q26. Difference between `break` and `continue`?**

* `break` exits loop, `continue` skips current iteration.

```c
for(int i=0;i<5;i++){ if(i==3) break; }
```

---

**Q27. What is `typedef`?**

* Used to give a new name to a data type.

```c
typedef unsigned int uint;
uint x=5;
```

---

**Q28. What is `enum`?**

* Defines user-named constants for integers.

```c
enum week {Mon, Tue, Wed};
```

---

**Q29. What is `static` keyword used for?**

* Keeps value of variable across function calls or restricts scope to file.

```c
static int count=0;
```

---

**Q30. What is `extern` keyword?**

* Declares a variable defined in another file.

```c
extern int x;
```

---

**Q31. What are storage classes in C?**

* They define scope, lifetime, and visibility: `auto`, `register`, `static`, `extern`.

---

**Q32. Difference between compile time and run time errors?**

* Compile-time → syntax issues, runtime → occur during execution (divide by zero).

---

**Q33. Difference between call by value and call by reference?**

* Call by value → copy passed, original unchanged.
* Call by reference → address passed, original modified.

---

**Q34. What is preprocessor in C?**

* It handles directives like `#include`, `#define` before compilation.

```c
#include <stdio.h>
#define PI 3.14
```

---

**Q35. What are header files?**

* Prewritten library files with `.h` extension (e.g., `stdio.h`, `string.h`).

---

**Q36. Difference between `gets()` and `fgets()`?**

* `gets()` reads entire line but unsafe; `fgets()` safer with length limit.

```c
fgets(str, 20, stdin);
```

---

**Q37. What is dangling pointer?**

* Pointer pointing to memory that has been freed.

```c
int *p=(int*)malloc(sizeof(int));
free(p); // now p is dangling
```

---

**Q38. What is segmentation fault?**

* Error caused by invalid memory access (like dereferencing NULL).

---

**Q39. Difference between `++i` and `i++`?**

* `++i` increments before using value, `i++` increments after using value.

```c
int i=5;
printf("%d", ++i); // 6
printf("%d", i++); // prints 6 then increments to 7
```

---

**Q40. Difference between `scanf("%s", str)` and `gets(str)`?**

* `scanf("%s")` stops at space, `gets()` reads entire line (unsafe).
