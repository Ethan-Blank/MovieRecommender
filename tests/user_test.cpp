#ifndef __USER_TESTS__
#define __USER_TESTS__

TEST(UserTests, test1) {
    user joe;
    string un = "j0e";
    string pw = "1234";
    joe.setUsername(un);
    joe.setPassword(pw);

    EXPECT(joe.getUsername(), un);
    EXPECT(joe.getPassword(), pw);

}

#endif 
