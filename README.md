enhancedUnity

Non-terminating Unity assertion macros with rich per-assertion, per-method, per-file, and final summaries for PlatformIO/Arduino projects.

Features:
- Non-terminating TEST_ASSERT_*_DEBUG macros (continue after failures)
- Verbosity control: assertions, methods, files, summary
- Safe Serial init guard for embedded targets
- Compatibility alias: UNITY_TEST_ASSERT_GREATER_THAN_UINT32
- Extra comparisons: GE/LE for uint32, greater/less than, equality, strings, null

Quick start (PlatformIO):
1. Add this library to lib/ or as a dependency.
2. Include header in tests:
   #include <enhanced_unity.hpp>
3. Use macros in your tests:
   ENHANCED_UNITY_START_TEST_METHOD("my_test", __FILE__, __LINE__);
   TEST_ASSERT_EQUAL_UINT32_DEBUG(42, value);
   ENHANCED_UNITY_END_TEST_METHOD();
4. Print final summary once per run:
   ENHANCED_UNITY_FINAL_SUMMARY();

Configuration:
- Define ENHANCED_UNITY_VERBOSITY (default: VERBOSITY_FAILING_ASSERTIONS).
- Define USE_BASELINE_UNITY to fall back to stock Unity macros.

License: MIT
