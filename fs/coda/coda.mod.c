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
	{ 0x6bc3fbc0, __VMLINUX_SYMBOL_STR(__unregister_chrdev) },
	{ 0x11960b55, __VMLINUX_SYMBOL_STR(kmem_cache_destroy) },
	{ 0x79222a5, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x405c1144, __VMLINUX_SYMBOL_STR(get_seconds) },
	{ 0x20c9297f, __VMLINUX_SYMBOL_STR(drop_nlink) },
	{ 0xfbc74f64, __VMLINUX_SYMBOL_STR(__copy_from_user) },
	{ 0xcfebce5, __VMLINUX_SYMBOL_STR(generic_file_llseek) },
	{ 0x3fab3ca9, __VMLINUX_SYMBOL_STR(register_sysctl_table) },
	{ 0x3545e739, __VMLINUX_SYMBOL_STR(__remove_inode_hash) },
	{ 0x67c2fa54, __VMLINUX_SYMBOL_STR(__copy_to_user) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x60a13e90, __VMLINUX_SYMBOL_STR(rcu_barrier) },
	{ 0x6a6eb6bb, __VMLINUX_SYMBOL_STR(filemap_write_and_wait_range) },
	{ 0xfe5168d1, __VMLINUX_SYMBOL_STR(iget5_locked) },
	{ 0xc1d8cfaf, __VMLINUX_SYMBOL_STR(__fdget) },
	{ 0x2ec67a59, __VMLINUX_SYMBOL_STR(kill_anon_super) },
	{ 0x4c86184b, __VMLINUX_SYMBOL_STR(remove_wait_queue) },
	{ 0xe43274bc, __VMLINUX_SYMBOL_STR(proc_dointvec) },
	{ 0x26183d16, __VMLINUX_SYMBOL_STR(is_bad_inode) },
	{ 0x83668240, __VMLINUX_SYMBOL_STR(touch_atime) },
	{ 0xe4dfbb85, __VMLINUX_SYMBOL_STR(dput) },
	{ 0xbdf3369e, __VMLINUX_SYMBOL_STR(device_destroy) },
	{ 0xe074807d, __VMLINUX_SYMBOL_STR(__register_chrdev) },
	{ 0x5780813, __VMLINUX_SYMBOL_STR(inc_nlink) },
	{ 0xb2bd5155, __VMLINUX_SYMBOL_STR(d_find_alias) },
	{ 0x3f2a0f29, __VMLINUX_SYMBOL_STR(init_user_ns) },
	{ 0x6f9a27f5, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xe9c0ba1e, __VMLINUX_SYMBOL_STR(vfs_fsync) },
	{ 0x3fd8666f, __VMLINUX_SYMBOL_STR(generic_read_dir) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0xb0d4bed, __VMLINUX_SYMBOL_STR(mount_nodev) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x28124e6f, __VMLINUX_SYMBOL_STR(make_kgid) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xffd5a395, __VMLINUX_SYMBOL_STR(default_wake_function) },
	{ 0x2216975b, __VMLINUX_SYMBOL_STR(__insert_inode_hash) },
	{ 0x8e15d0d0, __VMLINUX_SYMBOL_STR(kernel_read) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xdaf23bd8, __VMLINUX_SYMBOL_STR(from_kuid) },
	{ 0xb840f323, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x7646d580, __VMLINUX_SYMBOL_STR(kunmap) },
	{ 0x4096bf3b, __VMLINUX_SYMBOL_STR(from_kgid) },
	{ 0x84b183ae, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0x8fc4ff01, __VMLINUX_SYMBOL_STR(kmem_cache_free) },
	{ 0x10da615, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x2dbe2bff, __VMLINUX_SYMBOL_STR(set_nlink) },
	{ 0xd181e812, __VMLINUX_SYMBOL_STR(noop_llseek) },
	{ 0x709e5548, __VMLINUX_SYMBOL_STR(device_create) },
	{ 0x1c77112, __VMLINUX_SYMBOL_STR(unlock_page) },
	{ 0x7cfe4001, __VMLINUX_SYMBOL_STR(shrink_dcache_sb) },
	{ 0x82e5f1a3, __VMLINUX_SYMBOL_STR(fput) },
	{ 0x21dd63c, __VMLINUX_SYMBOL_STR(__task_pid_nr_ns) },
	{ 0x413947c5, __VMLINUX_SYMBOL_STR(ilookup5) },
	{ 0x5d6ff74e, __VMLINUX_SYMBOL_STR(inode_init_once) },
	{ 0x7802bb87, __VMLINUX_SYMBOL_STR(page_follow_link_light) },
	{ 0x40a9b349, __VMLINUX_SYMBOL_STR(vzalloc) },
	{ 0x78f25a9, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0xbc10dd97, __VMLINUX_SYMBOL_STR(__put_user_4) },
	{ 0xc72c034a, __VMLINUX_SYMBOL_STR(kmap) },
	{ 0x6bad5a16, __VMLINUX_SYMBOL_STR(truncate_inode_pages_final) },
	{ 0xdaf2fd26, __VMLINUX_SYMBOL_STR(make_kuid) },
	{ 0xe912da6b, __VMLINUX_SYMBOL_STR(unregister_sysctl_table) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0xfb6af58d, __VMLINUX_SYMBOL_STR(recalc_sigpending) },
	{ 0x3507a132, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0xb8bb7a94, __VMLINUX_SYMBOL_STR(unlock_new_inode) },
	{ 0x8922742e, __VMLINUX_SYMBOL_STR(bdi_setup_and_register) },
	{ 0xdcdbd39a, __VMLINUX_SYMBOL_STR(d_drop) },
	{ 0x1c16584f, __VMLINUX_SYMBOL_STR(default_file_splice_read) },
	{ 0x18356b93, __VMLINUX_SYMBOL_STR(d_prune_aliases) },
	{ 0x485eff21, __VMLINUX_SYMBOL_STR(user_path_at) },
	{ 0x98622b25, __VMLINUX_SYMBOL_STR(shrink_dcache_parent) },
	{ 0x8a17ee98, __VMLINUX_SYMBOL_STR(path_put) },
	{ 0x47f03165, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x565e4259, __VMLINUX_SYMBOL_STR(kmem_cache_create) },
	{ 0x4849f2ef, __VMLINUX_SYMBOL_STR(register_filesystem) },
	{ 0xd85cd67e, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0xe7b5973a, __VMLINUX_SYMBOL_STR(init_pid_ns) },
	{ 0xc7bcbc8d, __VMLINUX_SYMBOL_STR(add_wait_queue) },
	{ 0x9a6e05c4, __VMLINUX_SYMBOL_STR(iput) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x49a37575, __VMLINUX_SYMBOL_STR(ihold) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x59502f01, __VMLINUX_SYMBOL_STR(__sb_end_write) },
	{ 0xa75312bc, __VMLINUX_SYMBOL_STR(call_rcu_sched) },
	{ 0xb8dddeda, __VMLINUX_SYMBOL_STR(d_splice_alias) },
	{ 0xba068adc, __VMLINUX_SYMBOL_STR(sync_filesystem) },
	{ 0x81180950, __VMLINUX_SYMBOL_STR(fget) },
	{ 0xaba9d563, __VMLINUX_SYMBOL_STR(__sb_start_write) },
	{ 0xbc0f8342, __VMLINUX_SYMBOL_STR(generic_readlink) },
	{ 0x78a82936, __VMLINUX_SYMBOL_STR(class_destroy) },
	{ 0x3e04cd87, __VMLINUX_SYMBOL_STR(d_make_root) },
	{ 0x351895a8, __VMLINUX_SYMBOL_STR(bdi_destroy) },
	{ 0x603bb4bc, __VMLINUX_SYMBOL_STR(task_active_pid_ns) },
	{ 0xb1ee16b3, __VMLINUX_SYMBOL_STR(unregister_filesystem) },
	{ 0x9aa76ab2, __VMLINUX_SYMBOL_STR(init_special_inode) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xbe2da885, __VMLINUX_SYMBOL_STR(new_inode) },
	{ 0x65f6a2cc, __VMLINUX_SYMBOL_STR(__class_create) },
	{ 0x4de8eeaa, __VMLINUX_SYMBOL_STR(clear_inode) },
	{ 0xcc33f0a0, __VMLINUX_SYMBOL_STR(page_put_link) },
	{ 0x7661c898, __VMLINUX_SYMBOL_STR(d_instantiate) },
	{ 0x1f06efa2, __VMLINUX_SYMBOL_STR(clear_nlink) },
	{ 0xfb175a43, __VMLINUX_SYMBOL_STR(generic_fillattr) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "16F7736761209C5EE66BA16");