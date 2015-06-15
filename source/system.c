#ifdef linux
    #include "termios.h"
    #include "stdio.h"
    #include "system.h"
    


	int _getch() {
		struct termios oldtc, newtc;
		int ch;
        int STDIN_FILENO = 0;
		tcgetattr(STDIN_FILENO, &oldtc);
		newtc = oldtc;
		newtc.c_lflag &= ~(ICANON | ECHO);
		tcsetattr(STDIN_FILENO, TCSANOW, &newtc);
		ch = getchar();
		tcsetattr(STDIN_FILENO, TCSANOW, &oldtc);
		return ch;
	}
#endif

