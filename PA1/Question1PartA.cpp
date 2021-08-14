#include <iostream>
#include <string>
using namespace std;

const_iterator operator+ (int k) const{
	const_iterator old = *this;
	for(int i=1; i<=k; ++i){
		++(*this);
	}
	return old;
}