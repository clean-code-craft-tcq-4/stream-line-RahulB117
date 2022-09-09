#include "charge.h"

vector<int> createChargeValues(int maxCharge, int minCharge, int readingCount)
{
    vector<int> chargeList;
    for(int count = 0; count < readingCount; count++)
    {
        int tempValue = rand() % maxCharge + minCharge;
        chargeList.push_back(tempValue);
    }
    return chargeList;
}
