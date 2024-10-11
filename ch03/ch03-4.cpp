//整数方式输入秒，用long或long long储存，然后以天，小时，分钟，秒的方式输出。单位转换以符号常量表示。

#include <iostream>

using namespace std;

const int SECONDS_PER_MINUTE = 60;
const int SECONDS_PER_HOUR = 60 * SECONDS_PER_MINUTE;
const int SECONDS_PER_DAY = 24 * SECONDS_PER_HOUR;

int main() 
{
    long long seconds, seconds_left;
    cout << "Enter the number of seconds: ";
    cin >> seconds;
    seconds_left = seconds;
    int days = seconds_left / SECONDS_PER_DAY;
    seconds_left %= SECONDS_PER_DAY;
    int hours = seconds_left / SECONDS_PER_HOUR;
    seconds_left %= SECONDS_PER_HOUR;
    int minutes = seconds_left / SECONDS_PER_MINUTE;
    seconds_left %= SECONDS_PER_MINUTE;
    cout << seconds << " seconds = " << days << " days, " << hours << " hours, " << minutes << " minutes, " << seconds_left << " seconds." << endl;
    return 0 ;
}
 