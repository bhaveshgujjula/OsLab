#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>

int main()
{
	int fd,fd1,pointer,n;
	char a[30];
	fd=open("Doc2.txt",O_CREAT|O_RDWR,0777);
	n = read(0,a,100);
	write(fd,a,n);
	fd1 = open("gk.txt",O_RDWR);
	pointer = lseek(fd1,-6,SEEK_END);
	read(fd1,a,5);
	write(1,a,5);

}
