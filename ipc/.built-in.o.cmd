cmd_ipc/built-in.o :=  /home/jtreep/LINUX/gitc/armv7-multiplatform/dl/gcc-linaro-arm-linux-gnueabihf-4.8-2014.04_linux/bin/arm-linux-gnueabihf-ld -EL    -r -o ipc/built-in.o ipc/util.o ipc/msgutil.o ipc/msg.o ipc/sem.o ipc/shm.o ipc/ipcns_notifier.o ipc/syscall.o ipc/ipc_sysctl.o ipc/mqueue.o ipc/namespace.o ipc/mq_sysctl.o 