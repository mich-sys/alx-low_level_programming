# C - Structures, typedef

In this project, I learned about using structures and `typedef` in C.

File dog.h is a header file containing a new type "struct dog".

File 1-init_dog.c a function that initialize a variable of type struct dog.

File 2-print_dog.c is a function that prints a struct dog.

File 4-new_dog.c is a function that creates a new dog.

File 5-free_dog.c is a function that frees dogs.

* **1. A dog is the only thing on earth that loves you more than you love yourself**
  * [1-init_dog.c](./1-init_dog.c): C function that initializes a variable of type `struct dog`.

* **2. A dog will teach you unconditional love. If you can have that in your life, things won't be too bad**
  * [2-print_dog.c](./2-print_dog.c): C function that prints a `struct dog`.
    * If an element of `d` is `NULL`, the function prints `(nil)` instead of the element.
    * If `d` is `NULL`, the function prints nothing.

* **3. Outside of a dog, a book is a man's best friend. Inside of a dog it's too dark to read**
  * [dog.h](./dog.h): Header file that defines a new type `dog_t` as a new name for the
  type `struct dog`.

* **4. A door is what a dog is perpetually on the wrong side of**
  * [4-new_dog.c](./4-new_dog.c): C function that creates a dog.
    * Returns `NULL` if the function fails.

* **5. How many legs does a dog have if you call his tail a leg? Four. Saying that a tail is a leg doesn't make it a leg**
  * [5-free_dog.c](./5-free_dog.c): C function that frees dogs.
