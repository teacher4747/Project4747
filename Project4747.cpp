#include <iostream> 
#include <iomanip>
#include <string>
#include <cstdlib> 
#include <ctime>   



int main()
{
	setlocale(LC_ALL, "RUS");
	/*std::cout << "Здравствуйте, введите расстояние до аэропорта (в км) и время, за которое нужно доехать (в часах) \n";
	double distance = 0;
	std::cin >> distance;
	double time = 0;
	std::cin >> time;
	double speed = (distance / time);
	std::cout << "Вам нужно ехать со скоростью " << speed << " км в ч.";

	std::cout << "Здравствуйте, введите время начала поездки, например 19:45:32 нижe \n";
	int hourse = 0;
	std::cin >> hourse;
	int minutes = 0;
	std::cin >> minutes;
	int seconds = 0;
	std::cin >> seconds;
	std::cout << "Пожалуйста, теперь введите конец поездки точно так же \n";
	int hourse1 = 0;
	std::cin >> hourse1;
	int minutes1 = 0;
	std::cin >> minutes1;
	int seconds1 = 0;
	std::cin >> seconds1;
	int start_time = hourse * 3600 + minutes * 60 + seconds;

	int end_time = hourse1 * 3600 + minutes1 * 60 + seconds1;

	if (end_time < start_time) {
		end_time += 24 * 3600;
	}


	int duration_seconds = end_time - start_time;


	int duration_minutes = (duration_seconds + 59) / 60;


	double tariff_per_minute = 2.0;
	double final_sum = duration_minutes * tariff_per_minute;

	std::cout << "С вас " << final_sum << " гривен";
*/
	using namespace std;
	/*
	double distance, fuelConsumption;
	double price1, price2, price3;


	cout << "Введите расстояние (км): ";
	cin >> distance;

	cout << "Введите расход бензина на 100 км (л): ";
	cin >> fuelConsumption;

	cout << "Введите стоимость первого вида бензина (руб/л): ";
	cin >> price1;

	cout << "Введите стоимость второго вида бензина (руб/л): ";
	cin >> price2;

	cout << "Введите стоимость третьего вида бензина (руб/л): ";
	cin >> price3;


	double totalFuel = (distance * fuelConsumption) / 100.0;


	double cost1 = totalFuel * price1;
	double cost2 = totalFuel * price2;
	double cost3 = totalFuel * price3;


	cout << "\n" << string(60, '=') << endl;
	cout << "СРАВНИТЕЛЬНАЯ ТАБЛИЦА СТОИМОСТИ ПОЕЗДКИ" << endl;
	cout << string(60, '=') << endl;


	cout << left << setw(20) << "Вид бензина"
		<< setw(20) << "Цена (руб/л)"
		<< setw(20) << "Стоимость поездки" << endl;
	cout << string(60, '-') << endl;


	cout << fixed << setprecision(2);
	cout << left << setw(20) << "Бензин 1"
		<< setw(20) << price1
		<< setw(20) << cost1 << " руб." << endl;

	cout << left << setw(20) << "Бензин 2"
		<< setw(20) << price2
		<< setw(20) << cost2 << " руб." << endl;

	cout << left << setw(20) << "Бензин 3"
		<< setw(20) << price3
		<< setw(20) << cost3 << " руб." << endl;

	cout << string(60, '=') << endl;
*/

/*cout << "Здравствуйте, введите целое шестизначное число ниже";
int number = 0;
cin >> number;

if (number > 999999 || number < 100000) {
	cout << "Число должно быть шестизначным";
	return 1;
}
int firstpart = number / 1000;
int secondpart = number % 1000;
int sumFirst = (firstpart / 100) + ((firstpart / 10) % 10) + (firstpart % 10);
int sumSecond = (secondpart / 100) + ((secondpart / 10) % 10) + (secondpart % 10);

// Проверка на счастливое число
if (sumFirst == sumSecond) {
	cout << "Число счастливое!" << endl;
}
else {
	cout << "Число не является счастливым." << endl;
}

string numberStr;


cout << "Введите четырехзначное число: ";
cin >> numberStr;


if (numberStr.length() != 4) {
	cout << "Ошибка! Введите ровно четыре цифры." << endl;
	return 1;
}


for (char c : numberStr) {
	if (!isdigit(c)) {
		cout << "Ошибка! Введены не только цифры." << endl;
		return 1;
	}
}


cout << "\nИсходное число: " << numberStr << endl;


swap(numberStr[0], numberStr[1]);
swap(numberStr[2], numberStr[3]);


cout << "Результат после замены: " << numberStr << endl;

int max = 0;
int number1;
cout << "Введите первое число: ";
cin >> number1;
number1 = max;
for (int i = 0; i < 6; i++) {
	cout << "Введите число: ";
	cin >> number1;
	if (number1 > max) {
		max = number1;
	}
	cout << "Максимальное число: " << max << endl;
}
*/
// Задача 1 
	srand(time(0));
	int nums[10];

	for (int i = 0; i < 10; i++) {
		nums[i] = rand() % 100 + 1;
	}
	cout << "Все числа массива: ";
	for (int i = 0; i < 10; i++) {
		cout << nums[i] << " ";
	}
	cout << endl;

	int min = nums[0];
	int max = nums[0];

	for (int i = 1; i < 10; i++) {
		if (nums[i] < min) min = nums[i];
		if (nums[i] > max) max = nums[i];

	}

	cout << "Минимальный элемент " << min << endl;
	cout << "Максимальный элемент " << max << endl;
	// Задача 2 
	int range_min, range_max;
	cout << "Введите минимальную границу диапазона: ";
	cin >> range_min;
	cout << "Введите максимальную границу диапазона: ";
	cin >> range_max;

	int user_limit;
	cout << "Введите число-границу: ";
	cin >> user_limit;
	int sum = 0;
	int nums1[10];

	for (int i = 0; i < 10; i++) {
		nums1[i] = rand() % (range_max - range_min + 1) + range_min;
	}

	// Выводим массив для наглядности
	cout << "Сгенерированный массив: ";
	for (int i = 0; i < 10; i++) {
		cout << nums[i] << " ";
	}
	cout << endl;

	for (int i = 0; i < 10; i++) {
		if (nums1[i] < user_limit) {
			sum += nums1[i];
		}
	}

	cout << "Сумма элементов меньше " << user_limit << ": " << sum << endl;



	//Задача  3
	double year[12];
	cout << "Здравствуйте, пожалуйста введите вашу прибыль за 12 месяцев ниже \n ";
	for (int i = 0; i < 12; i++) {
		cin >> year[i];
	}

	cout << "Отлично, теперь введите диапазон в котором вы хотите посчитать свою прибыль \n";
	int zone_start, zone_end; 
	cout << "Введите начальный месяц диапазона\n";
	cin >> zone_start; 
	cout << "Введите конечный месяц диапазона\n";
	cin >> zone_end;
	int start_index = zone_start - 1; 
	int end_index = zone_end - 1; 

	double min_profit = year[start_index];
	double max_profit = year[start_index];

	for (int i = start_index + 1; i <= end_index; i++) {
		if (year[i] < min_profit) min_profit = year[i];
		if (year[i] > max_profit) max_profit = year[i];
	}
	cout << "\n--- Результаты анализа ---" << endl;
	cout << "В диапазоне с " << zone_start << " по " << zone_end << " месяц:" << endl;
	cout << "Максимальная прибыль: " << max_profit << endl;
	cout << "Минимальная прибыль: " << min_profit << endl;

return 0;
} 