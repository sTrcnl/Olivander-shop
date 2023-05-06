#pragma once
#ifndef classes
#define classes

#include "libs.h"
#include "funcs.h"

class BranchFinances {
public:
	BranchFinances() {}
	~BranchFinances() {}

	int Sum_Profit(const int min_num = 250, const int max_num = 500) {}
	int expenditure() { return rent_employ + rent_rate + rent_guards; }
	int full_Profit() {}
	int Month_rent() {}
	void expenditurePrint() { std::cout << expenditure(); }
private:
	const int rent_rate = 50, sum_profit = 270, rent_employ = 35,
		rent_guards = 15, rent_percent = 7;
};

class NewBranch : public BranchFinances {
public:
	NewBranch(std::string BranchName) {}
	~NewBranch() {}
private:
	std::string BranchName;
};

#endif
