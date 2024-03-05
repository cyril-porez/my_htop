#include <ncurses.h>

int main()
{
  initscr();
  printw("dsgdsgsdg");
  refresh();
  getch();
  endwin();
}