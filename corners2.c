#include <ncurses.h>

int main() {
	int rows, cols;
	initscr();
	getmaxyx(stdscr, rows, cols);
	--rows;
	--cols;

	mvaddch(0, 0, '*');
	refresh();
	napms(1000);

	mvaddch(0, cols, '*');
	refresh();
	napms(1000);

	mvaddch(rows, 0, '*');
	refresh();
	napms(1000);

	mvaddch(rows, cols, '*');
	refresh();
	napms(1000);

	getch();
	endwin();
	return 0;
}
