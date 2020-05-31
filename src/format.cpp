#include <string>

#include "format.h"

using std::string;

// INPUT: Long int measuring seconds
// OUTPUT: HH:MM:SS
string Format::ElapsedTime(const long seconds) { 
    const int h = seconds/3600;
    const int m = (seconds - h*3600)/60;
    const int s = seconds - h*3600 - m*60;
    std::string elapsedTime = PadZeroInts(h) + ":" + PadZeroInts(m) + ":" + PadZeroInts(s);
    return elapsedTime; 
}

std::string Format::PadZeroInts(const int x) {
    std::string str = std::to_string(x);
    while(str.length() < 2) {
        str = "0" + str;
    }
    return str;
}