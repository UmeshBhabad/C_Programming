# 🧵 Day 13 — String Library Internals & Reverse Logic in C

### 📚 What I Learned Today

---

## I. 🧬 Cloning Methods from `string.h` Library
Reimplemented commonly used library functions to understand their internal working:

### a. `strcpy()`  
Learned how to copy characters from one string to another until `\0` is reached.

### b. `strcat()`  
Learned how to append one string after another by locating the null terminator.

### c. `strrev()`  
Implemented logic to reverse a string manually using:
- Two-pointer approach
- Swapping characters
- Loop iteration

---

## II. 🔁 Reversing a String
Practiced different approaches:
- Using loops
- Using pointers
- Without using extra temporary variables

Understood how reversing logic depends on:
- Indexing
- String length
- Proper termination with `\0`

---

📅 **Focus of the Day:** Understanding internal implementation of string functions and writing custom reverse logic in C.
