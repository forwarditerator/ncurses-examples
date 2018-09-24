#include <ncurses.h>
int main() {
	int ch;
	initscr();
	//noecho();
	keypad(stdscr, TRUE);
	do {
		ch = getch();
		switch(ch) {
			case KEY_DOWN:
				addstr("Down\n");
				break;
			case KEY_UP:
				addstr("Up\n");
				break;
			case KEY_LEFT:
				addstr("Left\n");
				break;
			case KEY_RIGHT:
				addstr("Right\n");
				break;
			case KEY_F(1):
				addstr("f1\n");
				break;
			default:
				break;
		}
		refresh();
	}while(ch != '\n');
	endwin();
	return 0;
}
