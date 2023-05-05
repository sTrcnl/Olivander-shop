#pragma once
#ifndef classes
#define classes
#include "libs.h"

class BranchFinances {
public:
	BranchFinances() {}
	~BranchFinances() {}

	int Sum_Profit(const int min_num = 250, const int max_num = 500) {
		srand(time(NULL));
		return min_num + rand() % (max_num - min_num + 1);
	}
	int expenditure() { return rent_employ + rent_rate + rent_guards; }
	int full_Profit() {
		return Sum_Profit() - expenditure();
		std::cout << full_Profit();
	}

	int Month_rent() {
		int rentPerMonth = rent_rate + ((full_Profit() - Sum_Profit()) * rent_percent);
		if (full_Profit() < Sum_Profit()) { rentPerMonth = rent_rate; }
		return rentPetMonth;
	}
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
