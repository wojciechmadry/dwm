#include <gtest/gtest.h>
#include "../../dwm.c"

TEST(ConfigH, Commands) {
    ASSERT_EQ(sizeof(dmenumon)/sizeof(char), 2);
    ASSERT_EQ(sizeof(dmenucmd)/sizeof(char*), 14);
    ASSERT_EQ(sizeof(termcmd)/sizeof(char*), 4);
    ASSERT_EQ(sizeof(firefoxcmd)/sizeof(char*), 2);
    ASSERT_EQ(sizeof(i3lockcmd)/sizeof(char*), 2);
    ASSERT_EQ(sizeof(raisevolumecmd)/sizeof(char*), 5);
    ASSERT_EQ(sizeof(lowervolumecmd)/sizeof(char*), 5);
    ASSERT_EQ(sizeof(mutevolumecmd)/sizeof(char*), 5);
    ASSERT_EQ(sizeof(printscreencmd)/sizeof(char*), 3);
}

TEST(ConfigH, Keys) {
    ASSERT_EQ(sizeof(keys)/sizeof(Key), 64);
}

TEST(ConfigH, Buttons){
    ASSERT_EQ(sizeof(buttons)/sizeof(Button), 11);
}

