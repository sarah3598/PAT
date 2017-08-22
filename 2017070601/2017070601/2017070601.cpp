#include<iostream>
#include<iomanip>
#include<cstring>
using namespace std;
class CGoods {
public:
	char Name[21];
	int Amount;
	float Price;
	float Total_value;
public:
	void RegisterGoods(char[], int, float);
	void CountTotal(void);
	void GetName(char[]);
	int GetAmount(void);
	float GetPrice(void);
	float GetTotal_value(void);
};
void CGoods::RegisterGoods(char name[], int amount, float price) {
	strcpy_s(Name,20, name);
	Amount = amount;
	Price = price;
}
void CGoods::CountTotal(void) {
	Total_value = Price*Amount;
}
void CGoods::GetName(char name[]) {
	strcpy_s(Name,20,name);
}
int CGoods::GetAmount(void) {
	return(Amount);
}
float CGoods::GetPrice(void) {
	return(Price);
}
float CGoods::GetTotal_value(void) {
	return(Total_value);
}
int main() {
	CGoods car;
	char str[21];
	int number;
	float pr;
	cout << "Please input the tyoe of the car:";
	cin.getline(str, 20);
	cout << "Please input the car's number and price:";
	cin >> number >> pr;
	car.RegisterGoods(str, number, pr);
	car.CountTotal();
	str[0] = '\0';
	car.GetName(str);
	cout << setw(20) <<str<< setw(5) << "The car's number is:" << car.GetAmount();
	cout << setw(10) << car.GetPrice()<< setw(20) << car.GetTotal_value() << endl;
	return 0;
}