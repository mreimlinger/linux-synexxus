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
	{ 0x83f9ea8f, __VMLINUX_SYMBOL_STR(w1_unregister_family) },
	{ 0x8b6addd2, __VMLINUX_SYMBOL_STR(w1_register_family) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x6eca2b7d, __VMLINUX_SYMBOL_STR(w1_reset_bus) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x3758cea0, __VMLINUX_SYMBOL_STR(w1_write_8) },
	{ 0x6f9a27f5, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x10da615, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x46b4b4bf, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x13362108, __VMLINUX_SYMBOL_STR(w1_read_block) },
	{ 0x37cbf86a, __VMLINUX_SYMBOL_STR(w1_write_block) },
	{ 0xdd11f8c9, __VMLINUX_SYMBOL_STR(w1_reset_select_slave) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=wire";
