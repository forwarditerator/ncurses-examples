#include <ncurses.h>

int main() {
	int rows, cols;
	initscr();
	getmaxyx(stdscr, rows, cols);
	--rows;
	--cols;

	move(0, 0);
	addch('*');
	refresh();
	napms(1000);

	move(0, cols);
	addch('*');
	refresh();
	napms(1000);

	move(rows, 0);
	addch('*');
	refresh();
	napms(1000);

	move(rows, cols);
	addch('*');
	refresh();
	napms(1000);

	getch();
	endwin();
	return 0;
}
