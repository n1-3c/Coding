unsigned long long factorial(int n) {
    unsigned long long fact = 1;
    for (int i = 1; i <= n; ++i) {
        fact *= i;
    }
    return fact;
}

unsigned long long nCr(int n, int r) {
    return factorial(n) / (factorial(r) * factorial(n - r));
}

unsigned long long nPr(int n, int r) {
    return factorial(n) / factorial(n - r);
}

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

unsigned long long lcm(int a, int b) {
    return (a / gcd(a, b)) * b;
}

bool isPrime(int n) {
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    }
    return true;
}

bool isPalindrome(int n) {
    int original = n;
    int reversed = 0;
    while (n > 0) {
        reversed = reversed * 10 + n % 10;
        n /= 10;
    }
    return original == reversed;
}

int find_mex(const std::vector<int>& vec) {
    std::unordered_set<int> unique_elements(vec.begin(), vec.end());
    int mex = 0;
    while (unique_elements.find(mex) != unique_elements.end()) {
        mex++;
    }
    return mex;
}

/*

C++ provides a wide range of mathematical functions through the <cmath> header (which includes the C math library) and other specialized libraries for various mathematical operations. Here are some of the key categories and functions available in C++:

Basic Mathematical Functions:

abs(int n): Returns the absolute value of an integer.
fabs(double x): Returns the absolute value of a floating-point number.
ceil(double x): Rounds up to the nearest integer.
floor(double x): Rounds down to the nearest integer.
round(double x): Rounds to the nearest integer.
trunc(double x): Truncates the decimal part, keeping only the integer part.
fmod(double x, double y): Returns the remainder of the division of x by y.
modf(double x, double* intpart): Breaks down x into its integer and fractional parts.

Trigonometric Functions:

sin(double x): Computes the sine of x (in radians).
cos(double x): Computes the cosine of x (in radians).
tan(double x): Computes the tangent of x (in radians).
asin(double x): Computes the arc sine of x.
acos(double x): Computes the arc cosine of x.
atan(double x): Computes the arc tangent of x.
atan2(double y, double x): Computes the arc tangent of y / x.
Exponential and Logarithmic Functions:
exp(double x): Computes the exponential function of x (e^x).
exp2(double x): Computes 2 raised to the power of x.
log(double x): Computes the natural logarithm of x.
log10(double x): Computes the base-10 logarithm of x.
log2(double x): Computes the base-2 logarithm of x.
expm1(double x): Computes e^x - 1.
log1p(double x): Computes the natural logarithm of 1 + x.

Power Functions:

pow(double base, double exponent): Raises base to the power of exponent.
sqrt(double x): Computes the square root of x.
cbrt(double x): Computes the cube root of x.
hypot(double x, double y): Computes the hypotenuse of a right-angled triangle given sides x and y.

Hyperbolic Functions:

sinh(double x): Computes the hyperbolic sine of x.
cosh(double x): Computes the hyperbolic cosine of x.
tanh(double x): Computes the hyperbolic tangent of x.
asinh(double x): Computes the inverse hyperbolic sine of x.
acosh(double x): Computes the inverse hyperbolic cosine of x.
atanh(double x): Computes the inverse hyperbolic tangent of x.
Special Mathematical Functions:
tgamma(double x): Computes the gamma function.
lgamma(double x): Computes the natural logarithm of the absolute value of the gamma function.

*/
