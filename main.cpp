// c++14
#include <iostream>
//  remove_if, sort, min, max, reverse,  merge, binary_search, is_sorted, unique, replace_if, count, push_heap, pop_heap, make_heap
#include <algorithm>
#include <vector>
// .push, .pop, .front, .back
#include <queue>
// .front, .back, .push_back, push_front, pop_back, pop_front, .at (slow)
#include <deque>
// map<string, int> m; m["x"] = 2; auto it = m.find("x"); it != m.end(); it->second; m.erase(it); m.erase("x");
#include <map>
// can take custom binary cmp function, 
// set<string> a; a.insert("f"); set<string>iterator it = a.find("f); it != a.end(); *it; a.erase("f");
#include <set> 
#include <cstdio> // printf, scanf // scanf("%d", &i); // read integer
#include <stdlib.h>
#include <assert.h> // assert
#include <utility> // pair, make_pair
#include <functional>
#include <string> 
#include <stack> // .pop .push .size .top .empty
#include <math.h> // cos, sin, tan, acos, asin, atan2, exp, log, log10, log2, pow, sqrt, hypot, cell, floor, round, fabs, abs

using namespace std;

#define SCD(t) scanf("%d", &t)
#define SCLLD(t) scanf("%d", &t)
#define MOD 1000000007
#define INF (int)1e9
#define EPS 1e-9
#define MP make_pair
#define PB push_back

typedef pair<int, int> PII; // first, second
typedef vector<int> VI;
typedef vector<string> VS;
typedef vector<VI> VVI;
typedef map<int,int> MPII;

/*
   
struct Point {
    // Member variables can be given default values in this manner.
    double x = 0;
    double y = 0;

    // Define a default constructor which does nothing
    // but initialize the Point to the default value (0, 0)
    Point() { };

    // The following syntax is known as an initialization list
    // and is the proper way to initialize class member values
    Point (double a, double b) :
        x(a),
        y(b)

    // Overload the + operator.
    Point operator+(const Point& rhs) const;

    // Overload the += operator
    Point& operator+=(const Point& rhs);

    // It would also make sense to add the - and -= operators,
    // but we will skip those for brevity.
};

Point Point::operator+(const Point& rhs) const {
    // Create a new point that is the sum of this one and rhs.
    return Point(x + rhs.x, y + rhs.y);
}

Point& Point::operator+=(const Point& rhs) {
    x += rhs.x;
    y += rhs.y;
    return *this;
}
*/


// put globals here
int W;
int H;
VVI field;

// build with: g++ main.cpp -o main -std=c++14
// cat test.txt | ./main > test.out

int main() {
    // read input
    SCD(H);
    SCD(W);

    field = VVI(H, VI(W)); // H x W

    for (int i = 0; i < H; ++i) {
        for (int j = 0; j < W; ++j) {
            SCD(field[i][j]);
        }
    }

    // put your solution here

    for (int i = 0; i < H; ++i) {
        for (int j = 0; j < W; ++j) {
            cout << field[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}

