//#include"rb_tree_node.h"
#include<iostream>
#include<vector>
#include<set>
#include "s21_set.h"
using namespace std;
int main() {
    s21::Set<double> s1 = {1, 2, 3, 4, 5, 6, 7, 8};
    std::set<double> s2 = {1, 2, 3, 4, 5, 6, 7, 8};
    std::cout << s1.size() << " " << s2.size() << std::endl;
    s1.erase(s1.begin());
    s2.erase(s2.begin());
    std::cout << s1.size() << " " << s2.size() << std::endl;
//    EXPECT_ANY_THROW(s1.erase(s1.end()));
  //  for (auto it2 = s2.begin(); it2 != s2.end(); it1++, it2++)
    //    std::cout << (*it1) << " " << (*it2)<< std::endl;
      //  std::cout << s1.size() << " " << s2.size() << std::endl;
//        std::cout << s11.size() << " " << s22.size() << std::endl;
    return 0;
}