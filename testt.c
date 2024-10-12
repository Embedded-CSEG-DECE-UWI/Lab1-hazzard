#include "unity.h"
#include "calc.h"
#include <stdlib.h>
void setup()
{
    
}

void tearDown()
{
    
}
void test_add()
{
    
     int output = add(10,20);
     if(sizeof(output) != 1)
     {
         
     }
    TEST_ASSERT_EQUAL(30,output);
}

int main(void)
{
    UNITY_BEGIN();
    /**/
    RUN_TEST(test_add);
    UNITY_END();
    return 0;
}
