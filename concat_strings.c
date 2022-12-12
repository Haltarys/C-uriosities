// In C and C++ you can concatenate string literals at
// compile time by simply placing them next to each other.

// You can use it with ANSI codes to print colored text
// to the terminal.

#include <stdio.h>

#define MAN "man"

#define RED "\x1B[31m"
#define GRN "\x1B[32m"
#define YEL "\x1B[33m"
#define BLU "\x1B[34m"
#define MAG "\x1B[35m"
#define CYN "\x1B[36m"
#define WHT "\x1B[37m"
#define RESET "\x1B[0m"

int main(void)
{
    char const *str1 = "bat" "man"; // equivalent to "batman"
    char const *str2 = "bat""man"; // equivalent to "batman"
    char const *str3 = "bat" MAN; // equivalent to "batman"


    (void)str1;
    (void)str2;
    (void)str3;
    printf(RED "red\n" RESET);
    printf(GRN "green\n" RESET);
    printf(YEL "yellow\n" RESET);
    printf(BLU "blue\n" RESET);
    printf(MAG "magenta\n" RESET);
    printf(CYN "cyan\n" RESET);
    printf(WHT "white\n" RESET);

    return 0;
}
