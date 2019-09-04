using namespace std;
int main() {
double mySqrt(double v, double test) {
    if (abs(test * test - v) < 0.0001) {
        return test;
    }
}
    double highOrLow = v / test;
    return mySqrt(v, (test + highOrLow) / 2.0);
}
double mySqrt(double v) {
    return mySqrt(v, v/2.0);
}
}
