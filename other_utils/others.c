#include <setjmp.h>
#include <stdlib.h>
#include <unistd.h>
#include <getopt.h>
#include <sys/uio.h>
#include <poll.h>
#include <sys/mman.h>

int my_sigsetjmp(sigjmp_buf env, int savesigs)
{
	return sigsetjmp(env, savesigs);
}

void my_siglongjmp(sigjmp_buf env, int val)
{
	siglongjmp(env, val);
}

char* my_getenv(const char* name)
{
	return getenv(name);
}

int my_getopt(int argc, char* const argv[], const char* optstring)
{
	return getopt(argc, argv, optstring);
}

ssize_t my_writev(int fd, const struct iovec* iov, int iovcnt)
{
	return writev(fd, iov, iovcnt);
}

int my_poll(struct pollfd* fds, nfds_t nfds, int timeout)
{
	return poll(fds, nfds, timeout);
}

void* my_mmap(void* addr, size_t length, int prot, int flags, int fd, off_t offset)
{
	return mmap(addr, length, prot, flags, fd, offset);
}

int my_munmap(void* addr, size_t length)
{
	return munmap(addr, length);
}
