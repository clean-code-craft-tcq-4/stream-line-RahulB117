#ifndef TEMPERATURE_H
#define TEMPERATURE_H

#include <vector>
#include <iostream>
#include <cstdlib>

#define MAX_TEMP 100
#define MIN_TEMP -50

using namespace std;

vector<int> createTemperatureValues(int maxTemperature, int minTemperature, int readingCount);
#endif
