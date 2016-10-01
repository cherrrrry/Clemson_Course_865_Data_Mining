#ifndef UTILS_H_INCLUDED
#define UTILS_H_INCLUDED

#include "fileIO.h"
#include <unordered_map>
#include <cstdlib>

class Utils {// get informations from index.csv
public:
    static Utils& getInstance(std::string file);
    vector<std::string> getVector() const;
    unordered_map<std::string, int> getTMap();
    unordered_map<std::string, int> getMapping();
    int getLabelNum() const {return labelNum;}
    int getCatNum() const { return cat_num; }
    int getProNum() const { return pro_num; }
    int getTMax() const { return tMax; } 
    int getFeatureDim()const {return (cat_num+pro_num)*(tMax);}
private:
    Utils(std::string file);
    //static Utils& instance;
    fileIO& fr;
    std::string fileName;
    int labelNum; //total number of labels
    int tMax; //total number of time zones
    int cat_num;//total number of cids
    int pro_num;//total number of pids
    vector<string> vec;//stores cids and pids in order
    unordered_map<std::string, int> mapping;
};

#endif // UTILS_H_INCLUDED
