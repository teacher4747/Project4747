#include <iostream> 
#include <iomanip>
#include <string>




int main()
{
	setlocale(LC_ALL, "RUS");
	std::cout << "������������, ������� ���������� �� ��������� (� ��) � �����, �� ������� ����� ������� (� �����) \n";
	double distance = 0;
	std::cin >> distance;
	double time = 0;
	std::cin >> time;
	double speed = (distance / time);
	std::cout << "��� ����� ����� �� ��������� " << speed << " �� � �."; 

	std::cout << "������������, ������� ����� ������ �������, �������� 19:45:32 ���e \n";
	int hourse = 0;
	std::cin >> hourse;
	int minutes = 0;
	std::cin >> minutes;
	int seconds = 0;
	std::cin >> seconds;
	std::cout << "����������, ������ ������� ����� ������� ����� ��� �� \n";
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

	std::cout << "� ��� " << final_sum << " ������";

	using namespace std;

	double distance, fuelConsumption;
	double price1, price2, price3;


	cout << "������� ���������� (��): ";
	cin >> distance;

	cout << "������� ������ ������� �� 100 �� (�): ";
	cin >> fuelConsumption;

	cout << "������� ��������� ������� ���� ������� (���/�): ";
	cin >> price1;

	cout << "������� ��������� ������� ���� ������� (���/�): ";
	cin >> price2;

	cout << "������� ��������� �������� ���� ������� (���/�): ";
	cin >> price3;


	double totalFuel = (distance * fuelConsumption) / 100.0;


	double cost1 = totalFuel * price1;
	double cost2 = totalFuel * price2;
	double cost3 = totalFuel * price3;


	cout << "\n" << string(60, '=') << endl;
	cout << "������������� ������� ��������� �������" << endl;
	cout << string(60, '=') << endl;


	cout << left << setw(20) << "��� �������"
		<< setw(20) << "���� (���/�)"
		<< setw(20) << "��������� �������" << endl;
	cout << string(60, '-') << endl;


	cout << fixed << setprecision(2);
	cout << left << setw(20) << "������ 1"
		<< setw(20) << price1
		<< setw(20) << cost1 << " ���." << endl;

	cout << left << setw(20) << "������ 2"
		<< setw(20) << price2
		<< setw(20) << cost2 << " ���." << endl;

	cout << left << setw(20) << "������ 3"
		<< setw(20) << price3
		<< setw(20) << cost3 << " ���." << endl;

	cout << string(60, '=') << endl;

	
	
	
	
	
	
	
	std::cout << "Hello fsdaf";
return 0;
}