# 📂 Day 11 — File Handling & System-Level I/O in C

### 📚 What I Learned Today

---

## I. 📄 File I/O in C  
Understood how to work with files using standard library functions:
- Opening files (`fopen`)
- Reading (`fscanf`, `fgets`, `fread`)
- Writing (`fprintf`, `fputs`, `fwrite`)
- Closing files (`fclose`)

Learned how file operations help store and retrieve data efficiently.

---

## II. 🖥️ System Calls for I/O  
Explored low-level Linux/Unix system calls:
- `open()`
- `read()`
- `write()`
- `close()`

These provide more control over file operations compared to standard I/O functions.

---

## III. 📚 Header Files for I/O  
Studied essential header files:
- `<stdio.h>` → Standard input/output library  
- `<fcntl.h>` → File control operations (open, permissions)  
- `<unistd.h>` → Low-level system calls (read, write, close)

Understanding these headers helps in both high-level and low-level file processing.

---

📅 **Focus of the Day:** Learning how to interact with files, understanding system-level I/O, and exploring the header files that make file operations possible in C.
