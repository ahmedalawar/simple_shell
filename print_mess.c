#include <shell.h>
/**
*print_mess - print function that print to the screen
*@message: string which would print
*/

void print_mess(const char *message)
{
	write(1, message, strlen(message));
}
