#include <iostream>
#include <string>
#include <conio.h>
#include <Windows.h>
#include <fstream>
using namespace std;
//global variables
int x = 23;
int y = 10;
int randnx = 99;
int randny = 99;
int randx = rand() % ((35 - 11) + 1) + 11;
int randy = rand() % (9) + 6;
int score = 0;
int ux = 4;
int f; //moves
string name;
//code
int writeFile(int & passed) {
	ofstream myfile;
	myfile.open("scores.txt", ofstream::app);
	myfile << name << ": " << score << " in " << f << " moves\n";
	myfile.close();
	return 0;
}
void map() {
	for (int j = 0; j < 15; ++j) {
		if (j == 5) {
			for (int k = 0; k < 35; k++) {
				if (k > 9) {
					cout << "#";
				}
				else {
					cout << " ";
				}
			}
		}
		else if(j>5){
			for (int i = 0; i < 36; ++i) {
				if (i == 10) {
					cout << "#";
				}
				else if (i == 34) {
					cout << "#";
				}
				else if (i == x&&j == y) {
					cout << "O";
				}
				else if (i == randx&&j == randy) {
					cout << "F";
				}
				else if (i == randnx&&j == randny) {
					cout << "*";	
				}
				else {
					cout << " ";
				}
			}
		}
		cout << endl;
	}
	for (int k = 0; k < 35; k++) {
		if (k > 9) {
			cout << "#";
		}
		else {
			cout << " ";
		}
	}
	cout << endl;
	cout << "\nSCORE= " << score << endl;
	if (x <= 10 || x >= 36 || y < 6 || y >= 15) {
		HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(hConsole, 12);
		cout << "YOU LOSE" << endl;
		SetConsoleTextAttribute(hConsole, 7);
		Sleep(1000);
		cout << "Name: ";
		cin >> name;
		
		writeFile(score);
		exit(42);
	}
}
void main() {
	map();
	for (f = 0; f < 2000; f++) {
		if (f == ux) {
		    randnx=rand()% ((35 - 11) + 1) + 11;
			randny=rand() % (9) + 6;
			system("cls");
			map();
		}
		else if (f - ux == 5) {
			randnx = 99;
			randny = 99;
			ux = f + 6;
			system("cls");
			map();
		}
		cout << "MOVES= " << f;
		char key = _getch();
		switch (key) {
		case 'h': while (_kbhit() == false) {
			system("cls");
			score++;
			map();
		}
				  if (_kbhit) {
					  switch (_getch()) {
					  case 'a':key = 'a';
						  continue;
						  break;
					  case 'A':key = 'A';
						  continue;
						  break;
					  case 'D':key = 'D';
						  continue;
						  break;
					  case 'S':key = 'S';
						  continue;
						  break;
					  case 'W':key = 'W';
						  continue;
						  break;
					  case 'd':key = 'd';
						  continue;
						  break;
					  case 's':key = 'd';
						  continue;
						  break;
					  case 'w':key = 'w';
						  continue;
						  break;
					  case 'h':key = 'h';
						  continue;
						  break;
					  }
				  }
		case 'H': while (_kbhit() == false) {
			system("cls");
			score++;
			map();
		}
				  if (_kbhit) {
					  switch (_getch()) {
					  case 'a':key = 'a';
						  continue;
						  break;
					  case 'A':key = 'A';
						  continue;
						  break;
					  case 'D':key = 'D';
						  continue;
						  break;
					  case 'S':key = 'S';
						  continue;
						  break;
					  case 'W':key = 'W';
						  continue;
						  break;
					  case 'd':key = 'd';
						  continue;
						  break;
					  case 's':key = 'd';
						  continue;
						  break;
					  case 'w':key = 'w';
						  continue;
						  break;
					  case 'h':key = 'h';
						  continue;
						  break;
					  }
				  }
		case 'A':	while (_kbhit() == false) {
			system("cls");
			x--;
			if (randx == x&&randy == y) {
				randx = rand() % ((35-11)+1)+11;
				randy = rand() % (9)+6;
				score++;
				system("cls");
				map();
			}
			else if (randnx == x&&randny == y) {
				randnx = 99;
				randny = 99;
				ux = f + 6;
				score = score+ 3;
				system("cls");
				map();
			}
			else if (x <= 10) {
				x = 35;
				map();
			}
			else {
				map();
			}
		}
					if (_kbhit) {
						switch (_getch()) {
						case 'a':key = 'a';
							continue;
							break;
						case 'A':key = 'A';
							continue;
							break;
						case 'D':key = 'D';
							continue;
							break;
						case 'S':key = 'S';
							continue;
							break;
						case 'W':key = 'W';
							continue;
							break;
						case 'd':key = 'd';
							continue;
							break;
						case 's':key = 'd';
							continue;
							break;
						case 'w':key = 'w';
							continue;
							break;
						case 'h':key = 'h';
							continue;
							break;
						}
					}
					break;
		case 'a':	while (_kbhit() == false) {
			system("cls");
			x--;
			if (randx == x&&randy == y) {
				randx = rand() % ((35 - 11) + 1) + 11;
				randy = rand() % (9) + 6;
				score++;
				system("cls");
				map();
			}
			else if (randnx == x&&randny == y) {
				randnx = 99;
				randny = 99;
				ux = f + 6;
				score = score + 3;
				system("cls");
				map();
			}
			else {
				map();
			}
		}
					if (_kbhit) {
						switch (_getch()) {
						case 'a':key = 'a';
							continue;
							break;
						case 'A':key = 'A';
							continue;
							break;
						case 'D':key = 'D';
							continue;
							break;
						case 'S':key = 'S';
							continue;
							break;
						case 'W':key = 'W';
							continue;
							break;
						case 'd':key = 'd';
							continue;
							break;
						case 's':key = 'd';
							continue;
							break;
						case 'w':key = 'w';
							continue;
							break;
						case 'h':key = 'h';
							continue;
							break;
						}
					}
					break;
		case 'd':	while (_kbhit() == false) {
			system("cls");
			x++;
			if (randx == x&&randy == y) {
				randx = rand() % ((35 - 11) + 1) + 11;
				randy = rand() % (9) + 6;
				score++;
				system("cls");
				map();
			}
			else if (randnx == x&&randny == y) {
				randnx = 99;
				randny = 99;
				ux = f + 6;
				score = score + 3;
				system("cls");
				map();
			}
			else {
				map();
			}
		}
					if (_kbhit) {
						switch (_getch()) {
						case 'a':key = 'a';
							continue;
							break;
						case 'A':key = 'A';
							continue;
							break;
						case 'D':key = 'D';
							continue;
							break;
						case 'S':key = 'S';
							continue;
							break;
						case 'W':key = 'W';
							continue;
							break;
						case 'd':key = 'd';
							continue;
							break;
						case 's':key = 'd';
							continue;
							break;
						case 'w':key = 'w';
							continue;
							break;
						case 'h':key = 'h';
							continue;
							break;
						}
					}
					break;
		case 'D':	while (_kbhit() == false) {
			system("cls");
			x++;
			if (randx == x&&randy == y) {
				randx = rand() % ((35 - 11) + 1) + 11;
				randy = rand() % (9) + 6;
				score++;
				system("cls");
				map();
			}
			else if (randnx == x&&randny == y) {
				randnx = 99;
				randny = 99;
				ux = f + 6; 
				score = score + 3;
				system("cls");
				map();
			}
			else if (x >=35) {
				x = 11;
				map();
			}
			else {
				map();
			}
		}
					if (_kbhit) {
						switch (_getch()) {
						case 'a':key = 'a';
							continue;
							break;
						case 'A':key = 'A';
							continue;
							break;
						case 'D':key = 'D';
							continue;
							break;
						case 'S':key = 'S';
							continue;
							break;
						case 'W':key = 'W';
							continue;
							break;
						case 'd':key = 'd';
							continue;
							break;
						case 's':key = 'd';
							continue;
							break;
						case 'w':key = 'w';
							continue;
							break;
						case 'h':key = 'h';
							continue;
							break;
						}
					}
					break;
		case 's': while (_kbhit() == false) {
			system("cls");

			y++;
			if (randx == x&&randy == y) {
				randx = rand() % ((35 - 11) + 1) + 11;
				randy = rand() % (9) + 6;
				score++;
				system("cls");
				map();
			}
			else if (randnx == x&&randny == y) {
				randnx = 99;
				randny = 99;
				ux = f + 6;
				score = score + 3;
				system("cls");
				map();
			}
			else {
				map();
			}
		}
				  if (_kbhit) {
					  switch (_getch()) {
					  case 'a':key = 'a';
						  continue;
						  break;
					  case 'A':key = 'A';
						  continue;
						  break;
					  case 'D':key = 'D';
						  continue;
						  break;
					  case 'S':key = 'S';
						  continue;
						  break;
					  case 'W':key = 'W';
						  continue;
						  break;
					  case 'd':key = 'd';
						  continue;
						  break;
					  case 's':key = 'd';
						  continue;
						  break;
					  case 'w':key = 'w';
						  continue;
						  break;
					  case 'h':key = 'h';
						  continue;
						  break;
					  }
				  }
				  break;
		case 'S': while (_kbhit() == false) {
			system("cls");

			y++;
			if (randx == x&&randy == y) {
				randx = rand() % ((35 - 11) + 1) + 11;
				randy = rand() % (9) + 6;
				score++;
				system("cls");
				map();
			}
			else if (randnx == x&&randny == y) {
				randnx = 99;
				randny = 99;
				ux = f + 6;
				score = score + 3;
				system("cls");
				map();
			}
			else if (y > 14) {
				y = 6;
				map();
			}
			else {
				map();
			}
		}
				  if (_kbhit) {
					  switch (_getch()) {
					  case 'a':key = 'a';
						  continue;
						  break;
					  case 'A':key = 'A';
						  continue;
						  break;
					  case 'D':key = 'D';
						  continue;
						  break;
					  case 'S':key = 'S';
						  continue;
						  break;
					  case 'W':key = 'W';
						  continue;
						  break;
					  case 'd':key = 'd';
						  continue;
						  break;
					  case 's':key = 'd';
						  continue;
						  break;
					  case 'w':key = 'w';
						  continue;
						  break;
					  case 'h':key = 'h';
						  continue;
						  break;
					  }
				  }
				  break;
		case 'w':while (_kbhit() == false) {
			system("cls");
			y--;

			if (randx == x&&randy == y) {
				randx = rand() % ((35 - 11) + 1) + 11;
				randy = rand() % (9) + 6;
				score++;
				system("cls");
				map();
			}
			else if (randnx == x&&randny == y) {
				randnx = 99;
				randny = 99;
				ux = f + 6;
				score = score + 3;
				system("cls");
				map();
			}
			else {
				map();
			}
		}
				 if (_kbhit) {
					 switch (_getch()) {
					 case 'a':key = 'a';
						 continue;
						 break;
					 case 'A':key = 'A';
						 continue;
						 break;
					 case 'D':key = 'D';
						 continue;
						 break;
					 case 'S':key = 'S';
						 continue;
						 break;
					 case 'W':key = 'W';
						 continue;
						 break;
					 case 'd':key = 'd';
						 continue;
						 break;
					 case 's':key = 'd';
						 continue;
						 break;
					 case 'w':key = 'w';
						 continue;
						 break;
					 case 'h':key = 'h';
						 continue;
						 break;
					 }
				 }
				 break;
		case 'W':while (_kbhit() == false) {
			system("cls");
			y--;

			if (randx == x&&randy == y) {
				randx = rand() % ((35 - 11) + 1) + 11;
				randy = rand() % (9) + 6;
				score++;
				system("cls");
				map();
			}
			else if (randnx == x&&randny == y) {
				randnx = 99;
				randny = 99;
				ux = f + 6;
				score = score + 3;
				system("cls");
				map();
			}
			else if (y < 6) {
				y = 14;
				map();
			}
			else {
				map();
			}
		}
				 if (_kbhit) {
					 switch (_getch()) {
					 case 'a':key = 'a';
						 continue;
						 break;
					 case 'A':key = 'A';
						 continue;
						 break;
					 case 'D':key = 'D';
						 continue;
						 break;
					 case 'S':key = 'S';
						 continue;
						 break;
					 case 'W':key = 'W';
						 continue;
						 break;
					 case 'd':key = 'd';
						 continue;
						 break;
					 case 's':key = 'd';
						 continue;
						 break;
					 case 'w':key = 'w';
						 continue;
						 break;
					 case 'h':key = 'h';
						 continue;
						 break;
					 }
				 }
				 break;
		}
	}
}