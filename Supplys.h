#pragma once

// supply.h, the simple and easy to use library
// Version: 0.0.2
// next version release date: 11/13/2020 - 11/21/2020
/* Showcase code for this library

//disco function sample
#include <iostream>
#include "Supplys.h"

using namespace std;

int
main(void) {
Superb var;
cout << "this is a test"<<endl;
var.disco();
return 0;
}
*/
#include <iostream>
#include <chrono>
#include <thread>
#include <stdlib.h>
using namespace std;

extern int _Sprintf(const char * __restrict __format, ...) {
	cout << __format<<endl;
	return 0;
}
void _Vprintf( int i, char x, int y, char x_2[20]) {
	if (y == 1) {
		cout << i<<endl;
	}
	else if ( y == 2) {
		cout << x << endl;
	}
	else if (y == 3) {
		cout << x_2 << endl;
	}
}
class Superb{
public:
	bool determiner(char Enter) { 
		cin >> Enter;
		if (Enter == '\n') {
			return(true);
		}
		else if (Enter != '\n') {
			return(false);
		}
	};
	void Pause(int def_pause) {
		chrono::seconds dura(def_pause);
		this_thread::sleep_for(dura);
	}
	void exit() {
		exit();
	}
	bool string_comp(char string_1[20], char string_2[20]) {
		int i, j = 0;
		for (i = 0; i < 20; i++) {
			if (string_1[i] == string_2[i]) {
				j++;
			}
			else if (string_1[i] != string_2[i]) {
				return(false);
			}
			else if (j == 20) {
				return(true);
			}
		}
	}
	/*1 = Blue        9 = Light Blue
	2 = Green       A = Light Green
	3 = Aqua        B = Light Aqua
	4 = Red         C = Light Red
	5 = Purple      D = Light Purple
	6 = Yellow      E = Light Yellow
	7 = White       F = Bright White*/
	void Set_purp() {
		system("Color D");
	}
	void Set_red() {
		system("Color C");
	}
	void Set_blue() {
		system("Color B");
	}
	void Set_green() {
		system("Color A");
	}
	void Set_N() {
		system("Color F");
	}
	void back_w() {
		system("Color 7A");
	}
	void Color_ch() {
		char color;
		cin >> color;
		switch (color) 
		{
		case 'r':
			Set_red();
			break;
		case 'p':
			Set_purp();
			break;
		}
	}
	void disco_p(int i) {
		char Enter;
		bool h;
		for (;;) {
			Pause(i);
			Set_blue();
			Set_green();
			Set_red();
			Set_purp();
			system("Color 6C");
			Set_N();
			system("Color 4A");
		}
	}
	void disco() {
		for (;;) {
			Set_blue();
			Set_green();
			Set_red();
			Set_purp();
			system("Color 6C");
			Set_N();
			system("Color 4A");
		}
	}
private:
	int color_dter(char color[10]) {
	}
	bool true_false = false;
	int def_pause = 1;
	char string_1[20];
	char string_2[20];
	int color;
};