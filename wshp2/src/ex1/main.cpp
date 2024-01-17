/*******************************************************************************
 * Workshop 2/Task 1
 * Studying properties of some basic datatypes.
 *
 * Use operator sizeof to explore size of all important basic datatypes:
 *  char, short, int, long, long long, double, bool
 *
 * For storing results use named variables of size_t for some types from the
 * list above.
 * Also, try to create complex expressions for output formatted results to
 * std::cout.
 *
 ******************************************************************************/

#include <iostream>

// the entrypoint of the application
int main()
{
    std::cout << "Hello world!" << std::endl;

    size_t CharSize = sizeof(char);
    size_t ShortSize = sizeof(short);
    size_t IntSize = sizeof(int);
    size_t LongSize = sizeof(long);
    size_t LonglongSize = sizeof(long long);
    size_t DoubleSize = sizeof(double);
    size_t BoolSize = sizeof(bool);

    std::cout << "Size of char: " << CharSize << " bytes" << std::endl;
    std::cout << "Size of short: " << ShortSize << " bytes" << std::endl;
    std::cout << "Size of int: " << IntSize << " bytes" << std::endl; 
    std::cout << "Size of long: " << LongSize << " bytes" << std::endl;
    std::cout << "Size of long long: " << LonglongSize << " bytes" << std::endl;
    std::cout << "Size of double: " << DoubleSize << " bytes" << std::endl;
    std::cout << "Size of bool: " << BoolSize << " bytes" << std::endl;


    return 0;
}
