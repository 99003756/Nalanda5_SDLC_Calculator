#include "unity.h"
#include <code.h>

/* Modify these two lines according to the project */
#include <code.h>
#define PROJECT_NAME    "Calculator"

/* Prototypes for all the test functions */
void test_Area_calculation(void);
void test_Volume_calculation(void);

/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

/* Start of the application test */
int main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_Area_calculation);
  RUN_TEST(test_Volume_calculation);

  /* Close the Unity Test Framework */
  return UNITY_END();
}

/* Write all the test functions */ 
void test_Area_calculation(void) {
  TEST_ASSERT_EQUAL(200, add(10, 20));
  TEST_ASSERT_EQUAL(50, add(5, 10));
}

void test_Volume_calculation(void) {
  TEST_ASSERT_EQUAL(25, subtract(10, 5));
  TEST_ASSERT_EQUAL(100, subtract(20, 10));
}

