#include <stdio.h>

// Mock the function that would validate the lottery numbers.
// Here we will fake the match for demonstration purposes.
int main(int argc, char *argv[]) {
    if (argc == 6) {
        printf("You won the jackpot!\n");
        return 0;
    }
    return 1;
}
