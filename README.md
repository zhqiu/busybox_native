# Busybox

## 目标
移植Busybox到nanos上

## 来源
https://launchpad.net/ubuntu/+source/busybox/1:1.21.0-1ubuntu1

## 进度
此版本Busybox共有353个程序，这里暂时先移植8个程序。 
已完成如下程序：
> cat  
> echo  
> grep  
> ls  
> printf  
> seq  
> vi  
> wc  

## Busybox的配置与编译
虽然这里只有8个程序，但可以通过配置编译脚本支持更多的程序，具体方法：  
1. make distclean  
2. make nemuconfig  
（这里会出现图形化的配置界面，可以在此勾选想要的程序）
3. make  
之后便会出现可执行的程序
