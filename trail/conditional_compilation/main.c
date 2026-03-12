#include <stdio.h>
#define __linux__
#ifdef __linux__
    #define OS "Linux"
#elif __APPLE__
    #define OS "MacOS"
#elif _WIN32
    #define OS "Windows"
#else
    #define OS "Unknown"
#endif


int main() {
    printf("Running on %s\n", OS);
    return 0;
}
