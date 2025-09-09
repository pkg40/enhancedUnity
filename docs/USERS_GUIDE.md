enhancedUnity User's Guide

Overview
- Purpose: Provide non-terminating Unity assertions with rich reporting.
- Targets: PlatformIO + Arduino cores (ESP32, AVR, etc.).

Installation
- Copy this folder into your PlatformIO project's lib/ directory as lib/enhancedUnity.
- Or add as a git submodule.

Usage
- Include header in test files:
  - #include <enhanced_unity.hpp>
- Wrap each test method:
  - ENHANCED_UNITY_START_TEST_METHOD("name", __FILE__, __LINE__);
  - ... assertions ...
  - ENHANCED_UNITY_END_TEST_METHOD();
- Wrap each test file:
  - ENHANCED_UNITY_START_TEST_FILE("Suite Name", "filename.hpp");
  - register/run tests
  - ENHANCED_UNITY_END_TEST_FILE("Suite Name", "filename.hpp");
- Final summary:
  - ENHANCED_UNITY_FINAL_SUMMARY();

Key Macros
- TEST_ASSERT_EQUAL_UINT32_DEBUG, TEST_ASSERT_EQUAL_UINT8_DEBUG
- TEST_ASSERT_GREATER_THAN_UINT32_DEBUG, TEST_ASSERT_LESS_THAN_UINT32_DEBUG
- TEST_ASSERT_LE_UINT32_DEBUG, TEST_ASSERT_GE_UINT32_DEBUG
- TEST_ASSERT_TRUE_DEBUG, TEST_ASSERT_FALSE_DEBUG
- TEST_ASSERT_NOT_EQUAL_DEBUG, TEST_ASSERT_LESS_THAN_DEBUG, TEST_ASSERT_GREATER_THAN_DEBUG
- RUN_TEST_DEBUG

Configuration
- ENHANCED_UNITY_VERBOSITY: VERBOSITY_ALL_ASSERTIONS..VERBOSITY_MINIMAL
- USE_BASELINE_UNITY: define to use stock Unity behavior

Serial Initialization
- Use ENHANCED_UNITY_INIT_SERIAL() once to guard Serial.begin().

Compatibility
- UNITY_TEST_ASSERT_GREATER_THAN_UINT32 alias is provided.

License
- MIT
