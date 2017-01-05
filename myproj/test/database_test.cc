#include "gtest/gtest.h"
#include <memory>

#include "database.h"

TEST(DummyTest, pureReturn) {
    std::shared_ptr<Database> p = std::make_shared<Database>("localhost", "root", "root");
    EXPECT_TRUE(p->Dummy());
}
