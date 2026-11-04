#include <iostream>

#include "../include/string.hpp"

using namespace std;
using namespace string;

int main() {
  char name[] = "Andrew";
  char name2[] = "andRRew";
  vToUpperPc(name);
  vToLowerPc(name2);
  cout << name << '\n';
  cout << name2 << '\n';

  char des[] = "hhhhhhhhhhhhhh";
  char src[] = "Messiiiiiii";

  cout << iCompareStringPcPc(des, src) << '\n';
  // cout << src << '\n';

  iCopyStringPcPc(src, des);
  cout << des << '\n';
  cout << src << '\n';

  cout << iCompareStringPcPc(des, src) << '\n';

  // cout << &des << ' ' << &des[0] << '\n';
  // cout << &src << ' ' << &src[0] << '\n';

  return 0;
}