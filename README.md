# 💻 Advanced Embedded C Programming

> C is the most widely used programming language in embedded systems development — offering the perfect balance between **low-level hardware control** and **high-level programming structure**.

In embedded systems, software must interact directly with microcontroller registers, memory, and peripherals. C allows developers to write efficient, portable, and hardware-oriented programs used in **firmware** and **real-time applications**.

This module focuses on advanced concepts of C programming required for developing embedded firmware, device drivers, and hardware-interfacing applications.

---

## 📋 Table of Contents

- [Development Environment](#️-development-environment)
- [Why C is Used in Embedded Systems](#-why-c-is-used-in-embedded-systems)
- [How C is Used in Embedded Systems](#️-how-c-is-used-in-embedded-systems)
- [Embedded System Architecture](#️-embedded-system-architecture)
- [Compiler and Processor](#-compiler-and-processor)
- [C Program Execution Flow](#-c-program-execution-flow)
- [Core Data Types](#-core-data-types)
- [Operators](#️-operators)
- [Flow Control Structures](#-flow-control-structures)
- [Arrays](#-arrays-in-c)
- [Pointers](#-pointers-in-depth)
- [Functions and Macros](#️-functions-and-macros)
- [File Handling](#-file-handling)
- [Memory Layout](#-memory-layout-in-c)
- [Dynamic Memory Management](#-dynamic-memory-management)
- [Structures and Unions](#-structures-and-unions)
- [Bitfields](#-bitfields)

---

## ⚙️ Development Environment

### 🛠️ Tools Used

| Tool                | Purpose                                |
|---------------------|----------------------------------------|
| 💻 Code::Blocks IDE | Writing and managing C programs        |
| ⚙️ GCC Compiler     | Compiling C programs into machine code |

### Why Code::Blocks?

Code::Blocks provides:
- Simple and beginner-friendly interface
- Integrated debugging tools
- Easy project management
- Built-in GCC compiler support

---

## 🧠 Why C is Used in Embedded Systems

C became the standard language for embedded systems because of the following advantages:

| Feature                    | Explanation                                             |
|----------------------------|---------------------------------------------------------|
| ⚡ High Performance        | Produces efficient machine code close to assembly speed |
| 🔧 Hardware Access         | Allows direct manipulation of memory and registers      |
| 📦 Portability             | Programs can run on different processors                |
| 🧠 Structured Programming  | Supports modular programming using functions            |
| 💾 Memory Efficiency       | Provides precise control over memory usage              |
| 🛠️ Bit-Level Operations    | Enables control of individual hardware bits             |

Because of these features, C is widely used in:
- Microcontroller firmware
- Device drivers
- Operating systems
- IoT devices
- Robotics systems

---

## ⚙️ How C is Used in Embedded Systems

Embedded C programs interact with **hardware peripherals through memory-mapped registers**.

**Typical workflow:**

```
Sensor → Microcontroller → Processing → Actuator / Display
```

**Example:**

```c
PORTB = 0x01;   // Turn ON LED connected to PORTB
```

The program writes directly to a **hardware register**, controlling the microcontroller output pin.

---

## ⚙️ Embedded System Architecture

```
+------------+       +-------------------+       +-----------+
|  Sensor    | --->  | Microcontroller   | --->  | Actuator  |
|  (Input)   |       |   (Embedded C)    |       |  (Output) |
+------------+       +-------------------+       +-----------+
                              |
               +--------------+--------------+
               |                             |
       +--------------+             +--------------+
       |   Display    |             | Communication|
       +--------------+             +--------------+
```

| Component        | Function                         |
|------------------|----------------------------------|
| Sensor           | Collects environmental data      |
| Microcontroller  | Processes data using Embedded C  |
| Actuator         | Performs control actions         |
| Display          | Shows system status              |
| Communication    | Transfers data between systems   |

---

## 🔧 Compiler and Processor

A **compiler** converts C source code into **machine code** that the processor can execute.

```
C Program → Compiler → Machine Code → Processor Execution
```

The processor executes these instructions to perform:
- Arithmetic calculations
- Logical decisions
- Memory access
- Hardware control

---

## 📊 C Program Execution Flow

```
+------------------+
|   Source Code    |
|     (main.c)     |
+--------+---------+
         |
         v
+------------------+
|   Preprocessor   |
| (#include,define)|
+--------+---------+
         |
         v
+------------------+
|     Compiler     |
|  Generates ASM   |
+--------+---------+
         |
         v
+------------------+
|    Assembler     |
| Creates Object   |
|  Code (.o files) |
+--------+---------+
         |
         v
+------------------+
|      Linker      |
|  Combines files  |
+--------+---------+
         |
         v
+------------------+
|    Executable    |
|     Program      |
+------------------+
```

---

## 📊 Core Data Types

| Data Type | Description            | Example |
|-----------|------------------------|---------|
| `int`     | Integer numbers        | `10`    |
| `float`   | Decimal numbers        | `3.14`  |
| `char`    | Character data         | `'A'`   |
| `double`  | High precision decimal | `12.45` |

---

## ⚙️ Operators

| Type       | Operators              |
|------------|------------------------|
| Arithmetic | `+  -  *  /  %`        |
| Relational | `>  <  ==  !=  >=  <=` |
| Logical    | `&&  \|\|  !`          |
| Bitwise    | `&  \|  ^  ~  <<  >>`  |

> **Note:** Bitwise operators are essential in embedded programming for **hardware register manipulation**.

```c
PORTB |= (1 << 2);   // Set bit 2 of PORTB
PORTB &= ~(1 << 2);  // Clear bit 2 of PORTB
PORTB ^= (1 << 2);   // Toggle bit 2 of PORTB
```

---

## 🔁 Flow Control Structures

| Structure   | Purpose                   |
|-------------|---------------------------|
| `if / else` | Conditional execution     |
| `switch`    | Multi-condition branching |
| `for`       | Iteration                 |
| `while`     | Condition-based looping   |
| `do-while`  | Executes at least once    |

**Example:**

```c
if (temp > 30)
{
    printf("High Temperature\n");
}
else
{
    printf("Temperature Normal\n");
}
```

---

## 📚 Arrays in C

Arrays store multiple values in **contiguous memory locations**.

```c
int values[5] = {10, 20, 30, 40, 50};
```

**Advantages:**
- Efficient data storage
- Easy iteration using loops
- Contiguous memory allocation

---

## 🧠 Pointers in Depth

Pointers store **memory addresses** and are fundamental to embedded C programming.

```c
int x = 10;
int *ptr = &x;
```

### Pointer Memory Visualization

```
Variable      Address      Value
---------------------------------
x             0x2000       10
ptr           0x3000       0x2000
```

```
+--------+        +---------+
|  ptr   | -----> |    x    |
| 0x3000 |        | 0x2000  |
| 0x2000 |        |   10    |
+--------+        +---------+
```

**Pointers are used for:**
- Direct memory access
- Hardware register mapping
- Efficient data manipulation
- Dynamic memory allocation

---

## ⚙️ Functions and Macros

### Functions

Functions improve **modularity and code reuse**.

```c
int add(int a, int b)
{
    return a + b;
}
```

### Macros

Macros allow **compile-time substitution**.

```c
#define MAX_VALUE 100
```

**Advantages:**
- Compile-time substitution (no runtime overhead)
- Faster execution
- Easy configuration

---

## 📂 File Handling

| Operation  | Function     |
|------------|--------------|
| Open file  | `fopen()`    |
| Read file  | `fscanf()`   |
| Write file | `fprintf()`  |
| Close file | `fclose()`   |

```c
FILE *fp = fopen("data.txt", "w");
fprintf(fp, "Sensor value: %d\n", sensor_data);
fclose(fp);
```

---

## 🧠 Memory Layout in C

```
+-------------------+
|   Text Segment    |  <-- Program Instructions
+-------------------+
|   Data Segment    |  <-- Initialized Variables
+-------------------+
|   BSS Segment     |  <-- Uninitialized Variables
+-------------------+
|       Heap        |  <-- Dynamic Memory (grows upward)
|         |         |
|         v         |
|                   |
|         ^         |
|         |         |
|      Stack        |  <-- Function Calls (grows downward)
+-------------------+
```

---

## 💾 Dynamic Memory Management

| Function    | Purpose                        |
|-------------|--------------------------------|
| `malloc()`  | Allocate memory                |
| `calloc()`  | Allocate and initialize memory |
| `realloc()` | Resize allocated memory        |
| `free()`    | Release memory                 |

**Example:**

```c
int *ptr = (int*) malloc(5 * sizeof(int));

if (ptr == NULL)
{
    printf("Memory allocation failed!\n");
    return -1;
}

free(ptr);   // Always free when done
ptr = NULL;  // Prevent dangling pointer
```

---

## 🧱 Structures and Unions

### Structures

Structures group **different data types** into a single unit.

```c
struct Student
{
    int  id;
    char name[20];
};
```

### Unions

Union members share the **same memory location**, reducing memory usage.

```c
union Data
{
    int   i;
    float f;
    char  c;
};
// sizeof(union Data) = size of the largest member only
```

| Feature       | Structure           | Union                |
|---------------|---------------------|----------------------|
| Memory usage  | Sum of all members  | Largest member only  |
| Member access | All at once         | One at a time        |
| Use case      | Group related data  | Memory-efficient I/O |

---

## 🔢 Bitfields

Bitfields allow storing values in **individual bits**, commonly used in **hardware register representation**.

```c
struct Flags
{
    unsigned int flag1 : 1;   // 1 bit
    unsigned int flag2 : 1;   // 1 bit
    unsigned int mode  : 3;   // 3 bits
};
```

**Hardware Register Visualization:**

```
Bit:    7     6     5     4     3     2     1     0
       +-----+-----+-----+-----+-----+-----+-----+-----+
PORTB  | PB7 | PB6 | PB5 | PB4 | PB3 | PB2 | PB1 | PB0 |
       +-----+-----+-----+-----+-----+-----+-----+-----+
```

Bitfields are ideal for controlling **individual hardware bits** without affecting the rest of the register.

---

## 🛠️ How to Compile

```bash
# Standard compilation
gcc main.c -o output

# With all warnings enabled (recommended)
gcc -Wall -Wextra main.c -o output

# For embedded target (cross-compile example)
arm-none-eabi-gcc -mcpu=cortex-m4 main.c -o output.elf
```

---

## 📁 Suggested Project Structure

```
embedded-c-programming/
├── 01_basics/
│   ├── data_types.c
│   ├── operators.c
│   └── flow_control.c
├── 02_pointers/
│   ├── pointer_basics.c
│   └── pointer_arithmetic.c
├── 03_memory/
│   ├── dynamic_memory.c
│   └── memory_layout.c
├── 04_structures/
│   ├── structs.c
│   ├── unions.c
│   └── bitfields.c
├── 05_embedded/
│   ├── register_manipulation.c
│   └── interrupt_handling.c
└── README.md
```

---

## 📖 References

- [The C Programming Language — Kernighan & Ritchie](https://en.wikipedia.org/wiki/The_C_Programming_Language)
- [GCC Documentation](https://gcc.gnu.org/onlinedocs/)
- [AVR Libc Reference Manual](https://www.nongnu.org/avr-libc/user-manual/)

