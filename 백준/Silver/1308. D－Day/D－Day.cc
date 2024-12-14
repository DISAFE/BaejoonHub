#include <iostream>

int main() {
	int sDay[3], dDay[3], day = 0;
	std::cin >> sDay[0] >> sDay[1] >> sDay[2] >> dDay[0] >> dDay[1] >> dDay[2];

	if ((sDay[0] + 1000 < dDay[0]) or
		(sDay[0] + 1000 == dDay[0] and sDay[1] < dDay[1]) or
		(sDay[0] + 1000 == dDay[0] and sDay[1] == dDay[1] and sDay[2] <= dDay[2])) //case 'gg'
	{
		std::cout << "gg";
	}
	else //case D-day
	{
		switch (sDay[1])
		{
		case 1:
			day += 31;
		case 2:
			if (sDay[0] % 400 == 0 or (sDay[0] % 4 == 0 and sDay[0] % 100 != 0))
			{
				day += 29;
			}
			else
			{
				day += 28;
			}
		case 3:
			day += 31;
		case 4:
			day += 30;
		case 5:
			day += 31;
		case 6:
			day += 30;
		case 7:
			day += 31;
		case 8:
			day += 31;
		case 9:
			day += 30;
		case 10:
			day += 31;
		case 11:
			day += 30;
		case 12:
			day += 31;
		default:
			day -= sDay[2];
		}

		for (int curYear = sDay[0] + 1; curYear < dDay[0]; curYear++)
		{
			day += (curYear % 400 == 0 or (curYear % 4 == 0 and curYear % 100 != 0)) ? 366 : 365;
		}

		switch (dDay[1] - 1)
		{
		case 12:
			day += 31;
		case 11:
			day += 30;
		case 10:
			day += 31;
		case 9:
			day += 30;
		case 8:
			day += 31;
		case 7:
			day += 31;
		case 6:
			day += 30;
		case 5:
			day += 31;
		case 4:
			day += 30;
		case 3:
			day += 31;
		case 2:
			if (sDay[0] % 400 == 0 or sDay[0] % 4 == 0 and sDay[0] % 100 != 0)
			{
				day += 29;
			}
			else
			{
				day += 28;
			}
		case 1:
			day += 31;
		default:
			day += dDay[2];
		}

		if (sDay[0] == dDay[0])
		{
			day -= (sDay[0] % 400 == 0 or sDay[0] % 4 == 0 and sDay[0] % 100 != 0) ? 366 : 365;
		}

		std::cout << "D-" << day;
	}
}