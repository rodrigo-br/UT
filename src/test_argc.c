#include "test.h"

void test_argc_seis_ou_cinco(void)
{
	int	argc = 6;

	TEST_ASSERT_EQUAL(0, check_argc(argc));

	argc = 5;

	TEST_ASSERT_EQUAL(0, check_argc(argc));
}

void test_argc_invalido(void)
{
	for (int invalid = 0; invalid < 5; invalid++)
	{
		TEST_ASSERT_EQUAL(1, check_argc(invalid));
	}
	for (int invalid = 7; invalid < 100; invalid++)
	{
		TEST_ASSERT_EQUAL(1, check_argc(invalid));
	}
}

void test_argc(void)
{
	RUN_TEST(test_argc_seis_ou_cinco);
	RUN_TEST(test_argc_invalido);
}
