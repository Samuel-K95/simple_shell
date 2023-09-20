#include "main.h"

/**
 * handle_signal - handles EOF signal
 * @signal: EOF indicator
 * Return: void
 */

void handle_signal(int signal)
{
	(void) signal;
	prints("\n$ ");
	fflush(stdout);
}

