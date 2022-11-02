#ifndef COMPARE_H_
#define COMPARE_H_
#include <utility>
namespace s21 {
template <typename C>
struct Compare {
  bool lt(const C &x, const C &y) const { return x < y; }
  bool gt(const C &x, const C &y) const { return x > y; }
  bool le(const C &x, const C &y) const { return x <= y; }
  bool ge(const C &x, const C &y) const { return x >= y; }
  bool eq(const C &x, const C &y) const { return x == y; }
  bool neq(const C &x, const C &y) const { return x != y; }
};
template <typename E, typename F>
struct Pair_compare {
  bool lt(const std::pair<E, F> &x, const std::pair<E, F> &y) const {
    return x.first < y.first;
  }

  bool gt(const std::pair<E, F> &x, const std::pair<E, F> &y) const {
    return x.first > x.first;
  }

  bool le(const std::pair<E, F> &x, const std::pair<E, F> &y) const {
    return x.first <= x.first;
  }

  bool ge(const std::pair<E, F> &x, const std::pair<E, F> &y) const {
    return x.first >= x.first;
  }

  bool eq(const std::pair<E, F> &x, const std::pair<E, F> &y) const {
    return x.first == x.first;
  }

  bool neq(const std::pair<E, F> &x, const std::pair<E, F> &y) const {
    return x.first != x.first;
  }
};
}  // namespace s21
#endif  // COMPARE_H_