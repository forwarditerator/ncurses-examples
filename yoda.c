#include <ncurses.h>
int main() {
	initscr();
	int yoda = 876;
	int ss = 65;
	printw("Yoda is %d years old\n", yoda);
	printw("He has collected %d years ", yoda - ss);
	printw("of Social Security.");
	refresh();
	getch();
	endwin();
	return 0;
}
