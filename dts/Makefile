# if KERNELRELEASE is defined, we've been invoked from kernel build system
# and can use its langage
ifneq ($(KERNELRELEASE),)
	obj-m := test.o
# otherwise we were called directly from the command line; invok kbuild system
else
	#safe asignement
	KERNELDIR ?="./KernelHeaders"
	#call out the shell to execute command pwd 
	PWD := $(shell pwd)

.PHONY: modules
modules:
	$(MAKE) -C $(KERNELDIR) M=$(PWD) modules
endif

.PHONY: clean
clean:
	$(MAKE) -C $(KERNELDIR) M=$(PWD) clean

CFLAGS_test.o := -DDEBUG

