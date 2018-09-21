#include <ncurses.h>
int main() {
	initscr();
	addstr("Enter the first 3 letters of your first name: ");
	refresh();
	char first[4];
	getnstr(first, 3);
	addstr("Enter the first 3 letters of your last name: ");
	refresh();
	char last[4];
	getnstr(last, 3);
	addstr("Your secret agent name is ");
	printw("%s %s", first, last);
	addch('!');
	refresh();
	getch();
	endwin();
	return 0;
}
