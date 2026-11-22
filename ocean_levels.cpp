#include <iostream>
using namespace std;

int main() {

    // Declare the yearly rise in ocean levels and calculate the rise over 5, 7, and 10 years
    const float YEARLY_RISE = 1.5;
    const float five_year_rise = YEARLY_RISE * 5;
    const float seven_year_rise = YEARLY_RISE * 7;
    const float ten_year_rise = YEARLY_RISE * 10;

    // Output the results
    cout << "The ocean level will rise " << five_year_rise << " millimeters in 5 years." << endl;
    cout << "The ocean level will rise " << seven_year_rise << " millimeters in 7 years." << endl;
    cout << "The ocean level will rise " << ten_year_rise << " millimeters in 10 years." << endl;
    
    return 0;
}
