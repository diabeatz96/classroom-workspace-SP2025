#include <iostream>

using namespace std;

int main() {
  // Arithmetic Operators
  int a = 10, b = 5;
  cout << "a + b = " << (a + b) << endl; // Output: a + b = 15
  cout << "a - b = " << (a - b) << endl; // Output: a - b = 5
  cout << "a * b = " << (a * b) << endl; // Output: a * b = 50
  cout << "a / b = " << (a / b) << endl; // Output: a / b = 2
  cout << "a % b = " << (a % b) << endl; // Output: a % b = 0

  int x = 5;
  cout << "x++ = " << (x++) << endl; // Output: x++ = 5 (x becomes 6)
  cout << "++x = " << (++x) << endl; // Output: ++x = 7
  cout << "x-- = " << (x--) << endl; // Output: x-- = 7 (x becomes 6)
  cout << "--x = " << (--x) << endl; // Output: --x = 5

  // Assignment Operators
  int y = 10;
  y += 5; // y = y + 5
  cout << "y += 5: " << y << endl; // Output: y += 5: 15
  y -= 3; // y = y - 3
  cout << "y -= 3: " << y << endl; // Output: y -= 3: 12
  y *= 2; // y = y * 2
  cout << "y *= 2: " << y << endl; // Output: y *= 2: 24
  y /= 4; // y = y / 4
  cout << "y /= 4: " << y << endl; // Output: y /= 4: 6
  y %= 3; // y = y % 3
  cout << "y %= 3: " << y << endl; // Output: y %= 3: 0

  // Relational Operators
  cout << "(a > b) = " << (a > b) << endl; // Output: (a > b) = 1 (true)
  cout << "(a < b) = " << (a < b) << endl; // Output: (a < b) = 0 (false)
  cout << "(a >= b) = " << (a >= b) << endl; // Output: (a >= b) = 1 (true)
  cout << "(a <= b) = " << (a <= b) << endl; // Output: (a <= b) = 0 (false)
  cout << "(a == b) = " << (a == b) << endl; // Output: (a == b) = 0 (false)
  cout << "(a != b) = " << (a != b) << endl; // Output: (a != b) = 1 (true)

  // Logical Operators
  bool p = true, q = false;
  cout << "(p && q) = " << (p && q) << endl; // Output: (p && q) = 0 (false)
  cout << "(p || q) = " << (p || q) << endl; // Output: (p || q) = 1 (true)
  cout << "(!p) = " << (!p) << endl; // Output: (!p) = 0 (false)

  return 0;
}