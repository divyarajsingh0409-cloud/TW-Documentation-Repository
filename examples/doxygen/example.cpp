/**
 * @file example.cpp
 * @brief Small example used to practise Doxygen documentation.
 * @author TW Student
 * @version 1.0
 */

/**
 * @brief Adds two integer values.
 * @param first First value.
 * @param second Second value.
 * @return Sum of the two values.
 * @note This function demonstrates parameter and return documentation.
 */
int add(int first, int second) {
    return first + second;
}

/**
 * @class Calculator
 * @brief A minimal calculator class.
 *
 * The class groups a simple operation behind a named interface.
 */
class Calculator {
public:
    /**
     * @brief Multiplies two integer values.
     * @param a First factor.
     * @param b Second factor.
     * @return Product of a and b.
     * @see add
     */
    int multiply(int a, int b) const {
        return a * b;
    }
};
