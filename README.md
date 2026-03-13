# 💻 Advanced Embedded C Programming

## 📘 Module Overview

C is the most widely used programming language in **embedded systems development** because it offers the perfect balance between **low-level hardware control and high-level programming structure**.

In embedded systems, software must interact directly with **microcontroller registers, memory, and peripherals**. C allows developers to write **efficient, portable, and hardware-oriented programs** used in firmware and real-time applications.

This module focuses on **advanced concepts of C programming** required for developing **embedded firmware, device drivers, and hardware-interfacing applications**.

---

# ⚙️ Development Environment

## 🛠 Tools Used

| Tool | Purpose |
|------|------|
| 💻 Code::Blocks IDE | Writing and managing C programs |
| ⚙️ GCC Compiler | Compiling C programs into machine code |

### Why Code::Blocks?

Code::Blocks provides:

- Simple and beginner-friendly interface  
- Integrated debugging tools  
- Easy project management  
- Built-in GCC compiler support  

---

# 🧠 Why C is Used in Embedded Systems

C became the **standard language for embedded systems** because of the following advantages:

| Feature | Explanation |
|------|------|
| ⚡ High Performance | Produces efficient machine code close to assembly speed |
| 🔧 Hardware Access | Allows direct manipulation of memory and registers |
| 📦 Portability | Programs can run on different processors |
| 🧠 Structured Programming | Supports modular programming using functions |
| 💾 Memory Efficiency | Provides precise control over memory usage |
| 🛠 Bit-Level Operations | Enables control of individual hardware bits |

Because of these features, C is widely used in:

- Microcontroller firmware  
- Device drivers  
- Operating systems  
- IoT devices  
- Robotics systems  

---

# ⚙️ How C is Used in Embedded Systems

Embedded C programs interact with **hardware peripherals through memory-mapped registers**.

Typical workflow:


Sensor → Microcontroller → Processing → Actuator / Display


Example:

PORTB = 0x01;   // Turn ON LED connected to PORTB

The program writes directly to a hardware register, controlling the microcontroller output pin.

**⚙️ Embedded System Architecture**
+------------+       +-------------------+       +-----------+
|  Sensor    | --->  | Microcontroller   | --->  | Actuator  |
|  (Input)   |       |  (Embedded C)     |       | (Output)  |
+------------+       +-------------------+       +-----------+
        |                       |
        |                       |
        |                +-------------+
        |                | Display /   |
        |                | Communication|
        |                +-------------+
Component	Function
Sensor	Collects environmental data
Microcontroller	Processes data using embedded C
Actuator	Performs control actions
Display	Shows system status
Communication	Transfers data between systems


**🔧 Compiler and Processor**

A compiler converts C source code into machine code that the processor can execute.

C Program → Compiler → Machine Code → Processor Execution

The processor executes these instructions to perform:

Arithmetic calculations

Logical decisions

Memory access

Hardware control

**📊 C Program Execution Flow**
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
| Generates ASM    |
+--------+---------+
         |
         v
+------------------+
|    Assembler     |
| Creates Object   |
| Code (.o)        |
+--------+---------+
         |
         v
+------------------+
|      Linker      |
| Combines files   |
+--------+---------+
         |
         v
+------------------+
|    Executable    |
|    Program       |
+------------------+
**📊 Core Data Types and Operators**

**Data Types**
Type	Description	Example
int	Integer numbers	10
float	Decimal numbers	3.14
char	Character data	'A'
double	High precision decimal	12.45
Operators
Type	Operators
Arithmetic	+ - * / %
Relational	> < == !=
Logical	`&&
Bitwise	`&

Bitwise operators are essential in embedded programming for hardware register manipulation.

Example:

PORTB |= (1 << 2);


**🔁 Flow Control Structures**
Structure	Purpose
if / else	Conditional execution
switch	Multi-condition branching
for	Iteration
while	Condition-based looping
do-while	Executes at least once

Example:

if(temp > 30)
{
    printf("High Temperature");
}


**📚 Arrays in C**

Arrays store multiple values in contiguous memory.

int values[5] = {10,20,30,40,50};

Advantages:

Efficient data storage

Easy iteration

Contiguous memory allocation

**🧠 Pointers in Depth**

Pointers store memory addresses.

Example:

int x = 10;
int *ptr = &x;
Pointer Memory Visualization
Variable        Address        Value
---------------------------------------
x               0x2000         10
ptr             0x3000         0x2000
+-------+        +---------+
| ptr   | -----> |    x    |
|0x3000 |        |0x2000   |
|0x2000 |        |  10     |
+-------+        +---------+

Pointers are used for:

Direct memory access

Hardware register mapping

Efficient data manipulation

Dynamic memory allocation

**⚙️ Functions and Macros**

Functions
int add(int a, int b)
{
    return a + b;
}

Functions improve modularity and code reuse.

Macros
#define MAX_VALUE 100

Advantages:

Compile-time substitution

Faster execution

Easy configuration

**📂 File Handling and Bitwise Tools**

File Operations
Operation	Function
Open	fopen()
Read	fscanf()
Write	fprintf()
Close	fclose()


**🧠 Memory Layout in C**

+-------------------+
|   Text Segment    | Program Instructions
+-------------------+
|   Data Segment    | Initialized Variables
+-------------------+
|   BSS Segment     | Uninitialized Variables
+-------------------+
|   Heap            | Dynamic Memory
+-------------------+
|   Stack           | Function Calls
+-------------------+



**💾 Dynamic Memory Management**

Functions used:

Function	Purpose
malloc()	Allocate memory
calloc()	Allocate and initialize memory
realloc()	Resize memory
free()	Release memory

Example:

int *ptr = (int*) malloc(5 * sizeof(int));
🧱 Structures and Unions
Structures
struct Student
{
    int id;
    char name[20];
};

Structures group different data types.

**Unions**

Union members share the same memory location, reducing memory usage.

**🔢 Bitfields**

Bitfields allow storing values in individual bits.

struct Flags
{
    unsigned int flag1 : 1;
    unsigned int flag2 : 1;
};

Often used in hardware register representation.
