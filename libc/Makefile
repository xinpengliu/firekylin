#
#    libc/Makefile
#
#    Copyright (C) 2016 ximo<ximoos@foxmail.com>
#

AS=nasm
CC=gcc

SFLAGS=-f elf32
CFLAGS=-c -x c -Wall -m32 -std=c99 -nostdinc -nostdlib -fno-builtin \
       -fno-stack-protector -I ../include
      
PREFIX=~/part1/lib

include crt/sub.mk
include ctype/sub.mk
include dirent/sub.mk
include math/sub.mk
include setjmp/sub.mk
include signal/sub.mk
include stdio/sub.mk
include stdlib/sub.mk
include string/sub.mk
include time/sub.mk
include unistd/sub.mk
     
.s.o:
	@echo         AS	$<
	@$(AS) $(SFLAGS) -o $@  $<
.c.o:
	@echo         CC	$<
	@$(CC) $(CFLAGS) -o $@  $<

libc.a: $(LIBC_OBJ)
	@echo         AR       OBJS
	@ar rcs   libc.a     $(LIBC_OBJ) 

install:libc.a
	cp libc.a $(PREFIX)/libc.a

clean: 
	@echo libc cleaning...
	@-rm libc.a $(LIBC_OBJ)

count:
	@echo dirs:  $(shell ls -lR |grep ^d |wc -l)
	@echo files: $(shell ls -lR |grep ^- |wc -l)
	@echo lines: $(shell find . -name *.[chs] |xargs grep -v ^$$ |wc -l)
