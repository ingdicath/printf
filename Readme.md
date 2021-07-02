# PRINTF

CODAM project Curriculum 2019

## Description

- **Objective**: Write a library that contains ft_printf, a function that will mimic the real printf, using variadic arguments.

---

## Requirements

- The prototype of ft_printf should be ```int ft_printf(const char *, ...);```
- Recode the **libc’s printf** function
- It must not do the buffer management like the real printf
- Manage the following conversions: ```cspdiuxX%```
- Manage any combination of the following flags: ```- 0 . *``` and minimum field
width with all conversions
- Using the command __libtool__ is forbidden.

### Allowed functions

```malloc, free, write, va_start, va_arg, va_copy, va_end```

---
## How to build :hammer:

1. Clone the repository and go to folder ```cd ft_printf```
2. Type in the terminal ```make```
