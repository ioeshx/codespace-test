#include <stdio.h>

// Little function to add two numbers
int add_numbers(int a, int b) {
    return a + b;
}

// Little function to greet someone
void greet(const char* name) {
    printf("Hello, %s! Welcome to the codespace test.\n", name);
}

int main() {
    // Demonstrate the add_numbers function
    int result = add_numbers(5, 3);
    printf("5 + 3 = %d\n", result);
    
    // Demonstrate the greet function
    greet("World");
    
    return 0;
}