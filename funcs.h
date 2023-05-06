#pragma once
#ifndef funcs
#define funcs

#include "libs.h"
#include "classes.h"

int Sum_Profit(const int min_num = 250, const int max_num = 500) {
	srand(time(NULL));
	return min_num + rand() % (max_num - min_num + 1);
}

int full_Profit() {
	return Sum_Profit() - expenditure();
	std::cout << full_Profit();
}

int Month_rent() {
	int rentPerMonth = rent_rate + ((full_Profit() - Sum_Profit()) * rent_percent);
	if (full_Profit() < Sum_Profit()) { rentPerMonth = rent_rate; }
	return rentPetMonth;
}