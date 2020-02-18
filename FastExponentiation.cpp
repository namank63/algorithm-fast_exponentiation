//Fast Exponentiation

#include<bits/stdc++.h>

using namespace std;

int power(int number, int exponent) { //function to calculate power
    if (exponent == 1) return number; //base case for num^1 = num
    if (exponent == 0) return 1; //base case for num^0 = 1
    int r = power(number, exponent / 2); //calculating r = num^(expo/2)
    if (exponent % 2 == 0) return r * r; //return r*r in case of even exponent
    else return r * r * number; //return r*r*num in case of odd exponent
}

int main() {
    int number, exponent;
    cin >> number >> exponent;
    cout << power(number, exponent);
    return 0;
}