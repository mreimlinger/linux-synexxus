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
	{ 0xf7339355, __VMLINUX_SYMBOL_STR(crypto_blkcipher_type) },
	{ 0x7f80a8f2, __VMLINUX_SYMBOL_STR(crypto_unregister_shash) },
	{ 0x1ba180c, __VMLINUX_SYMBOL_STR(crypto_unregister_algs) },
	{ 0x52d62617, __VMLINUX_SYMBOL_STR(crypto_register_shash) },
	{ 0x326cd56, __VMLINUX_SYMBOL_STR(crypto_register_algs) },
	{ 0x23545fd6, __VMLINUX_SYMBOL_STR(blkcipher_walk_done) },
	{ 0xf4d49c83, __VMLINUX_SYMBOL_STR(blkcipher_walk_virt) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

