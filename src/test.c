#include "test.h"

void setUp(void) {
    
}

void tearDown(void) {
    
}

int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_argc);
	RUN_TEST(test_argv);
	RUN_TEST(test_integrado_argumentos);
    return UNITY_END();
}