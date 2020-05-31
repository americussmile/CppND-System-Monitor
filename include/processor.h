
#ifndef PROCESSOR_H
#define PROCESSOR_H

#include <vector> 

class Processor {
    public:
        float Utilization();  

    private:
        std::vector<float> previous_cpu_elements = {};
        float IdleTime(const std::vector<float>);
        float NonIdleTime(const std::vector<float>);
};

#endif