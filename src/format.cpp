#include <string>

#include "format.h"

using std::string;


string Format::ElapsedTime(long seconds[[maybe_unused]]) { 
    const long s = seconds % 60;
    const long m = (seconds / 60) % 60;
    const long h = seconds / 3600;

    std::stringstream result;

    result << std::setfill('0') << std::setw(2) << h << ":";
    result << std::setfill('0') << std::setw(2) << m << ":";  
    result << std::setfill('0') << std::setw(2) << s; 

    return result.str(); 
}