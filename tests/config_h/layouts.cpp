#include <gtest/gtest.h>
#include "../../dwm.c"

TEST(ConfigH, Layouts) {
    ASSERT_TRUE(mfact > 0.05 && mfact < 0.95);
    ASSERT_GE(nmaster, 1);
    ASSERT_GE(resizehints, 1);
    ASSERT_TRUE(lockfullscreen == 0 || lockfullscreen == 1);
    ASSERT_EQ(sizeof(layouts)/sizeof(Layout), 3);
 }

