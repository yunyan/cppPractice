#include "gtest/gtest.h"
#include <memory>

#include "CDatabase.h"

TEST(dummyTest, pureReturn) {
    std::shared_ptr<CDatabase> p = std::make_shared<CDatabase>("localhost", "root", "root");
    EXPECT_TRUE(p->dummy());
    EXPECT_FALSE(p->dummy());
}
