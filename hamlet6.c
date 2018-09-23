#include <ncurses.h>

int main() {
	char Ham1[] = "To be, or not to be: that is the question:\n";
	char Ham2[] = "Whether 'tis nobleer in the mind to suffer\n";
	char Ham3[] = "The slings and arrows of outrageous fortune,\n";
	char Ham4[] = "Or to take arms against a sea of troubles,\n";
	char Ham5[] = "And by opposing end them?\n";
	char* ob = "obnoxious ";
	initscr();
	addstr(Ham1);
	addstr(Ham2);
	addstr(Ham3);
	addstr(Ham4);
	addstr(Ham5);
	refresh();
	getch();
	move(2,25);
	int c;
	for ( c = 0; c < 11; ++c) {
		delch();
		refresh();
		napms(100);
	}
	move(2,25);
	for (c = 0; c < 10; ++c) {
		insch(*(ob+9-c));
		refresh();
		napms(100);
	}
	getch();
	endwin();
	return 0;
}
