#include <iostream>
#include <sstream>

using namespace std;

int strToInt(string s){
	istringstream ss(s);
	int a;
	ss >> a;
	return a;
}

bool isLeapYear(int year){
	return year % 400 == 0 || (year % 4 == 0 && year % 100 != 0);
}

bool divisivelPor3(string &number){
	int soma = 0;
	for(auto &n : number ){
		soma += n - '0';
	}
	
	return soma % 3 == 0;
}

bool divisivelPor5(string &number){
	return number[number.size() - 1] == '0' || number[number.size() - 1] == '5';
}

int abs(int n){
	return (n < 0 ? -n : n);
}

bool divisivelPor11(string &number){
	int somaPar = 0, somaImpar = 0;
	
	for(int i = 0; i < number.size(); i += 2)
		somaPar += number[i] - '0';
		
	for(int i = 1; i < number.size(); i += 2)
		somaImpar += number[i] - '0';
		
	return abs(somaPar - somaImpar) % 11 == 0;
}

int main() {
	
	string year;
	bool leap, divisivel3, divisivel5, divisivel11, bulukulu, huluculu, println = false;;
	
	while(getline(cin, year)){
		
		if(println)
			cout << endl;
		else
			println = true;
		
		int lasts = strToInt(year.substr(year.size() - 4, 4));
		
		leap = isLeapYear(lasts);
		divisivel3 = divisivelPor3(year);
		divisivel5 = divisivelPor5(year);
		divisivel11 = divisivelPor11(year);
		huluculu = divisivel3 && divisivel5;
		bulukulu = false;

		if(leap){
			cout << "This is leap year." << endl;
			bulukulu = divisivel5 && divisivel11; 
		}
		
		if(huluculu){
			cout << "This is huluculu festival year." << endl;
		}
		
		if(bulukulu){
			cout << "This is bulukulu festival year." << endl;
		}
			
		if(!(leap || huluculu || bulukulu))
			cout << "This is an ordinary year." << endl;
		
	}
	
	return 0;
}