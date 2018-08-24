#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <signal.h>
#include <sys/time.h>
#include <assert.h>
#include <time.h>
#include <dirent.h>
#include <sys/mman.h>

int _write(int fd, const void* buf, size_t count){
  //int ret = -1;
  //asm volatile("int $0x80": "=a"(ret): "a"(4), "b"(fd), "c"(buf), "d"(count));
  //return ret;
  return write(fd, buf, count);
}

int _read(int fd, void *buf, size_t count) {
  //int ret = -1;
  //asm volatile("int $0x80": "=a"(ret): "a"(3), "b"(fd), "c"(buf), "d"(count));
  //return ret;
  return read(fd, buf, count);
}

int _fstat(int fd, struct stat *buf) {
	return fstat(fd, buf);
	//return 0;
}

int _stat(const char* path, struct stat* buf){
	return stat(path, buf);
}

int _open(const char *path, int flags, mode_t mode) {
  return open(path, flags, mode);
  //int ret = -1;
  //asm volatile("int $0x80": "=a"(ret): "a"(5), "b"(path), "c"(flags), "d"(mode));
  //return ret;
}

int _close(int fd) {
	//int ret;
  	//asm volatile("int $0x80": "=a"(ret): "a"(6), "b"(fd), "c"(0), "d"(0));
	//return ret;
	return close(fd);
}

off_t _lseek(int fd, off_t offset, int whence) {
	//int ret;
  	//asm volatile("int $0x80": "=a"(ret): "a"(19), "b"(fd), "c"(offset), "d"(whence));
	//return ret;
	return lseek(fd, offset, whence);
}

void _exit(int status){
	//int ret;
  	//asm volatile("int $0x80": "=a"(ret): "a"(1), "b"(status), "c"(0), "d"(0));
	exit(status);
}

int _kill(pid_t pid, int sig){
	//int ret;
  	//asm volatile("int $0x80": "=a"(ret): "a"(37), "b"(pid), "c"(sig), "d"(0));
	//return ret;
	return kill(pid, sig);
}

pid_t _getpid(void){
	//int ret;
  	//asm volatile("int $0x80": "=a"(ret): "a"(20), "b"(0), "c"(0), "d"(0));
	//return ret;
	return getpid(void);
}

int _execve(const char *fname, char * const argv[], char *const envp[]){
	return execve(fname, argv, envp);
//	int ret;
//  asm volatile("int $0x80": "=a"(ret): "a"(11), "b"(fname), "c"(argv), "d"(envp));
//  return ret;
}

void* _sbrk(intptr_t increment){
	return sbrk(increment);
//	int type = 45;            // 214 or 45
//	int ret = -1;
//  asm volatile("int $0x80": "=a"(ret): "a"(type), "b"(increment), "c"(0), "d"(0));
//  return ret;
}

clock_t _times(void *buf) {
  assert(0);
  return 0;
}

int _gettimeofday(struct timeval *tv) {
  assert(0);
  tv->tv_sec = 0;
  tv->tv_usec = 0;
  return 0;
}

int _link(const char *d, const char *n) {
  assert(0);
  return -1;
}

int _unlink(const char *n) {
  assert(0);
  return -1;
}

pid_t _fork() {
  assert(0);
  return -1;
}

pid_t _wait(int *status) {
  assert(0);
  return -1;
}

time_t time(time_t *tloc) {
  return 0;
}

__sighandler_t signal(int num, __sighandler_t handler) {
  return system_call_signal(num. handler);
}

DIR* _opendir(const char* name){
	return opendir(name);
}

struct dirent* _readdir(DIR* dirp){
	return readdir(dirp);
}

int _closedir(DIR* dirp){
	return closedir(dirp);
}
