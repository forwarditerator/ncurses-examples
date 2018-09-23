#include <ncurses.h>
int main() {
	int value = 0;
	initscr();
	addstr("Press any key to begin:\n");
	refresh();
	getch();
	nodelay(stdscr, TRUE);
	addstr("Press spacebar key to stop the insane loop!\n");
	while(getch() != ' ') {
		printw("%d\r", value++);
		refresh();
	}
	endwin();
	return 0;
}
