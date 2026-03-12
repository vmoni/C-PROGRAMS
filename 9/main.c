#include <stdio.h>

// Create a new type 'Student' using typedef + struct
typedef struct {
    int id;
    char name[20];
    float marks;
} Student;

int main() {
    // Declare variables of type 'Student'
    Student s1 = {101, "Vivekitha", 89.5};

    // Display student details
    printf("\n--- Student Records ---\n");
    printf("Student 1 ID : %d\n", s1.id);       // %d for int
    printf("Name: %s\n", s1.name);              // %s for string
    printf("Marks: %.2f\n", s1.marks);          // %f for float

    return 0;
}

