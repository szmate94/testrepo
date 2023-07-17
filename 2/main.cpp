#include <iostream>

/* ** */
// Clang-format test
int a = 1;
int somelongname = 2;
double c = 3;

int aaaa = 1;
int b = 12;
int ccc = 8;

int aaaa = 12;
float b = 23;
std::string ccc;

/* ** */

double weight{

};

using namespace std;

double add(double a, double b);
int main()
{
    double result = add(10, 3);

    cout << result << endl;
    return 0;
}
// asd
double add(double a, double b)
{
    return a + b;
}

// clang-format off

int     add(    int a, int b){
    return a+           b;
}

// clang-format on