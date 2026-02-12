#include "Battery.h"

// Meyer's singleton — guaranteed single instance across all translation units.
// Constructed with GPIO0 (X4 ADC default). For X3, main.cpp calls
// battery().setI2CFuelGauge() to switch to BQ27220 I2C reads instead.
BatteryMonitor& battery() {
  static BatteryMonitor instance(BAT_GPIO0);
  return instance;
}
