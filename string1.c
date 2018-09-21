#include <ncurses.h>
int main() {
	initscr();
	addstr("What is your first name? ");
	refresh();
	char first[24];
	getstr(first);
	addstr("What is your last name? ");
	refresh();
	char last[32];
	getstr(last);
	printw("Pleased to meet you, %s %s!", first, last);
	refresh();
	getch();
	endwin();
	return 0;
}
