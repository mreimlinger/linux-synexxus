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
	{ 0x17807ad1, __VMLINUX_SYMBOL_STR(driver_unregister) },
	{ 0x4ccc87eb, __VMLINUX_SYMBOL_STR(spi_register_driver) },
	{ 0x46b4b4bf, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x79c7ee3d, __VMLINUX_SYMBOL_STR(devm_iio_device_register) },
	{ 0x147b4fa2, __VMLINUX_SYMBOL_STR(devm_request_threaded_irq) },
	{ 0x3a657fb3, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0x8c4c6488, __VMLINUX_SYMBOL_STR(devm_iio_device_alloc) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xf575b77e, __VMLINUX_SYMBOL_STR(iio_push_event) },
	{ 0x46608fa0, __VMLINUX_SYMBOL_STR(getnstimeofday) },
	{ 0xeb31a83c, __VMLINUX_SYMBOL_STR(spi_sync) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x6f9a27f5, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x10da615, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=industrialio";
