#include <iostream>
#include <conio.h>
using namespace std;
void main() {
	int tool, arz, mohit=0, masahat=0;
	cout << "inter hight:\n";
	cin >> tool;
	cout << "inter lengh:\n";
	cin >> arz;
	mohit = 2 * (tool + arz);
	masahat = tool * arz;
	cout << "your perimiter:" << mohit << " and your area:" << masahat;
}