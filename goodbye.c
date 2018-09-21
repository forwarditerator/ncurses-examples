#include <ncurses.h>
int main () {
	initscr();
	addstr("Goodbye, cruel C programming!");
	endwin();
	return 0;
}
