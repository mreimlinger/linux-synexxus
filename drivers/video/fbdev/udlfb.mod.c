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
	{ 0x33ba5cd4, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0xb6b46a7c, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x14e4fe1b, __VMLINUX_SYMBOL_STR(fb_sys_read) },
	{ 0xe495880d, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0xe67f1a0, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xb45c6f18, __VMLINUX_SYMBOL_STR(device_create_bin_file) },
	{ 0xd2b6de94, __VMLINUX_SYMBOL_STR(device_create_file) },
	{ 0xdbfeb11d, __VMLINUX_SYMBOL_STR(register_framebuffer) },
	{ 0x7a890c8, __VMLINUX_SYMBOL_STR(fb_alloc_cmap) },
	{ 0x959dd28, __VMLINUX_SYMBOL_STR(framebuffer_alloc) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x40a9b349, __VMLINUX_SYMBOL_STR(vzalloc) },
	{ 0xd6ee688f, __VMLINUX_SYMBOL_STR(vmalloc) },
	{ 0x6f9a27f5, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x65f3ad9a, __VMLINUX_SYMBOL_STR(fb_videomode_to_var) },
	{ 0x487f831, __VMLINUX_SYMBOL_STR(fb_find_best_display) },
	{ 0xda8af7ad, __VMLINUX_SYMBOL_STR(fb_find_nearest_mode) },
	{ 0xa1b759ce, __VMLINUX_SYMBOL_STR(fb_add_videomode) },
	{ 0xa598e29c, __VMLINUX_SYMBOL_STR(vesa_modes) },
	{ 0xff9ca065, __VMLINUX_SYMBOL_STR(fb_edid_to_monspecs) },
	{ 0xdad8ec5d, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0x10da615, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x9924c496, __VMLINUX_SYMBOL_STR(__usb_get_extra_descriptor) },
	{ 0x407b57cf, __VMLINUX_SYMBOL_STR(usb_alloc_coherent) },
	{ 0x7be5470a, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
	{ 0x593a99b, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0xa6f94a6c, __VMLINUX_SYMBOL_STR(usb_get_descriptor) },
	{ 0x46b4b4bf, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x4d048269, __VMLINUX_SYMBOL_STR(fb_sys_write) },
	{ 0xfdd2e26, __VMLINUX_SYMBOL_STR(sys_fillrect) },
	{ 0x26e2ca7c, __VMLINUX_SYMBOL_STR(sys_copyarea) },
	{ 0x62878cf4, __VMLINUX_SYMBOL_STR(sys_imageblit) },
	{ 0x67c2fa54, __VMLINUX_SYMBOL_STR(__copy_to_user) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xfbc74f64, __VMLINUX_SYMBOL_STR(__copy_from_user) },
	{ 0xf76b0a59, __VMLINUX_SYMBOL_STR(read_current_timer) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0x2448324c, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0x837d0f0a, __VMLINUX_SYMBOL_STR(down_timeout) },
	{ 0xf05ffa15, __VMLINUX_SYMBOL_STR(fb_var_to_videomode) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x98b71c6, __VMLINUX_SYMBOL_STR(fb_dealloc_cmap) },
	{ 0xe3e94dd3, __VMLINUX_SYMBOL_STR(framebuffer_release) },
	{ 0xc9561772, __VMLINUX_SYMBOL_STR(fb_destroy_modelist) },
	{ 0x1dc36131, __VMLINUX_SYMBOL_STR(fb_destroy_modedb) },
	{ 0x6289907f, __VMLINUX_SYMBOL_STR(unregister_framebuffer) },
	{ 0xec768c91, __VMLINUX_SYMBOL_STR(fb_deferred_io_init) },
	{ 0x47f03165, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x79222a5, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xf8c416e1, __VMLINUX_SYMBOL_STR(fb_deferred_io_cleanup) },
	{ 0xb92f93a7, __VMLINUX_SYMBOL_STR(remap_pfn_range) },
	{ 0x3744cf36, __VMLINUX_SYMBOL_STR(vmalloc_to_pfn) },
	{ 0xfacd2e14, __VMLINUX_SYMBOL_STR(pgprot_user) },
	{ 0x3a657fb3, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0xee8975a5, __VMLINUX_SYMBOL_STR(unlink_framebuffer) },
	{ 0x85ae1847, __VMLINUX_SYMBOL_STR(device_remove_bin_file) },
	{ 0xbd7eb7a6, __VMLINUX_SYMBOL_STR(device_remove_file) },
	{ 0x1afae5e7, __VMLINUX_SYMBOL_STR(down_interruptible) },
	{ 0xd2dd49fa, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0x67db1c26, __VMLINUX_SYMBOL_STR(usb_free_coherent) },
	{ 0xe851bb05, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x4be7fb63, __VMLINUX_SYMBOL_STR(up) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x43c003ff, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v17E9p*d*dc*dsc*dp*icFFisc00ip00in*");