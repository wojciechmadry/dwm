#include <gtest/gtest.h>
#include "../../util.c"
TEST(Util, Util_c_h) {
    for(int i = -10 ; i <= 10 ; ++i) {
        for(int j = -10 ; j <= 10 ; ++j) {
            for(int k = -10 ; k <= 10 ; ++k) {
                ASSERT_EQ(MAX(i, j), std::max(i, j));
                ASSERT_EQ(MIN(i, j), std::min(i, j));
                ASSERT_EQ(BETWEEN(i, j, k), i >= j && i <= k);
            }
        }
    }
    void* reserve = ecalloc(4, sizeof(int));
    ASSERT_NE(reserve, nullptr);
    free(reserve);
}

