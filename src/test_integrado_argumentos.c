#include "test.h"

int test_integrado_1(int argc, char **argv)
{
	if (check_argc(argc) || check_numeric_value(argv[1]) ||
	check_numeric_value(argv[2]) || check_numeric_value(argv[3])
	|| check_numeric_value(argv[4]) || !check_numeric_value(argv[0]))
		return (EXIT_FAILURE);
	return (EXIT_SUCCESS);
}

void test_integrado_correto(void)
{
	int	argc = 5;
	char **argv = ft_split("./programa 2 3 4 5", ' ');

	TEST_ASSERT_EQUAL(0, test_integrado_1(argc, argv));
}

void test_integrado_incorreto(void)
{
	int	argc = 5;
	char **argv = ft_split("./programa ./programa 3 4 5", ' ');

	TEST_ASSERT_EQUAL(1, test_integrado_1(argc, argv));
	argv = ft_split("./programa ./programa 3 4 a", ' ');

	TEST_ASSERT_EQUAL(1, test_integrado_1(argc, argv));
}


void test_integrado_argumentos(void)
{
	RUN_TEST(test_integrado_correto);
	RUN_TEST(test_integrado_incorreto);
}