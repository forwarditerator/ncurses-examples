#include <ncurses.h>
int main() {
	initscr();
	addstr("Type a few lines of text\n");
	addstr("Press ~ to quit\n");
	refresh();
	char ch;
	while( (ch = getch()) != '~' )
		;
	endwin();
	return 0;
}
