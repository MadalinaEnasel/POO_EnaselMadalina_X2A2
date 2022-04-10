#include "NumberList.h"
#include <iostream>

int main()
{
	NumberList exemplu;
	exemplu.Init();
	exemplu.Add(12);
	exemplu.Add(1);
	exemplu.Add(2);
	exemplu.Add(126);
	exemplu.Add(412);
	exemplu.Print();
	exemplu.Sort();
	exemplu.Print();
	return 0;
}