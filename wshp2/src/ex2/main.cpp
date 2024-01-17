/*******************************************************************************
 *  Workshop 2/Task 2
 *
 *  Studying input, output, conditions and simple loops.
 *
 *  A program outputs a formatted multiplication table for n numbers.
 *
 *  Example. For n = 3, the output is:
 *
 *      1   2   3
 *  1   1   2   3
 *  2   2   4   6
 *  3   3   6   9
 *
 *  1) Ask a user to input a boundary n for the table.
 *  2) Check whether n is in the range [1; 10] using if statement. Otherwise
 *     output the following message: "Wrong argument", and terminate the program.
 *  3) Output a table row by row using for-loop statement. Use tabs to separate
 *     individual values.
 *  4) Modify the program. Use while-loop statement.
 *
 ******************************************************************************/

#include <iostream>

int main() {
    int n;
    std::cout << "Enter a number in range [1; 10]: ";
    std::cin >> n;

    if (n < 1 || n > 10) {
        std::cout << "Wrong argument" << std::endl;
        return 1;
    }

    std::cout << "\t";
    for (int i = 1; i <= n; ++i) {
        std::cout << i << '\t';
    }
    std::cout << "\n";
    
    for (int i = 1; i <= n; ++i) {
        std::cout << i << "\t";
        for (int j = 1; j <= n; ++j) {
            std::cout << i * j << '\t';
        }
        std::cout << std::endl;
    }
    
    std::cout << "\n--------------------------\n";

    std::cout << "\t";
    int i = 1;
    while (i <= n) {
        std::cout << i << '\t';
        ++i;
    }
    std::cout << "\n";

    i = 1;
    while (i <= n) {
        std::cout << i << "\t";
        int j = 1;
        while (j <= n) {
            std::cout << i * j << '\t';
            ++j;
        }
        std::cout << std::endl;
        ++i;
    }

    return 0;
}

