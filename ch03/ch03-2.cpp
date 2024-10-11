//以英尺英寸为单位输入身高，以磅为单位输入体重，计算BMI并输出，将身高从英寸转化为米（1英寸=0.0254米），体重转化为千克（1千克=2.2磅）；BMI=体重（千克）/身高（米）^2

#include <iostream>

using namespace std;

const double INCH_TO_METER = 0.0254;
const double LB_TO_KG = 2.2;
const double FEET_TO_INCH = 12;

int main() 
{
    double height_inch,height_feet,height_meter,weight_lb,weight_kg,bmi;
    cout << " Enter your height in feet and inches: " << endl ;
    cout << " Feet: ";
    cin >> height_feet;
    cout << " Inches: ";
    cin >> height_inch;
    height_meter = (height_feet * FEET_TO_INCH + height_inch )* INCH_TO_METER;
    cout << " Enter your weight in pounds: " ;
    cin >> weight_lb;
    weight_kg = weight_lb * LB_TO_KG;
    bmi = weight_kg / (height_meter * height_meter);
    cout << " Your BMI is : " << bmi << endl ;
    return 0;
}
