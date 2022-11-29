#include "mini_uart.h"
static unsigned int curr_p = 0;
void hello(unsigned int nu)
{
	char str[2];
	if (nu == 0)
	{
		uart_init();
	}
	else
	{
		while (curr_p != nu)
			;
	}
	str[0] = '0' + nu;
	str[1] = '\0';
	uart_send_string("Hello, world from ");
	uart_send_string(str);
	uart_send_string("!!!!\r\n");
	curr_p++;
	while (curr_p != 4)
		;
}

void ping_pong()
{
	while (1)
	{
		uart_send(uart_recv());
	}
}
