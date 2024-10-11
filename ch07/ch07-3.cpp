#include <iostream>

using namespace std;

struct box{
    char maker[40];
    float length, width, height,volume;
};

box BOX(box b1);

void calculate_volume(box* b1) ;


int main() {
    box b1;
    cout << "Enter the maker of the box: ";
    cin.getline(b1.maker, 40);
    cout << "Enter the length of the box: ";
    cin >> b1.length;
    cout << "Enter the width of the box: ";
    cin >> b1.width;
    cout << "Enter the height of the box: ";
    cin >> b1.height;
    calculate_volume(&b1);
    BOX(b1);
    return 0;
}

box BOX(box b1){
    box b2;
    b2=b1;
    cout << "The maker of the box is: " << b2.maker << endl;
    cout << "The length of the box is: " << b2.length << endl;
    cout << "The width of the box is: " << b2.width << endl;
    cout << "The height of the box is: " << b2.height << endl;
    cout << "The volume of the box is: " << b2.volume << endl;
    return b2;
}

void calculate_volume(box* b1) {
    b1->volume = b1->length * b1->width * b1->height;
}


