/*
 *    command/mkdir.c
 *
 *    Copyright (C) 2016 ximo<ximoos@foxmail.com>
 */

#include <sys/syscall.h>
#include <sys/unistd.h>
#include <stdio.h>

__syscall1(int,mkdir,char *,filename);

int main(int argc, char **argv)
{
	if(argc<2){
		printf("Usage:mkdir name ...");
	}
	return mkdir(argv[1]);
}
