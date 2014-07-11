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
	{ 0xea090fd8, __VMLINUX_SYMBOL_STR(usb_serial_deregister_drivers) },
	{ 0xead3450, __VMLINUX_SYMBOL_STR(usb_serial_register_drivers) },
	{ 0x35ee0995, __VMLINUX_SYMBOL_STR(usb_serial_generic_close) },
	{ 0x8470cb17, __VMLINUX_SYMBOL_STR(usb_serial_generic_open) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xdad8ec5d, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0x47f03165, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x79222a5, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x7c74d300, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbserial";

MODULE_ALIAS("usb:v19D2pFFFFd*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v19D2pFFFEd*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v19D2pFFFDd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v19D2pFFFCd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v19D2pFFFBd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v19D2pFFF6d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v19D2pFFF7d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v19D2pFFF8d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v19D2pFFF9d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v19D2pFFEEd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v19D2pFFEDd*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v19D2pFFEBd*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v19D2pFFECd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05C6p3197d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05C6p6000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05C6p9008d*dc*dsc*dp*ic*isc*ip*in*");