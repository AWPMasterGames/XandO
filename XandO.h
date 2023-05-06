#include <iostream>
#include <time.h>
#include <string>
using namespace std;
int ar[3][3];
class Field {
	void win(int a) {
		if (a == 2) {
			cout << "Победил Крестик :3\n";
			start();
		}
		else if (a == 3) {
			cout << "Победил Нолик :D\n";
			start();
		}
		
	}
public:
	Field() {
		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 3; j++) {
				ar[i][j] = 0;
			}
		}
	}
	void start() {
		int mod;
		cout << "В какой режим желаете сыграть?\n";
		cout << "1 - игрок против игрока\n2 - в разработке\n";
		cin >> mod;
		switch (mod) {
		case 1:
			cout << "выбран режим игрок против игрока\n";
			checkField(ar);
			test3(ar);
			checkField(ar);
			checkwin(ar);
			
		}
	}
	void checkField(int ar[][3]) {
		for (int j = 0; j < 3; j++) {
			cout << "| ";
			for (int k = 0; k < 3; k++) {
				if (ar[j][k] == 2) {
					cout << "X" << " | ";
				}
				else if (ar[j][k] == 3)
					cout << "O" << " | ";
				else
					cout << " " << " | ";
			}
			cout << endl;
		}
		cout << endl << endl << endl << endl << endl << endl << endl << endl;
	}
	void test(int ar[][3]) {
		int h = 2;
		for (int i = 0; i < 2; i++) {
			ar[i][h] = 3;
		}
	}
	void test2(int ar[][3]) {
		int h = 1;
		for (int i = 0; i < 3; i++) {
			ar[h][i] = 2;
		}
		ar[h][2] = 3;
	}
	void test3(int ar[][3]) {
		for (int i = 2, j = 2; i > 0 && j > 0; i--, j--) {
			ar[i][j] = 3;
		}
	}
	void test4(int ar[][3]) {
		for (int i = 0, j = 0; i < 3 && j < 2; i++, j++) {
			ar[i][j] = 3;
		}
		ar[2][2] = 2;
	}
	void checkwin(int a[][3]) {
		checkvin1(a);
		checkvin2(a);
		checkvin3(a);
		checkvin4(a);
	}
	void checkvin1(int a[][3]) {
		for (int h = 2; h != 3; h++) {
			for (int i = 0; i < 3; i++) {
				int x = 0;
				int o = 0;
				for (int j = 0; j < 3; j++) {
					if (h == 2) {
						if (a[i][j] == 2) {
							x++;
						}
					}
					if (x == 3) {
						win(2);
					}
				}
				for (int j = 0; j < 3; j++) {
					if (a[i][j] == 3) {
						o++;
					}
	
					if (o == 3) {
						win(3);
					}
				}
			}
		}
	}
	void checkvin2(int a[][3]) {
		for (int h = 2; h != 3; h++) {
			for (int i = 0; i < 3; i++) {
				int x = 0;
				int o = 0;
				for (int j = 0; j < 3; j++) {
					if (h == 2) {
						if (a[j][i] == 2) {
							x++;
						}
					}
					if (x == 3) {
						cout << x;
						win(2);
					}
				}
				for (int j = 0; j < 3; j++) {
					if (a[j][i] == 3) {
						o++;
					}

					if (o == 3) {
						cout << o;
						win(3);
					}
				}
			}
		}
	}
	void checkvin3(int a[][3]) {
		for (int h = 2; h != 4; h++) {
			for (int g = 0; g < 3; g++) {
				int x = 0;
				int o = 0;
				for (int i = 0, j = 0; i < 3 && j < 3;i++, j++) {
					if (h == 2) {
						if (a[i][j] == 2) {
							x++;
						}
					}
					if (x == 3) {
						cout << x;
						win(2);
					}
				}
				if (h == 3) {
					for (int i = 0, j = 0; i < 3 && j < 3; i++, j++) {
						if (a[i][j] == 3) {
							o++;
						}

						if (o == 3) {
							cout << o;
							win(3);
						}
					}
				}
			}
		}
	}
	void checkvin4(int a[][3]) {
		for (int h = 2; h != 4; h++) {
			for (int g = 0; g < 3; g++) {
				int x = 0;
				int o = 0;
				for (int i = 2, j = 2; i > -1 && j > -1; i--, j--) {
					if (h == 2) {
						if (a[i][j] == 2) {
							x++;
						}
					}
					if (x == 3) {
						cout << x;
						win(2);
					}
				}
				if (h == 3) {
					for (int i = 2, j = 2; i > -1 && j > -1; i--, j--) {
						if (a[i][j] == 3) {
							o++;
						}

						if (o == 3) {
							cout << o;
							win(3);
						}
					}
				}
			}
		}
	}
};
