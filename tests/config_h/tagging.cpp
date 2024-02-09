#include <gtest/gtest.h>
#include "../../dwm.c"
#include <cstdint>
#include <string>
TEST(ConfigH, Tagging) {
    ASSERT_EQ(sizeof(tags)/sizeof(char*), 9);
    for(std::size_t i = 1 ; i <= 9 ; ++i) {
        ASSERT_EQ(std::to_string(i), std::string{tags[i - 1]});
    }
    ASSERT_EQ(sizeof(rules)/sizeof(Rule), 11);
}

