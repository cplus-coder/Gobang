#pragma once

using namespace std;
template<class T>
int length(T& arr)
{
		return sizeof(arr) / sizeof(arr[0]);
}
