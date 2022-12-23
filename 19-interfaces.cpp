#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

class AdvancedArithmetic{
    public:
        virtual int divisorSum(int n)=0;
};

class Calculator : public AdvancedArithmetic {
public:
    int divisorSum(int n) {
        int sum = 0;
        for (int i=1; i<=n; i++) {
            sum += ( (n%i) == 0 ) ? i : 0;
        }
        return sum;
    }
};

int main(){
    int n;
    cin >> n;
    AdvancedArithmetic *myCalculator = new Calculator(); 
    int sum = myCalculator->divisorSum(n);
    cout << "I implemented: AdvancedArithmetic\n" << sum;
    return 0;
}


/*
## What is "virtual" and what is "=0"?
the "=0" identify a pure virtual function that makes AdvancedArithmetic
a class that cannot be instantiated. 
What it required is for you to create a class that inherit from 
AdvancedArithmetic and that implement the virtual function. 
This is often done for "interface classes". in this case Calculate is an
interface.
*/