#pragma once
#include <iostream>
template <typename F, typename S>
class GenericPair
{
private:
	F first;
	S second;

public:
	GenericPair(F first, S second) : first(first), second(second) {}
	~GenericPair() {}

	//This method can be outside method too just needs name identifier
	//friend breaks encapsulation i.e. makes all fields public for this method
	friend std::ostream& operator<<(std::ostream& os, const GenericPair& other)
	{
		os << other.first << "," << other.second;
		return os;
	}
};

//wouldn't work - link error so deleted .ccp file - didn't work
//template <typename F, typename S>
//std::ostream& operator<<(std::ostream& os, const GenericPair<F, S>& other)
//{
//	os << other.first << "," << other.second;
//	return os;
//}