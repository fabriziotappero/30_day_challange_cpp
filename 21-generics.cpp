/*
HACKER RANK Day 21

Write a single generic function named printArray. this 
function must take an array of generic elements as a 
parameter (the exception to this is C++, which takes 
a vector). The locked Solution class in your editor 
tests your function.
*/

#include <bits/stdc++.h>
using namespace std;


template <typename T>

void printArray(std::vector<T> din)
{
    for(auto i: din){
        cout << i << "\n";
    }
}

int main() {
	int n;
	
	cin >> n;
	vector<int> int_vector(n);
	for (int i = 0; i < n; i++) {
		int value;
		cin >> value;
		int_vector[i] = value;
	}
	
	cin >> n;
	vector<string> string_vector(n);
	for (int i = 0; i < n; i++) {
		string value;
		cin >> value;
		string_vector[i] = value;
	}

	printArray<int>(int_vector);
	printArray<string>(string_vector);

	return 0;
}