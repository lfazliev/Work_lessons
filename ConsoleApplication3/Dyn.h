/*#pragma once
#include<iostream>
#ifndef dynarrM
#define dynarrM
class dynarr
{
	int* arr;
	int size;
public:
	dynarr() : size{ 0 }, arr{ nullptr }{};
	dynarr(int size_p) :size{ size_p }, arr{ new int[size_p] }{}
	~dynarr();
	dynarr(dynarr&& sourse);
	int& operator[](int index);
	friend std::ostream& operator<< (std::ostream& outjuj, dynarr& jujy);
};
#endif*/