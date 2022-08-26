#include<iostream>
#include<algorithm>
#include<cstring>
#include<random>
#include<windows.h>
using namespace std;
typedef long long ll;

default_random_engine e;

inline ll r(ll a, ll b){
	return uniform_int_distribution<int>(a, b)(e);
}

int main(){
	e.seed(GetTickCount());
	
	// Start here. You can use r(a, b) to get a random integer in [a, b].
}