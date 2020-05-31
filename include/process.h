#ifndef PROCESS_H
#define PROCESS_H

#include <string>
/*
Basic class for Process representation
It contains relevant attributes as shown below
*/
class Process {
 public:
  Process(const int);  
  int Pid();                               
  std::string User();                      
  std::string Command();                   
  float CpuUtilization();                  
  std::string Ram();                       
  long int UpTime();                       
  bool operator>(Process const& a) const;  

 private:
    int pid_ = 0;
    std::string user_ = "";
    std::string command_ = "";
    float cpuUsage_ = 0;
    enum processInfoElem {
        utime_ = 0, 
        stime_, 
        cutime_, 
        cstime_, 
        starttime_
    };
};

#endif