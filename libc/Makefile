ISA = native-newlib

NAME = libc
SRCS = $(shell find src/ -name "*.c" -o -name "*.S" -o -name "*.cpp")

LIB_DIR ?= $(shell pwd)
INC_DIR += $(LIB_DIR)/include/
DST_DIR ?= $(LIB_DIR)/build/$(ISA)/
ARCHIVE ?= $(LIB_DIR)/build/$(NAME)-$(ISA).a

.DEFAULT_GOAL = $(ARCHIVE)

ifneq ($(ISA), native)
LIBS += libc
endif

INC_DIR += $(addsuffix /include/, $(addprefix $(NAVY_HOME)/libs/, $(LIBS)))

$(shell mkdir -p $(DST_DIR))

include $(NAVY_HOME)/Makefile.compile

$(ARCHIVE): $(OBJS)
	@echo + AR $@
	@ar rcs $(ARCHIVE) $(OBJS)

.PHONY: clean
clean: 
	rm -rf $(LIB_DIR)/build/
