#include <vector>
#include <unordered_map>
#include <memory.h>
#include "Major.h"

class Major;
const int MAJOR_NUMS = 71;
class Academy {
 public:
  Academy();
  ~Academy();
 private:
  void majorMpInit();
  std::vector<Major*> majors; 
  static std::unordered_map<int, int >major_mp;
  //学科编号 index
};

Academy::Academy() : majors(MAJOR_NUMS) {
 majorMpInit(); 
}

void Academy::majorMpInit() {
  major_mp[101] = 0;
  major_mp[201] = 1;
  major_mp[202] = 2;
  major_mp[301] = 3;
  major_mp[302] = 4;
  major_mp[303] = 5;
  major_mp[304] = 6;
  major_mp[305] = 7;
  major_mp[306] = 8;
  major_mp[401] = 9;
  major_mp[402] = 10;
  major_mp[403] = 11;
  major_mp[501] = 13;
  major_mp[502] = 14;
  major_mp[503] = 15;
  major_mp[601] = 16;
  major_mp[602] = 17;
  major_mp[603] = 18;
  major_mp[701] = 19;
  major_mp[702] = 20;
  major_mp[703] = 21;
  major_mp[704] = 22;
  major_mp[705] = 23;
  major_mp[706] = 24;
  major_mp[707] = 25;
  major_mp[708] = 26;
  major_mp[709] = 27;
  major_mp[7010] = 28;
  major_mp[7011] = 29;
  major_mp[7012] = 30;
  major_mp[7013] = 31;
  major_mp[7014] = 32;
  major_mp[801] = 33;
  major_mp[802] = 34;
  major_mp[803] = 35;
  major_mp[804] = 36;
  major_mp[805] = 37;
  major_mp[806] = 38;
  major_mp[807] = 39;
  major_mp[808] = 40;
  major_mp[809] = 41;
  major_mp[8010] = 42;
  major_mp[8011] = 43;
  major_mp[8012] = 44;
  major_mp[8013] = 45;
  major_mp[8014] = 46;
  major_mp[8015] = 47;
  major_mp[8016] = 48;
  major_mp[8017] = 49;
  major_mp[8018] = 50;
  major_mp[8019] = 51;
  major_mp[8020] = 52;
  major_mp[8021] = 53;
  major_mp[8022] = 54;
  major_mp[8023] = 55;
  major_mp[8024] = 56;
  major_mp[8025] = 57;
  major_mp[8026] = 58;
  major_mp[8027] = 59;
  major_mp[8028] = 60;
  major_mp[8029] = 61;
  major_mp[8030] = 62;
  major_mp[8031] = 63;
  major_mp[8032] = 64;
  major_mp[8033] = 65;
  major_mp[8034] = 66;
  major_mp[8035] = 67;
  major_mp[8036] = 68;
  major_mp[8037] = 69;
  major_mp[8038] = 70;
}
