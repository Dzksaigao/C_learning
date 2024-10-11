//以度分秒的形式输入一个纬度，然后以度为单位输出，以符号常量表示单位转换；

#include <iostream>
using namespace std;
const int MIN_PER_DEG = 60;
const int SEC_PER_MIN = 60;

int main() 
{
    double deg, min, sec;
    cout << " Enter a latitude in degrees, minutes, ans seconds: " << endl ;
    cout << " First, enter the degrees: " ;
    cin >> deg;
    cout << " Next, enter the minutes of arc: ";
    cin >> min;
    cout << " Finally, enter the seconds of arc: ";
    cin >> sec;
    double lat = deg + min/MIN_PER_DEG + sec/SEC_PER_MIN/MIN_PER_DEG;
    cout << deg << " degrees, " << min << " minutes, " << sec << " seconds = " << lat << "degrees" << endl ;
    return 0;
}
