#include <ncurses.h>
int kbhit() {
	int ch, r;
	
	nodelay(stdscr, TRUE);
	noecho();

	ch = getch();
	if ( ch == ERR )
		r  = FALSE;
	else {
		r = TRUE;
		ungetch(ch);
	}
	echo();
	nodelay(stdscr, FALSE);
	return(r);
}

int main() {
	initscr();
	addstr("Press any key to end this program:");
	while(!kbhit())
		;
	endwin();
	return 0;
}
