#include <termios.h>
#include <unistd.h>
#include <sys/ioctl.h>
#include <stdarg.h>

int my_tcgetattr(int fd, struct termios* termios_p){
	return tcgetattr(fd, termios_p);
}

int my_tcsetattr(int fd, int optional_actions, const struct termios* termios_p){
	return tcsetattr(fd, optional_actions, termios_p);
}

int my_ioctl(int fd, unsigned long request, struct winsize* ws){
	return ioctl(fd, request, ws);
}
