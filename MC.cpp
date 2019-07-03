#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
int main()
{
	float money,usd,eu,yen,dong,pond;
	cout << "Input Thai Baths : ";
	cin >> money;
	usd = money*0.033;
	eu = money/34.64;
	yen=money/0.28;
	dong=money/0.0013;
	pond=money/38.50;
	cout << "****Exchange Rate****\n";
	cout << money << " Baths is " << setprecision(3) << usd << " dollars\n";
	cout << money << " Baths is " << setprecision(3) << eu << " Euro\n";
	cout << money << " Baths is " << setprecision(3) << yen << " yen\n";
	cout << money << " Baths is " << setprecision(3) << dong << " dong\n";
	cout << money << " Baths is " << setprecision(3) << pond << " ponds\n";
	return(0);
}