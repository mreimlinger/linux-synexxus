cmd_fs/romfs/romfs.ko := /home/jtreep/LINUX/gitc/armv7-multiplatform/dl/gcc-linaro-arm-linux-gnueabihf-4.8-2014.04_linux/bin/arm-linux-gnueabihf-ld -EL -r  -T /home/jtreep/LINUX/gitc/armv7-multiplatform/KERNEL/scripts/module-common.lds --build-id  -o fs/romfs/romfs.ko fs/romfs/romfs.o fs/romfs/romfs.mod.o