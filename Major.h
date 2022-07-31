#include "skiplist_lib/skiplist.h"

class Major {
 public:
  Major(int max_level);
  ~Major();
  int insert_people
 private:
  int max_level_;
  SkipList<int, std::string> skiplist;
};

Major::Major(int max_level) : max_level_(max_level), skiplist(max_level_) {

}