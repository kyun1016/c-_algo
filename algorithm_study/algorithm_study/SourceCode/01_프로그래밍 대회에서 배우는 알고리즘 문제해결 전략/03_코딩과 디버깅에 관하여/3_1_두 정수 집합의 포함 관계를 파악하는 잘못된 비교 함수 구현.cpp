#include<iostream>
#include<algorithm>
#include "integerset.h"
#include <cstring>
#include <cstdlib>

// a가 b의 진부분집합이면 true, 아니면 false를 반환한다.
bool isProperSubset(const IntegerSet& a, const IntegertSet& b);
// a가 b의 