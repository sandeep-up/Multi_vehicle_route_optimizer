#include "models.h"
#include <unordered_map>
#include <string>
using namespace std;

int getTravelCost(const string& vehicle, int distance) {
  unordered_map<string,double> rate = {
    {"car",7.0}, {"bike",2.0}, {"truck",10.0}, {"bus",9.0}
  };
  if(rate.count(vehicle)==0) return distance*8;
  return static_cast<int>(distance*rate[vehicle]);
}
