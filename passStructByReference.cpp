
// how to return multiple stuff from a function? Better use a struct
// please see min 4:47 of  https://www.youtube.com/watch?v=i_wDa2AS_8w 

#include <bits/stdc++.h>
using namespace std;

struct Mem
	{
		int a=34;
		int b=21;
		std::string c="hi there";
	};

void double4me(Mem& m){
	m.a = m.a *2;
}

int main() {

	Mem mem1;

	cout << mem1.a << "\n";
	double4me(mem1);
	cout << mem1.a << "\n";
	
	cout << "done!\n";
	return 0;
}

