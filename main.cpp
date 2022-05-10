#include <iostream>
#include <vector>
#include <string>
#include <tuple>
#include <unordered_map>
#include "solution.h"
#include "util.h"

using namespace std;
using namespace sol1092;

/*
Input: "abbaca"
Output: "ca"
Explanation:
For example, in "abbaca" we could remove "bb" since
the letters are adjacent and equal, and this is
the only possible move.  The result of this move is that the string
is "aaca", of which only "aa" is possible, so the final string is "ca".
*/

tuple<string, string>
testFixture1()
{
  return make_tuple("abbaca", "ca");
}

void test1()
{
  auto f = testFixture1();
  cout << "Expect to see: " << get<1>(f) << endl;
  Solution sol;
  cout << sol.remove(get<0>(f)) << endl;
}

main()
{
  test1();
  return 0;
}