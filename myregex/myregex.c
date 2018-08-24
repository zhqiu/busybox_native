#include <sys/types.h>
#include <regex.h>

extern const char *my_re_compile_pattern (const char *__pattern, size_t __length,
				       struct re_pattern_buffer *__buffer)
{
	return re_compile_pattern(__pattern, __length, __buffer);
}

extern int my_re_search (struct re_pattern_buffer *__buffer, const char *__string,
		      int __length, int __start, int __range,
		      struct re_registers *__regs)
{
	return re_search(__buffer, __string, __length, __start, __range, __regs);
}

extern int my_re_match (struct re_pattern_buffer *__buffer, const char *__string,
		     int __length, int __start, struct re_registers *__regs)
{
	return re_match(__buffer, __string, __length, __start, __regs);
}

extern int my_re_exec (const char * __string){
	return re_exec(__string);
}

extern int my_regcomp (regex_t *__restrict __preg,
		    const char *__restrict __pattern,
		    int __cflags)
{
	return regcomp(__preg, __pattern, __cflags);
}

extern int my_regexec (const regex_t *__restrict __preg,
		    const char *__restrict __string, size_t __nmatch,
		    regmatch_t __pmatch[__restrict_arr],
		    int __eflags)
{
	return regexec(__preg, __string, __nmatch, __pmatch, __eflags);
}

extern size_t my_regerror (int __errcode, const regex_t *__restrict __preg,
			char *__restrict __errbuf, size_t __errbuf_size)
{
	return regerror(__errcode, __preg, __errbuf, __errbuf_size);
}

extern void my_regfree (regex_t *__preg)
{
	return regfree(__preg);
}


