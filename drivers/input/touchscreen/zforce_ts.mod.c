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
	{ 0xd4370660, __VMLINUX_SYMBOL_STR(i2c_del_driver) },
	{ 0x2e01cd89, __VMLINUX_SYMBOL_STR(i2c_register_driver) },
	{ 0x3ce4ca6f, __VMLINUX_SYMBOL_STR(disable_irq) },
	{ 0xfcec0987, __VMLINUX_SYMBOL_STR(enable_irq) },
	{ 0xce2840e7, __VMLINUX_SYMBOL_STR(irq_set_irq_wake) },
	{ 0xd0b5fc1d, __VMLINUX_SYMBOL_STR(of_property_read_u32_array) },
	{ 0xa12d929d, __VMLINUX_SYMBOL_STR(desc_to_gpio) },
	{ 0x5335e1f0, __VMLINUX_SYMBOL_STR(of_get_named_gpiod_flags) },
	{ 0x763df15a, __VMLINUX_SYMBOL_STR(input_register_device) },
	{ 0xbf592552, __VMLINUX_SYMBOL_STR(device_set_wakeup_capable) },
	{ 0x147b4fa2, __VMLINUX_SYMBOL_STR(devm_request_threaded_irq) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x3a657fb3, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0x8ca5cb7f, __VMLINUX_SYMBOL_STR(input_mt_init_slots) },
	{ 0x88227655, __VMLINUX_SYMBOL_STR(input_set_abs_params) },
	{ 0xb840f323, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x32efbb71, __VMLINUX_SYMBOL_STR(devm_input_allocate_device) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x6b160fc8, __VMLINUX_SYMBOL_STR(devm_add_action) },
	{ 0x9aba2ac3, __VMLINUX_SYMBOL_STR(devm_gpio_request_one) },
	{ 0x564906d2, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x687934e9, __VMLINUX_SYMBOL_STR(gpiod_set_raw_value) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x13fd70ff, __VMLINUX_SYMBOL_STR(pm_stay_awake) },
	{ 0x2e8eea9e, __VMLINUX_SYMBOL_STR(pm_relax) },
	{ 0xba80b63d, __VMLINUX_SYMBOL_STR(input_mt_report_finger_count) },
	{ 0x166485f4, __VMLINUX_SYMBOL_STR(input_mt_sync_frame) },
	{ 0x9a6921b9, __VMLINUX_SYMBOL_STR(input_mt_report_slot_state) },
	{ 0x971a15a3, __VMLINUX_SYMBOL_STR(input_event) },
	{ 0xc155fcf4, __VMLINUX_SYMBOL_STR(i2c_master_recv) },
	{ 0x5f419491, __VMLINUX_SYMBOL_STR(gpiod_get_raw_value) },
	{ 0xf816c866, __VMLINUX_SYMBOL_STR(gpio_to_desc) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xd4669fad, __VMLINUX_SYMBOL_STR(complete) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x6c1c57d9, __VMLINUX_SYMBOL_STR(pm_wakeup_event) },
	{ 0x3d9d606d, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x43c003ff, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x7c74d300, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x46b4b4bf, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x7cf9099, __VMLINUX_SYMBOL_STR(wait_for_completion_timeout) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{ 0x6f9a27f5, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x6c432ffa, __VMLINUX_SYMBOL_STR(i2c_master_send) },
	{ 0x10da615, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xd03a5c4e, __VMLINUX_SYMBOL_STR(mutex_trylock) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("of:N*T*Cneonode,zforce*");
MODULE_ALIAS("i2c:zforce-ts");