#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xe8d22f15, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xfbdc27d4, __VMLINUX_SYMBOL_STR(gspca_suspend) },
	{ 0x7de0e863, __VMLINUX_SYMBOL_STR(gspca_dev_probe) },
	{ 0xf153b303, __VMLINUX_SYMBOL_STR(gspca_resume) },
	{ 0x2e30fe46, __VMLINUX_SYMBOL_STR(v4l2_ctrl_new_std) },
	{ 0xf091a853, __VMLINUX_SYMBOL_STR(gspca_disconnect) },
	{ 0xe495880d, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xdad8ec5d, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0x9d13f1a7, __VMLINUX_SYMBOL_STR(gspca_frame_add) },
	{ 0xdd9af733, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_init_class) },
	{ 0xe67f1a0, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=gspca_main";

MODULE_ALIAS("usb:v046Dp0920d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v046Dp0921d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0545p808Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0545p8333d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0923p010Fd*dc*dsc*dp*ic*isc*ip*in*");