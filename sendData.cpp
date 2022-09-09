#include "sendData.h"

bool transferDataToConsole()
{
    bool transferSuccess = false;
    vector<int> temperatureData = createTemperatureValues(MAX_TEMP, MIN_TEMP, TOTAL_ALLOWABLE_READINGS);
    vector<int> chargeData = createChargeValues(MAX_CHARGE, MIN_CHARGE, TOTAL_ALLOWABLE_READINGS);
    if((temperatureData.size() == TOTAL_ALLOWABLE_READINGS) && (chargeData.size() == TOTAL_ALLOWABLE_READINGS))
    {
        for(int count = 0; count < TOTAL_ALLOWABLE_READINGS; count ++)
        {
            cout << temperatureData[count]<< "," << chargeData[count] <<endl;
        }
        transferSuccess = true;
    }
    return transferSuccess;

}

int main()
{
    bool status;
    status = transferDataToConsole();
    cout << status << endl;
    return 0;
}
