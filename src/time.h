#ifndef TIME_H_INCLUDED
#define TIME_H_INCLUDED

#include <iostream>
#include <unordered_map>
#include <vector>
class Time {
public:
    Time();
    Time(std::string cid, std::string pid, std::string amount);//if first information of this time comes
    std::vector<std::string> split(const std::string& s, char delim);//split pid information
    void setTime(std::string, std::string, std::string);//if this time already has information, update it
    void insertToCMap(std::string);//update this cid_count and c_count
    void insertToPMap(std::string);//update this cid_count and c_count
    float getCMap(std::string s) { return c_map[s]; }//return the probability of this cid
    float getPMap(std::string s) { return p_map[s]; }//return the probability of this pid
    std::unordered_map<std::string, float> getCMap(){return c_map;}
    std::unordered_map<std::string, float> getPMap(){return p_map;}

    void cal_probability();  // normalize the count to probability
private:
    std::unordered_map<std::string, float> c_map;//first:cidName, second:(numsOfCid/c_count)
    std::unordered_map<std::string, float> p_map;//first:cidName, second:(numsOfPid/p_count)
    int c_count;//total number of cid
    int p_count;//total number of pid
};

#endif // TIME_H_INCLUDED
