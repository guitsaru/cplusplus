/**
 * @file NamedArray.cpp
 *
 * @author [Your Name]
 * @date <%= DateTime.now.strftime("%d %B %Y") %>
 * @version 1.0
 */

#include <iostream>

#include "../src/<%= name %>.h"

#include <cppunit/TestRunner.h>
#include <cppunit/TestResult.h>
#include <cppunit/TestResultCollector.h>
#include <cppunit/extensions/HelperMacros.h>
#include <cppunit/BriefTestProgressListener.h>
#include <cppunit/extensions/TestFactoryRegistry.h>

class Test<%= name %> : public CPPUNIT_NS::TestCase
{
  CPPUNIT_TEST_SUITE(Test<%= name %>);
  CPPUNIT_TEST(test_<%= name %>);
  CPPUNIT_TEST_SUITE_END();

public:
  void setUp(void) {}
  void tearDown(void) {} 

protected:
  void test_<%= name %>(void) { true; }
};

CPPUNIT_TEST_SUITE_REGISTRATION(Test<%= name %>);

int main( int ac, char **av )
{
  //--- Create the event manager and test controller
  CPPUNIT_NS::TestResult controller;

  //--- Add a listener that colllects test result
  CPPUNIT_NS::TestResultCollector result;
  controller.addListener( &result );        

  //--- Add a listener that print dots as test run.
  CPPUNIT_NS::BriefTestProgressListener progress;
  controller.addListener( &progress );      

  //--- Add the top suite to the test runner
  CPPUNIT_NS::TestRunner runner;
  runner.addTest( CPPUNIT_NS::TestFactoryRegistry::getRegistry().makeTest() );
  runner.run( controller );

  return result.wasSuccessful() ? 0 : 1;
}