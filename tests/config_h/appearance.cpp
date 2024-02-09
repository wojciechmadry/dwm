#include <gtest/gtest.h>
#include "../../dwm.c"

#include <string>

TEST(ConfigH, Appearance) {
    ASSERT_EQ(borderpx, 4);
    ASSERT_EQ(gappx, 3);
    ASSERT_EQ(snap, 32);
    ASSERT_EQ(systraypinning, 0);
    ASSERT_EQ(systrayonleft, 0);
    ASSERT_EQ(systrayspacing, 2);
    ASSERT_EQ(systraypinningfailfirst, 1);
    ASSERT_EQ(showsystray, 1);
    ASSERT_TRUE(showsystray == 1 || showsystray == 0);
    ASSERT_EQ(showbar, 1);
    ASSERT_TRUE(showbar == 1 || showbar == 0);
    ASSERT_EQ(topbar, 0);
    ASSERT_TRUE(topbar == 1 || topbar == 0);
    ASSERT_EQ("monospace:size=12", fonts[0]);
    ASSERT_EQ(1, sizeof(fonts)/sizeof(char*));
    ASSERT_EQ("#222222",std::string{col_gray1});
    ASSERT_EQ("#444444",std::string{col_gray2});
    ASSERT_EQ("#bbbbbb",std::string{col_gray3});
    ASSERT_EQ("#eeeeee",std::string{col_gray4});
    ASSERT_EQ("#005577",std::string{col_cyan});
    ASSERT_EQ(6, sizeof(colors)/sizeof(char*));
    ASSERT_EQ(3, sizeof(*colors)/sizeof(char*));
    ASSERT_EQ(2, (sizeof(colors)/sizeof(char*)) / (sizeof(*colors)/sizeof(char*)));
    ASSERT_EQ(colors[SchemeNorm][0], col_gray3);
    ASSERT_EQ(colors[SchemeNorm][1], col_gray1);
    ASSERT_EQ(colors[SchemeNorm][2], col_gray2);
    ASSERT_EQ(colors[SchemeSel][0], col_gray4);
    ASSERT_EQ(colors[SchemeSel][1], col_cyan);
    ASSERT_EQ(colors[SchemeSel][2], col_cyan);
}

