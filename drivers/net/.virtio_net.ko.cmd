cmd_drivers/net/virtio_net.ko := /home/jtreep/LINUX/gitc/armv7-multiplatform/dl/gcc-linaro-arm-linux-gnueabihf-4.8-2014.04_linux/bin/arm-linux-gnueabihf-ld -EL -r  -T /home/jtreep/LINUX/gitc/armv7-multiplatform/KERNEL/scripts/module-common.lds --build-id  -o drivers/net/virtio_net.ko drivers/net/virtio_net.o drivers/net/virtio_net.mod.o