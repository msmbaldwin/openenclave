//===----------------------------------------------------------------------===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is dual licensed under the MIT and the University of Illinois Open
// Source Licenses. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//
//
// WARNING: This test was generated by generate_feature_test_macro_components.py
// and should not be edited manually.

// <complex>

// Test the feature test macros defined by <complex>

/*  Constant                  Value
    __cpp_lib_complex_udls    201309L [C++14]
*/

#include <complex>
#include "test_macros.h"

#if TEST_STD_VER < 14

# ifdef __cpp_lib_complex_udls
#   error "__cpp_lib_complex_udls should not be defined before c++14"
# endif

#elif TEST_STD_VER == 14

# ifndef __cpp_lib_complex_udls
#   error "__cpp_lib_complex_udls should be defined in c++14"
# endif
# if __cpp_lib_complex_udls != 201309L
#   error "__cpp_lib_complex_udls should have the value 201309L in c++14"
# endif

#elif TEST_STD_VER == 17

# ifndef __cpp_lib_complex_udls
#   error "__cpp_lib_complex_udls should be defined in c++17"
# endif
# if __cpp_lib_complex_udls != 201309L
#   error "__cpp_lib_complex_udls should have the value 201309L in c++17"
# endif

#elif TEST_STD_VER > 17

# ifndef __cpp_lib_complex_udls
#   error "__cpp_lib_complex_udls should be defined in c++2a"
# endif
# if __cpp_lib_complex_udls != 201309L
#   error "__cpp_lib_complex_udls should have the value 201309L in c++2a"
# endif

#endif // TEST_STD_VER > 17

int main() {}
