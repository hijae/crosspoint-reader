#pragma once
#include <BatteryMonitor.h>

#define BAT_GPIO0 0  // Battery voltage (X4 ADC pin)

// Shared battery monitor singleton. Returns a single BatteryMonitor instance
// used by all callers (themes, activities, etc.).
//
// - X4: reads battery voltage via ADC on GPIO0 (default, no extra setup needed)
// - X3: reads SOC from BQ27220 fuel gauge via I2C (call setI2CFuelGauge() after Wire.begin())
BatteryMonitor& battery();
