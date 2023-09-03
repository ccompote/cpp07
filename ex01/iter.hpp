#pragma once

#include <iostream>

template <typename T, typename Func>
void iter(T *arr, int l, Func function)
{
	for (int i = 0; i < l; i++)
		function(arr[i]);
}

template <typename T>
void printing(T m)
{
	std::cout << "Hello here " << m << std::endl;
}
