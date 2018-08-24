# Busybox

## 目标
移植Busybox到nanos上

## Busybox来源
https://launchpad.net/ubuntu/+source/busybox/1:1.21.0-1ubuntu1

## 进度
此版本Busybox共有353个程序，这里暂时先移植8个程序。   
该项目中包含可执行的busybox文件，可以运行并查看效果。  
现在已完成如下程序（括号内为该程序所在目录）：
> cat（coreutils）  
> echo（coreutils）  
> grep（findutils）  
> ls（coreutils）  
> printf（coreutils）  
> seq（coreutils）  
> vi（editors）  
> wc（coreutils）  

## Busybox的配置与编译
虽然这里只有8个程序，但可以通过配置编译脚本的方式支持更多的程序，具体方法：  
1. make distclean  
（清除配置文件及可执行文件）
2. make nemuconfig  
（这里会出现图形化的配置界面，可以在此勾选想要的程序，完成后可自动生成配置文件）
3. make  
（完成后生成可执行的busybox文件）  

## 所需的系统调用及库函数
### 系统调用
write，read，open，close，lseek，exit，execve，sbrk，opendir，readdir，closedir，fstat，stat，signal，mmap，munmap，getpid，poll, fork
### 库函数
这里仅列出newlib不支持的库函数，这些库函数我暂时使用本地的实现。  
这些库函数有如下几类：  
> 1. 与terminal相关的接口：tcgetattr()，tcsetattr()，ioctl()  
> 2. 与正则表达式相关：regcomp()，regexec()，re_compile_pattern()，re_search()  
> 3. 其他：sigsetjmp()，siglongjmp()，getenv()，getopt()，writev()    
