cmd_arch/arm/boot/dts/imx31-bug.dtb := /home/jtreep/LINUX/gitc/armv7-multiplatform/dl/gcc-linaro-arm-linux-gnueabihf-4.8-2014.04_linux/bin/arm-linux-gnueabihf-gcc -E -Wp,-MD,arch/arm/boot/dts/.imx31-bug.dtb.d.pre.tmp -nostdinc -I/home/jtreep/LINUX/gitc/armv7-multiplatform/KERNEL/arch/arm/boot/dts -I/home/jtreep/LINUX/gitc/armv7-multiplatform/KERNEL/arch/arm/boot/dts/include -I/home/jtreep/LINUX/gitc/armv7-multiplatform/KERNEL/drivers/of/testcase-data -undef -D__DTS__ -x assembler-with-cpp -o arch/arm/boot/dts/.imx31-bug.dtb.dts.tmp arch/arm/boot/dts/imx31-bug.dts ; /home/jtreep/LINUX/gitc/armv7-multiplatform/KERNEL/scripts/dtc/dtc -O dtb -o arch/arm/boot/dts/imx31-bug.dtb -b 0 -i arch/arm/boot/dts/  -d arch/arm/boot/dts/.imx31-bug.dtb.d.dtc.tmp arch/arm/boot/dts/.imx31-bug.dtb.dts.tmp ; cat arch/arm/boot/dts/.imx31-bug.dtb.d.pre.tmp arch/arm/boot/dts/.imx31-bug.dtb.d.dtc.tmp > arch/arm/boot/dts/.imx31-bug.dtb.d

source_arch/arm/boot/dts/imx31-bug.dtb := arch/arm/boot/dts/imx31-bug.dts

deps_arch/arm/boot/dts/imx31-bug.dtb := \
  arch/arm/boot/dts/imx31.dtsi \
  arch/arm/boot/dts/skeleton.dtsi \

arch/arm/boot/dts/imx31-bug.dtb: $(deps_arch/arm/boot/dts/imx31-bug.dtb)

$(deps_arch/arm/boot/dts/imx31-bug.dtb):