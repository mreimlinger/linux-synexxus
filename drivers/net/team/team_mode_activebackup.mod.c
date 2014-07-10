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
	{ 0x84fa9bd6, __VMLINUX_SYMBOL_STR(team_mode_unregister) },
	{ 0x9c156a33, __VMLINUX_SYMBOL_STR(team_mode_register) },
	{ 0x85e1998f, __VMLINUX_SYMBOL_STR(team_option_inst_set_change) },
	{ 0xd1b570a7, __VMLINUX_SYMBOL_STR(team_options_register) },
	{ 0xa786ab4c, __VMLINUX_SYMBOL_STR(team_options_unregister) },
	{ 0x190dd71e, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0x7e80c0df, __VMLINUX_SYMBOL_STR(netpoll_send_skb_on_dev) },
	{ 0xf73e44f9, __VMLINUX_SYMBOL_STR(dev_queue_xmit) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=team";

