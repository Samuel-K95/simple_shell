#include "main.h"

/*  to handle the CTRL + C  signal */

void handle_signal(int signal)
{
	(void) signal;
	prints("\n$ ");
	fflush(stdout);
}

