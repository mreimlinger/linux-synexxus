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
	{ 0x1005f526, __VMLINUX_SYMBOL_STR(genphy_read_status) },
	{ 0x4f683dc5, __VMLINUX_SYMBOL_STR(genphy_config_aneg) },
	{ 0x81fa85de, __VMLINUX_SYMBOL_STR(phy_driver_unregister) },
	{ 0x5cb7527c, __VMLINUX_SYMBOL_STR(phy_driver_register) },
	{ 0xaf5414f2, __VMLINUX_SYMBOL_STR(mdiobus_read) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xe29933b2, __VMLINUX_SYMBOL_STR(mdiobus_write) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("mdio:0000000000011000000101000100????");
