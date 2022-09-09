#include "temperature.h"

vector<int> createTemperatureValues(int maxTemperature, int minTemperature, int readingCount)
{
    vector<int> temperatureList;
    for(int count = 0; count < readingCount; count++)
    {
        int tempValue = rand() % maxTemperature + minTemperature;
        temperatureList.push_back(tempValue);
    }
    return temperatureList;
}
