#include <ncurses.h>

int main() {
	initscr();
	getmaxyx(stdscr, y, x);
	printw("Window size is %d rows, %d columns.\n", LINES, COLS );
	refresh();
	getch();
	endwin();
	return 0;
}
