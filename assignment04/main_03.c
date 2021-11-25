#include<assert.h>
#include"stack.h"

int main()
{
    int result01;
    int result02;
    int testVal;
    
    // *******************************************************************
    // Test01: Initialized Stack?  Test pop
    // *******************************************************************
    // Arrange:
    // Nothing to arrange
    
    // Act:
    testVal = -999;
    result01 = stack_pop(&testVal);
      
    // Assert:
    assert(-1 == result01);
    assert(-999 == testVal);
    
    // *******************************************************************
    // Test02: Initialized Stack?  Test push
    // *******************************************************************
    // Arrange:
    // Nothing to arrange
    
    // Act:
    testVal = -999;
    result01 = stack_push(testVal);
      
    // Assert:
    assert(-1 == result01);
    assert(-999 == testVal);
    
    // *******************************************************************
    // Test03: Uninitialized Stack - is it empty?
    // *******************************************************************
    // Arrange:
    // Nothing to arrange
    
    // Act:    
    result01 = stack_isEmpty();
      
    // Assert:
    assert(-1 == result01);
    
    // *******************************************************************
    // Test04: Uninitialized Stack - is it full?
    // *******************************************************************
    // Arrange:
    // Nothing to arrange
    
    // Act:    
    result01 = stack_isFull();
      
    // Assert:
    assert(-1 == result01);
    
    // *******************************************************************
    // Test05: Initialized Stack?  Test push
    // *******************************************************************
    // Arrange:
    stack_init();
    
    // Act:
    testVal = -999;
    result01 = stack_push(testVal);
      
    // Assert:
    assert(0 == result01);
    assert(-999 == testVal);
    
    // *******************************************************************
    // Test06: Test isEmpty()
    // *******************************************************************
    // Arrange:
    // notice that we are using the previous result to set up
    // C++ testing would be to destroy the stack object and start over, but this isn't c++
    result02 = -999;
    result02 = stack_isEmpty();
    
    assert(0 == result02);
    
    // *******************************************************************
    // Test07: Test re-init
    // *******************************************************************
    // Arrange:
    // notice that we are using the previous result to set up
    result02 = -999;
    
    // Act
    stack_init();    
    result02 = stack_isEmpty();
    
    // Assert
    assert(1 == result02);
    
    // *******************************************************************
    // Test08: Initialized Stack?  Test pop
    // *******************************************************************
    // Arrange:
    stack_init();
    
    // Act:
    testVal = -999;
    result01 = stack_pop(&testVal);
      
    // Assert:
    assert(-1 == result01);
    assert(-999 == testVal);

    // *******************************************************************
    // Test08: Initialized Stack - is it full?
    // *******************************************************************
    // Arrange:
    stack_init();
    
    // Act:    
    result01 = stack_isFull();
      
    // Assert:
    assert(0 == result01);
    
    // *******************************************************************
    // Test09: Initialized Stack, fill it - is it full?
    // *******************************************************************
    // Arrange:
    stack_init();
    for(int i = 0; i < STACK_SIZE; ++i) {
      int test = stack_push(i);
      assert(-1 != test);
    }
    
    // Act:    
    result01 = stack_isFull();
    result02 = stack_isEmpty();
      
    // Assert:
    assert(1 == result01);
    assert(0 == result02);
    
    // *******************************************************************
    // Test10: Successfully retrieve an item from the stack
    // *******************************************************************
    // Arrange:
    result01 = 42;
    result02 = 43;
    testVal = 77;
    int popVal = -999;
    stack_init();
    
    // Act:
    result01 = stack_push(testVal);
    result02 = stack_pop(&popVal);
    
    // Assert:
    assert(0 == result01);
    assert(0 == result02);
    assert(popVal == testVal);
    
    // *******************************************************************
    // Test11: Successfully retrieve two items from the stack
    // *******************************************************************
    // Arrange:
    result01 = 42;
    result02 = 43;
    testVal = 77;
    { // block scope
      int testVal01 = 11;
      int testVal02 = 22;
      int popVal01 = -999;
      int popVal02 = -999;
      stack_init();
      
      // Act:
      result01 = stack_push(testVal01);
      result02 = stack_push(testVal02);
      assert(0 == result01);
      assert(0 == result02);
      
      result01 = stack_pop(&popVal01);
      result02 = stack_pop(&popVal02);
      
      // Assert:
      assert(0 == result01);
      assert(0 == result02);
      assert(popVal01 == testVal02);
      assert(popVal02 == testVal01);    
    }
    
    // *******************************************************************
    // Test12: Successfully retrieve three items from the stack
    // *******************************************************************
    // Arrange:
    { // block scope
      int result01 = -77;
      int result02 = -77;
      int result03 = -77;
      int testVal01 = 11;
      int testVal02 = 22;
      int testVal03 = 33;
      int popVal01 = -999;
      int popVal02 = -999;
      int popVal03 = -999;
      stack_init();
      
      // Act:
      result01 = stack_push(testVal01);
      result02 = stack_push(testVal02);
      result03 = stack_push(testVal03);
      assert(0 == result01);
      assert(0 == result02);
      assert(0 == result03);
      
      result01 = stack_pop(&popVal01);
      result02 = stack_pop(&popVal02);
      result03 = stack_pop(&popVal03);
      
      // Assert:
      assert(0 == result01);
      assert(0 == result02);
      assert(0 == result02);
      assert(popVal01 == testVal03);
      assert(popVal02 == testVal02);    
      assert(popVal03 == testVal01);    
    }
    
    // *******************************************************************
    // Test13: Fill stack, then put one more item, should fail
    // *******************************************************************
    // Arrange:
    stack_init();
    result01 = -77;
    for(int i = 0; i < STACK_SIZE; ++i) {
      assert(-1 != stack_push(i));      
    }
    
    // ACT/Assert    
    assert(-1 == stack_push(33));  // check for failure
    
    // check that the stack wasn't changed
    for(int i = STACK_SIZE - 1; i >= 0; --i) {
      int retVal = -999;
      int test01 = stack_pop(&retVal);
      assert(0 == test01);
      assert(retVal == i);
    }        
    
    // ***********************************************************************
    // Test14: Fill stack, retrieve one item, then add item, then retieve all
    // A shameless copy from the demo
    // ***********************************************************************
    // Arrange:
    testVal = -99;
    stack_init();
    
    stack_push(1);
    stack_push(2);
    stack_push(3);
    
    // Act / Assert
    assert(0 == stack_pop(&testVal));
    assert(3 == testVal);
    
    assert(0 == stack_push(77));
    
    assert(0 == stack_pop(&testVal));
    assert(77 == testVal);
    assert(0 == stack_pop(&testVal));
    assert(2 == testVal);
    assert(0 == stack_pop(&testVal));
    assert(1 == testVal);
    
    // ***********************************************************************
    // Test15: Fill stack, retrieve everything, then do it again
    // A shameless copy from the demo
    // ***********************************************************************
    // Arrange:
    testVal = -99;
    stack_init();
    
    stack_push(1);
    stack_push(2);
    stack_push(3);
    
    // Act / Assert
    assert(0 == stack_pop(&testVal));
    assert(3 == testVal);         
    assert(0 == stack_pop(&testVal));
    assert(2 == testVal);
    assert(0 == stack_pop(&testVal));
    assert(1 == testVal);
    
    assert(0 == stack_push(11));
    assert(0 == stack_push(12));
    assert(0 == stack_push(13));
    
    assert(0 == stack_pop(&testVal));
    assert(13 == testVal);         
    assert(0 == stack_pop(&testVal));
    assert(12 == testVal);
    assert(0 == stack_pop(&testVal));
    assert(11 == testVal);
    
    return 0;
}
