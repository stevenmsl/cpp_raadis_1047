#include "solution.h"
#include "util.h"
#include <unordered_set>
#include <numeric>
#include <iterator>
#include <unordered_map>
#include <deque>
#include <string>
#include <sstream>
#include <algorithm>
#include <bitset>
using namespace sol1092;
using namespace std;

/*takeaways
  - use string as a stack
*/

string Solution::remove(const string &S)
{
  string stack;

  for (auto c : S)
    if (!stack.empty() && stack.back() == c)
      /* delete adjacent duplicates */
      stack.pop_back();
    else
      stack.push_back(c);

  return stack;
}