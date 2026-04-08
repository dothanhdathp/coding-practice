#include <vector>
#include <functional>

/** Simple method do test
 * <A,B> A is input_type, B is output type
 * 
*/
template<typename A, typename B>
void testAB(A input, B output, std::function<B(A)> fn = nullptr) {
    // std::cout << "--- Test " << num << " ---" << std::endl;
    if(fn(input) == output) {
        COLOR_PRINT(GREEN, "PASS");
    } else {
        COLOR_PRINT(RED, "FALSE");
    }
};