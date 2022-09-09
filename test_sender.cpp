#define CATCH_CONFIG_MAIN
#include "test/catch.hpp"
#include <vector>
#include <iostream>
#include "temperature.h"
#include "charge.h"
#include "sendData.h"

using namespace std;

TEST_CASE("To check if createTemperatureValues() generates precisely the number of values set by macro TOTAL_ALLOWABLE_READINGS. In this case, 50 values") 
{
    vector<int> temperatureData = createTemperatureValues(MAX_TEMP, MIN_TEMP, TOTAL_ALLOWABLE_READINGS);
    int temperatureDataSize = temperatureData.size();
    REQUIRE(temperatureDataSize == TOTAL_ALLOWABLE_READINGS);
}

TEST_CASE("To check if createChargeValues() generates precisely the number of values set by macro TOTAL_ALLOWABLE_READINGS. In this case, 50 values") 
{
    vector<int> chargeData = createChargeValues(MAX_CHARGE, MIN_CHARGE, TOTAL_ALLOWABLE_READINGS);
    int chargeDataSize = chargeData.size();
    REQUIRE(chargeDataSize == TOTAL_ALLOWABLE_READINGS);
}
