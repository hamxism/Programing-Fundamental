#include<iostream>
#include<string>  
#include<fstream> 
#include<cstdlib> 
#include<ctime>	  
#include<iomanip> 
using namespace std;
int randomf(int random, int a, int b)
{
	random = rand() % a + b;
	return random;
}
int main() {
input:
start:
	ofstream filep, fileo, filel;
	char c;
	cout << "\t\t\t\tLUCKY SPIN\n";
	cout << "Press S to Start:";
	cin >> c;
	if (c == 's')
	{
		int a = 3, b = 1;
		srand(unsigned(time(0)));
		int random = rand() % a + b;
		int p = 0, o = 0, l = 0;
		for (int i = 0; i < 1; i++)
		{
			switch (i)
			{
			case 0:
				p = randomf(random, a, b);
				cout << setw(14) << p;
				filep.open("1.txt");
				filep << p;
				filep.close();
				o = randomf(random, a, b);
				cout << setw(14) << o;
				fileo.open("2.txt");
				fileo << o;
				fileo.close();
				l = randomf(random, a, b);
				cout << setw(14) << l;
				filel.open("3.txt");
				filel << l;
				filel.close();
				break;
			default:
			{cout << "some error";
			}
			break;
			}
		}
		if (p == o && o == l && l == p)
		{
			cout << "\n\t\t\t\t!!!Jack Pot!!!";
			return 0;
		}
		else
		{
			cout << "\n\t\t\t\tBetter Luck Next Time";
		}
	}
	else
	{
		cout << "\n restart:";
		goto input;
	}
	char q;
	cout << "\nPress g if you want to go again :";
	cin >> q;
	if (q == 'g')
	{
		goto start;
	}
	else
		return 0;
}