#include <iostream>
#include <cstdlib>
#include <ctime>

#define size 3
using namespace std;

class Matrix{
    int n, m;
    int M[size][size];

public:
    // constructors
    Matrix();
    Matrix(int a, int b);

    void setValue(int i, int j, int value);
    int getValue(int i, int j);
    int get_m() const{ return m; }
    int get_n() const{ return n; }

    Matrix transpose();
    void show();

    friend Matrix operator+(Matrix, Matrix);
    friend Matrix operator*(Matrix, Matrix);
    friend bool operator==(Matrix, Matrix);
};