#ifdef ARDUINO
#include <Arduino.h>
#else
// Use shared native Arduino compatibility from config library
#include "../../config/src/compat/native_arduino_compat.hpp"
#endif
#include <unity.h>
#include <enhanced_unity.hpp>

// Define global variables for enhanced Unity framework
bool _serialInitialized = false;

int _enhancedUnityAssertionCount = 0;
int _enhancedUnityAssertionFailureCount = 0;
int _enhancedUnityAssertionFileCount = 0;
int _enhancedUnityAssertionFileFailureCount = 0;
int _enhancedUnityAssertionTotalCount = 0;
int _enhancedUnityAssertionTotalFailureCount = 0;

int _enhancedUnityMethodCount = 0;
int _enhancedUnityMethodFailureCount = 0;
int _enhancedUnityMethodFileCount = 0;
int _enhancedUnityMethodFileFailureCount = 0;
int _enhancedUnityMethodTotalCount = 0;
int _enhancedUnityMethodTotalFailureCount = 0;

int _enhancedUnityTestCount = 0;
int _enhancedUnityTestFailureCount = 0;
int _enhancedUnityFailureCount = 0;

// Linker anchor to ensure this compilation unit is linked
extern "C" void enhancedUnityLinkAnchor() {}
