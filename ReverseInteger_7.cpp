#include <iostream>
#include <cmath>
#include <math.h>
#include <vector>

using namespace std;

int main() {

}

class Solution {
public:
    int reverse(int x) {
      int temp = 0;
      while(x != 0) {
        int mod = x % 10;
        if (temp > INT_MAX/10 || (temp == INT_MAX / 10 && mod > 7)) return 0;
        if (temp < INT_MIN/10 || (temp == INT_MIN / 10 && mod < -8)) return 0;
        temp = temp * 10 + mod;
        x = x / 10;
      }
      return temp;
    }
};
