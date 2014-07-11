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
	{ 0xbb2bb30f, __VMLINUX_SYMBOL_STR(serio_unregister_driver) },
	{ 0x3828e022, __VMLINUX_SYMBOL_STR(__serio_register_driver) },
	{ 0xf087137d, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0xd4669fad, __VMLINUX_SYMBOL_STR(complete) },
	{ 0xd2f44eb7, __VMLINUX_SYMBOL_STR(input_mt_report_pointer_emulation) },
	{ 0x9a6921b9, __VMLINUX_SYMBOL_STR(input_mt_report_slot_state) },
	{ 0x971a15a3, __VMLINUX_SYMBOL_STR(input_event) },
	{ 0x763df15a, __VMLINUX_SYMBOL_STR(input_register_device) },
	{ 0x8ca5cb7f, __VMLINUX_SYMBOL_STR(input_mt_init_slots) },
	{ 0x9c2308c, __VMLINUX_SYMBOL_STR(input_alloc_absinfo) },
	{ 0x88227655, __VMLINUX_SYMBOL_STR(input_set_abs_params) },
	{ 0xdd0a2ba2, __VMLINUX_SYMBOL_STR(strlcat) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x2eb494fe, __VMLINUX_SYMBOL_STR(input_free_device) },
	{ 0x5be4f9bc, __VMLINUX_SYMBOL_STR(serio_open) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x8156188a, __VMLINUX_SYMBOL_STR(input_allocate_device) },
	{ 0x47f03165, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x79222a5, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x7cf9099, __VMLINUX_SYMBOL_STR(wait_for_completion_timeout) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x3a657fb3, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x12640585, __VMLINUX_SYMBOL_STR(input_unregister_device) },
	{ 0xe3cd0a1c, __VMLINUX_SYMBOL_STR(serio_close) },
	{ 0x43c003ff, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("serio:ty02pr39id*ex*");