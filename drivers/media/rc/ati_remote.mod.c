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
	{ 0x8d2e268b, __VMLINUX_SYMBOL_STR(param_ops_ulong) },
	{ 0xb6b46a7c, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x33ba5cd4, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0xe495880d, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0xe67f1a0, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x971a15a3, __VMLINUX_SYMBOL_STR(input_event) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{ 0x9665f522, __VMLINUX_SYMBOL_STR(rc_g_keycode_from_table) },
	{ 0x7f417d87, __VMLINUX_SYMBOL_STR(rc_keyup) },
	{ 0xe35df827, __VMLINUX_SYMBOL_STR(rc_keydown_notimeout) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x2eb494fe, __VMLINUX_SYMBOL_STR(input_free_device) },
	{ 0x763df15a, __VMLINUX_SYMBOL_STR(input_register_device) },
	{ 0xeab84fda, __VMLINUX_SYMBOL_STR(rc_free_device) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0x8156188a, __VMLINUX_SYMBOL_STR(input_allocate_device) },
	{ 0x6eceebdd, __VMLINUX_SYMBOL_STR(rc_register_device) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xb840f323, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0xdd0a2ba2, __VMLINUX_SYMBOL_STR(strlcat) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x7be5470a, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
	{ 0x407b57cf, __VMLINUX_SYMBOL_STR(usb_alloc_coherent) },
	{ 0xcc07f119, __VMLINUX_SYMBOL_STR(rc_allocate_device) },
	{ 0x47f03165, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x79222a5, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0x1cfb04fa, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x344b7739, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x7c74d300, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0xd85cd67e, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0xac8f37b2, __VMLINUX_SYMBOL_STR(outer_cache) },
	{ 0x46b4b4bf, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x2448324c, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x6f9a27f5, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x10da615, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x3d9d606d, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x15bdea9b, __VMLINUX_SYMBOL_STR(rc_unregister_device) },
	{ 0x12640585, __VMLINUX_SYMBOL_STR(input_unregister_device) },
	{ 0xe1342755, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0x3a657fb3, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0x43c003ff, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0x67db1c26, __VMLINUX_SYMBOL_STR(usb_free_coherent) },
	{ 0xd2dd49fa, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x6dc71b43, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v0BC7p0002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BC7p0003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BC7p0004d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BC7p0005d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BC7p0006d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BC7p0008d*dc*dsc*dp*ic*isc*ip*in*");
