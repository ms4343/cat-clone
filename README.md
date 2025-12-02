# 🐱 Simple Cat Clone (C)

A very small and simple **`cat`** clone written in C.  
Given a filename as an argument, it prints the file’s contents to standard output.

---

## 📦 Build

```
gcc -o cat-clone cat-clone.c
```


## ▶️ Usage
```
./cat-clone filename.txt
```

Example:
```
./cat-clone test.txt
```

## 📝 Program Behavior
- Takes exactly one argument — the filename.
- If the file cannot be opened, it prints an error message like:
  ```
  File myfile.txt not found: No such file or directory
  ```
- Reads the file using fgets() into a 1024-byte buffer.
- Prints lines as-is.
