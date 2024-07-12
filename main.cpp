#include <algorithm>
#include <bit>
#include <chrono>
#include <cmath>
#include <cstdint>
#include <deque>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <numeric>
#include <queue>
#include <ranges>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <tuple>
#include <utility>
#include <vector>

using namespace std;

using ll = int64_t;
using vl = vector<ll>;

map<string, ll> table{{"Poblano", 1500},  {"Mirasol", 6000},
                      {"Serrano", 15500}, {"Cayenne", 40000},
                      {"Thai", 75000},    {"Habanero", 125000}};

int main() {
  ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  ll t;
  cin >> t;
  auto ans = ll{0};
  while (0 < (t--)) {
    string s;
    cin >> s;
    ans += table[s];
  }
  cout << ans;

  return 0;
}