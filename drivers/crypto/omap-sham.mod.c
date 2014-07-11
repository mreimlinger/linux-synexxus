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
	{ 0x83ea2ea9, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x968a83d8, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0xcf32fe9b, __VMLINUX_SYMBOL_STR(crypto_alloc_shash) },
	{ 0x3d9d606d, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0xfd7aece4, __VMLINUX_SYMBOL_STR(crypto_destroy_tfm) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0x2a3aa678, __VMLINUX_SYMBOL_STR(_test_and_clear_bit) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0xfe1afc6, __VMLINUX_SYMBOL_STR(crypto_dequeue_request) },
	{ 0x9213f3ba, __VMLINUX_SYMBOL_STR(crypto_enqueue_request) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x8dc07f95, __VMLINUX_SYMBOL_STR(page_address) },
	{ 0xc9341eea, __VMLINUX_SYMBOL_STR(mem_map) },
	{ 0x5fb99b53, __VMLINUX_SYMBOL_STR(arm_dma_ops) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xf88c3301, __VMLINUX_SYMBOL_STR(sg_init_table) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0xeece4d66, __VMLINUX_SYMBOL_STR(__dma_request_channel) },
	{ 0xdb6f3aab, __VMLINUX_SYMBOL_STR(omap_dma_filter_fn) },
	{ 0x4f527045, __VMLINUX_SYMBOL_STR(crypto_register_ahash) },
	{ 0x6dc71b43, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x7662a76, __VMLINUX_SYMBOL_STR(pm_runtime_enable) },
	{ 0xc171524b, __VMLINUX_SYMBOL_STR(dma_request_slave_channel) },
	{ 0x147b4fa2, __VMLINUX_SYMBOL_STR(devm_request_threaded_irq) },
	{ 0xcb715d9b, __VMLINUX_SYMBOL_STR(devm_ioremap_resource) },
	{ 0xb31e0771, __VMLINUX_SYMBOL_STR(platform_get_irq) },
	{ 0x8061d568, __VMLINUX_SYMBOL_STR(platform_get_resource) },
	{ 0x46b4b4bf, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x42550386, __VMLINUX_SYMBOL_STR(irq_of_parse_and_map) },
	{ 0x43fb7c07, __VMLINUX_SYMBOL_STR(of_address_to_resource) },
	{ 0x4e7b3c05, __VMLINUX_SYMBOL_STR(of_match_device) },
	{ 0x499043d3, __VMLINUX_SYMBOL_STR(crypto_init_queue) },
	{ 0x9545af6d, __VMLINUX_SYMBOL_STR(tasklet_init) },
	{ 0x3a657fb3, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0x564906d2, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x7aa13692, __VMLINUX_SYMBOL_STR(dma_release_channel) },
	{ 0xf83362bd, __VMLINUX_SYMBOL_STR(__pm_runtime_disable) },
	{ 0x82072614, __VMLINUX_SYMBOL_STR(tasklet_kill) },
	{ 0x212ecaf5, __VMLINUX_SYMBOL_STR(crypto_unregister_ahash) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x43c003ff, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0x42dfb5a8, __VMLINUX_SYMBOL_STR(crypto_shash_finup) },
	{ 0x925b5731, __VMLINUX_SYMBOL_STR(crypto_shash_update) },
	{ 0x4bfb7c00, __VMLINUX_SYMBOL_STR(__pm_runtime_idle) },
	{ 0xd5152710, __VMLINUX_SYMBOL_STR(sg_next) },
	{ 0xed93f29e, __VMLINUX_SYMBOL_STR(__kunmap_atomic) },
	{ 0x48f68751, __VMLINUX_SYMBOL_STR(kmap_atomic) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x98bf483, __VMLINUX_SYMBOL_STR(__pm_runtime_resume) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x3e701144, __VMLINUX_SYMBOL_STR(crypto_shash_digest) },
	{ 0xcb1c16c, __VMLINUX_SYMBOL_STR(crypto_shash_setkey) },
	{ 0x7c74d300, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xdd3916ac, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xa1d55e90, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0xfaef0ed, __VMLINUX_SYMBOL_STR(__tasklet_schedule) },
	{ 0xca54fee, __VMLINUX_SYMBOL_STR(_test_and_set_bit) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("of:N*T*Cti,omap2-sham*");
MODULE_ALIAS("of:N*T*Cti,omap4-sham*");
MODULE_ALIAS("of:N*T*Cti,omap5-sham*");