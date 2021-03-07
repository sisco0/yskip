#include "random.hpp"

namespace yskip {

Random::Random() {

  mt_ = std::mt19937(0);
}


Random::Random(const int seed) {

  mt_ = std::mt19937(seed);
}
 

int Random::uniform(const int min, const int max) {

#ifdef __YSKIP_DEBUG__
  assert(min < max);
#endif
  
  return min + mt_()%(max - min);
}



}
