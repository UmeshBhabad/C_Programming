# 🧵 Day 12 — Strings, Functions & Character Handling in C

### 📚 What I Learned Today

---

## I. ✨ Strings in C  
Understood how strings are stored as character arrays and how they are terminated using the null character `\0`.

---

## II. 📝 String Declaration Methods  
Practiced multiple ways of declaring strings:
- Character array notation  
- String literal initialization  
- Dynamic allocation

Example:
```c
char name[20];
char name[] = "Umesh";

## III. 📚 string.h Header File (String Functions)

Explored commonly used string functions:

strlen

strcpy

strcmp

strcat

and understood how they work internally.

## IV. 🎯 Using %[^\n]s to Read Input

Learned how to take input including spaces until a newline:

scanf("%[^\n]s", str);


Useful for reading sentences and full names.

## V. 🧬 Cloning Own Methods from string.h

Reimplemented custom logic for functions like:

strlen()

strlwr()

strupr()

to understand how string manipulation works internally.

## VI. 🔡 Problems on Strings

Solved pattern and logic-based string problems involving:

Counting characters

Searching

Reversing

Replacing

Filtering characters

📅 Focus of the Day: Mastering string manipulation, input handling, and building custom string functions to deepen understanding.