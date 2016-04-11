#include <iostream>

using namespace std;

void calculateIntersects();
int gcd(int x, int y);

int main() {
  unsigned int n;
  cout << "Enter the number of tests: ";
  cin >> n;
  for (unsigned int i = 0; i < n; i++) {
    calculateIntersects();
  }
}

void calculateIntersects() {
  unsigned int rows, cols;
  cout << "Enter a width: ";
  cin >> cols;
  cout << "Enter a height: ";
  cin >> rows;
  cout << "Number of intersecting squares: "
       << (rows + cols - gcd(rows, cols)) << endl;
}

int gcd(int x, int y) {
  // non-recursive gcd algorithm
  if ( y > x ) {
    int temp = x;
    x = y;
    y = temp;
  }
  for (int i = y; i > 0; i--) {
    if ((x % i == 0) && (y % i == 0)) {
      return i;
    }
  }
  return 0; // For completeness
}
