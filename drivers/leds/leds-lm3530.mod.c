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
	{ 0xbd7eb7a6, __VMLINUX_SYMBOL_STR(device_remove_file) },
	{ 0x5ddaadd2, __VMLINUX_SYMBOL_STR(regulator_disable) },
	{ 0x44b98a15, __VMLINUX_SYMBOL_STR(led_classdev_unregister) },
	{ 0xd2b6de94, __VMLINUX_SYMBOL_STR(device_create_file) },
	{ 0x3b7239c1, __VMLINUX_SYMBOL_STR(led_classdev_register) },
	{ 0xef845dad, __VMLINUX_SYMBOL_STR(devm_regulator_get) },
	{ 0x3a657fb3, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0x564906d2, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x222e7ce2, __VMLINUX_SYMBOL_STR(sysfs_streq) },
	{ 0x43c003ff, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x46b4b4bf, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x43ecd27b, __VMLINUX_SYMBOL_STR(regulator_enable) },
	{ 0x78885352, __VMLINUX_SYMBOL_STR(i2c_smbus_write_byte_data) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("i2c:lm3530-led");