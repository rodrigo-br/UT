#include "test.h"

void test_argv_eh_numerico(void)
{
	char **argv = ft_split("1 2 3 4 5", ' ');

	TEST_ASSERT_EQUAL(0, check_numeric_value(argv[0]));
	TEST_ASSERT_EQUAL(0, check_numeric_value(argv[1]));
	TEST_ASSERT_EQUAL(0, check_numeric_value(argv[2]));
	TEST_ASSERT_EQUAL(0, check_numeric_value(argv[3]));
	TEST_ASSERT_EQUAL(0, check_numeric_value(argv[4]));

	argv = ft_split("1234141 1231 123 123 12312412 12512512512512512", ' ');
	TEST_ASSERT_EQUAL(0, check_numeric_value(argv[0]));
	TEST_ASSERT_EQUAL(0, check_numeric_value(argv[1]));
	TEST_ASSERT_EQUAL(0, check_numeric_value(argv[2]));
	TEST_ASSERT_EQUAL(0, check_numeric_value(argv[3]));
	TEST_ASSERT_EQUAL(0, check_numeric_value(argv[4]));
	TEST_ASSERT_EQUAL(0, check_numeric_value(argv[5]));
}

void test_argv_nao_numerico(void)
{
	char **argv = ft_split("1a 2.2 -3 a 000000001.0", ' ');
	TEST_ASSERT_EQUAL(1, check_numeric_value(argv[0]));
	TEST_ASSERT_EQUAL(1, check_numeric_value(argv[1]));
	TEST_ASSERT_EQUAL(1, check_numeric_value(argv[2]));
	TEST_ASSERT_EQUAL(1, check_numeric_value(argv[3]));
	TEST_ASSERT_EQUAL(1, check_numeric_value(argv[4]));

}

void test_argv(void)
{
	RUN_TEST(test_argv_eh_numerico);
	RUN_TEST(test_argv_nao_numerico);
}