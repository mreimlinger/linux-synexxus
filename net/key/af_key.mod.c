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
	{ 0x9daae8b3, __VMLINUX_SYMBOL_STR(seq_release_net) },
	{ 0x7aa48271, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0x3bd247d7, __VMLINUX_SYMBOL_STR(seq_lseek) },
	{ 0x4ce39368, __VMLINUX_SYMBOL_STR(sock_no_sendpage) },
	{ 0x4946abf7, __VMLINUX_SYMBOL_STR(sock_no_mmap) },
	{ 0xbefd0e23, __VMLINUX_SYMBOL_STR(sock_no_getsockopt) },
	{ 0xa171f67e, __VMLINUX_SYMBOL_STR(sock_no_setsockopt) },
	{ 0x29da0440, __VMLINUX_SYMBOL_STR(sock_no_shutdown) },
	{ 0xf4561adb, __VMLINUX_SYMBOL_STR(sock_no_listen) },
	{ 0x418f0323, __VMLINUX_SYMBOL_STR(sock_no_ioctl) },
	{ 0xeaf6eed3, __VMLINUX_SYMBOL_STR(datagram_poll) },
	{ 0xf545989f, __VMLINUX_SYMBOL_STR(sock_no_getname) },
	{ 0x5bd715a2, __VMLINUX_SYMBOL_STR(sock_no_accept) },
	{ 0xe14e84b8, __VMLINUX_SYMBOL_STR(sock_no_socketpair) },
	{ 0x74b6c81f, __VMLINUX_SYMBOL_STR(sock_no_connect) },
	{ 0x487fb73b, __VMLINUX_SYMBOL_STR(sock_no_bind) },
	{ 0x73586135, __VMLINUX_SYMBOL_STR(xfrm_register_km) },
	{ 0x4f0c3219, __VMLINUX_SYMBOL_STR(sock_register) },
	{ 0xca872e04, __VMLINUX_SYMBOL_STR(register_pernet_subsys) },
	{ 0xab51c64c, __VMLINUX_SYMBOL_STR(proto_register) },
	{ 0xf1f859ea, __VMLINUX_SYMBOL_STR(proto_unregister) },
	{ 0x665cfc11, __VMLINUX_SYMBOL_STR(unregister_pernet_subsys) },
	{ 0x62737e1d, __VMLINUX_SYMBOL_STR(sock_unregister) },
	{ 0xb100befd, __VMLINUX_SYMBOL_STR(xfrm_unregister_km) },
	{ 0x7e18060c, __VMLINUX_SYMBOL_STR(init_net) },
	{ 0x7a8ca627, __VMLINUX_SYMBOL_STR(xfrm_count_pfkey_enc_supported) },
	{ 0xa575945, __VMLINUX_SYMBOL_STR(xfrm_count_pfkey_auth_supported) },
	{ 0x28e23139, __VMLINUX_SYMBOL_STR(xfrm_probe_algs) },
	{ 0x1e9edfb7, __VMLINUX_SYMBOL_STR(seq_hlist_start_head_rcu) },
	{ 0x67b78eb3, __VMLINUX_SYMBOL_STR(seq_hlist_next_rcu) },
	{ 0x8f342243, __VMLINUX_SYMBOL_STR(xfrm_state_delete) },
	{ 0x4e95fdab, __VMLINUX_SYMBOL_STR(xfrm_audit_state_delete) },
	{ 0xc599a772, __VMLINUX_SYMBOL_STR(security_xfrm_state_delete) },
	{ 0x95be2b43, __VMLINUX_SYMBOL_STR(xfrm_state_lookup) },
	{ 0x286fd401, __VMLINUX_SYMBOL_STR(xfrm_alloc_spi) },
	{ 0xf10526ac, __VMLINUX_SYMBOL_STR(verify_spi_info) },
	{ 0x230bb9c3, __VMLINUX_SYMBOL_STR(xfrm_find_acq) },
	{ 0x778770, __VMLINUX_SYMBOL_STR(xfrm_ealg_get_byname) },
	{ 0x7c30b8c7, __VMLINUX_SYMBOL_STR(xfrm_calg_get_byname) },
	{ 0xe122af95, __VMLINUX_SYMBOL_STR(xfrm_aalg_get_byname) },
	{ 0x56bb269, __VMLINUX_SYMBOL_STR(xfrm_ealg_get_byidx) },
	{ 0x74e1a843, __VMLINUX_SYMBOL_STR(xfrm_aalg_get_byidx) },
	{ 0xf9f00a3f, __VMLINUX_SYMBOL_STR(xfrm_policy_byid) },
	{ 0x9267b0d0, __VMLINUX_SYMBOL_STR(proc_create_data) },
	{ 0x9fb3dd30, __VMLINUX_SYMBOL_STR(memcpy_fromiovec) },
	{ 0xbc8b0f41, __VMLINUX_SYMBOL_STR(xfrm_calg_get_byid) },
	{ 0x92dbc6c1, __VMLINUX_SYMBOL_STR(xfrm_aalg_get_byid) },
	{ 0xc946559c, __VMLINUX_SYMBOL_STR(xfrm_init_state) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
	{ 0xce7a55c1, __VMLINUX_SYMBOL_STR(xfrm_ealg_get_byid) },
	{ 0xa071b39b, __VMLINUX_SYMBOL_STR(xfrm_state_add) },
	{ 0x6a80ef53, __VMLINUX_SYMBOL_STR(xfrm_audit_state_add) },
	{ 0xcc8abb34, __VMLINUX_SYMBOL_STR(xfrm_state_update) },
	{ 0x27866435, __VMLINUX_SYMBOL_STR(security_xfrm_state_alloc) },
	{ 0x23a59979, __VMLINUX_SYMBOL_STR(xfrm_state_alloc) },
	{ 0x674b3682, __VMLINUX_SYMBOL_STR(xfrm_audit_policy_add) },
	{ 0x47857a29, __VMLINUX_SYMBOL_STR(xfrm_policy_insert) },
	{ 0xdc9f4a67, __VMLINUX_SYMBOL_STR(xfrm_garbage_collect) },
	{ 0x78f7e106, __VMLINUX_SYMBOL_STR(xfrm_audit_policy_delete) },
	{ 0xa9c63b69, __VMLINUX_SYMBOL_STR(security_xfrm_policy_free) },
	{ 0xeb6fa3bd, __VMLINUX_SYMBOL_STR(xfrm_policy_bysel_ctx) },
	{ 0x70118305, __VMLINUX_SYMBOL_STR(xfrm_migrate) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x42b0bdd9, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0x1ffc7684, __VMLINUX_SYMBOL_STR(sock_i_ino) },
	{ 0x27f15ec9, __VMLINUX_SYMBOL_STR(from_kuid_munged) },
	{ 0x5c2f43a8, __VMLINUX_SYMBOL_STR(sock_i_uid) },
	{ 0xbc39c43f, __VMLINUX_SYMBOL_STR(seq_open_net) },
	{ 0x47bd4ef0, __VMLINUX_SYMBOL_STR(remove_proc_entry) },
	{ 0xc2cdbf1, __VMLINUX_SYMBOL_STR(synchronize_sched) },
	{ 0xc0056be5, __VMLINUX_SYMBOL_STR(_raw_write_unlock_bh) },
	{ 0x6ec9ccdb, __VMLINUX_SYMBOL_STR(_raw_write_lock_bh) },
	{ 0xfcc113b, __VMLINUX_SYMBOL_STR(__xfrm_state_destroy) },
	{ 0xdd3916ac, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xa1d55e90, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x971c8c81, __VMLINUX_SYMBOL_STR(xfrm_find_acq_byseq) },
	{ 0xd2d5c847, __VMLINUX_SYMBOL_STR(km_state_notify) },
	{ 0x27a87bff, __VMLINUX_SYMBOL_STR(xfrm_state_flush) },
	{ 0x4e72c517, __VMLINUX_SYMBOL_STR(xfrm_state_walk) },
	{ 0x3bfeca6, __VMLINUX_SYMBOL_STR(xfrm_state_walk_done) },
	{ 0x5b3eba1e, __VMLINUX_SYMBOL_STR(xfrm_state_walk_init) },
	{ 0x47f03165, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x79222a5, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x8b6f76b, __VMLINUX_SYMBOL_STR(skb_copy) },
	{ 0x99506728, __VMLINUX_SYMBOL_STR(km_policy_notify) },
	{ 0x8ec3dbaf, __VMLINUX_SYMBOL_STR(xfrm_policy_flush) },
	{ 0x6f9a27f5, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x10da615, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x9341f9d, __VMLINUX_SYMBOL_STR(sock_init_data) },
	{ 0x5d157dae, __VMLINUX_SYMBOL_STR(sk_alloc) },
	{ 0xd2936c14, __VMLINUX_SYMBOL_STR(ns_capable) },
	{ 0x93537a5f, __VMLINUX_SYMBOL_STR(__sock_recv_ts_and_drops) },
	{ 0x750e2ba5, __VMLINUX_SYMBOL_STR(skb_free_datagram) },
	{ 0xf7667600, __VMLINUX_SYMBOL_STR(skb_copy_datagram_iovec) },
	{ 0x5e4603d8, __VMLINUX_SYMBOL_STR(skb_recv_datagram) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x7ac9d215, __VMLINUX_SYMBOL_STR(skb_queue_purge) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xb15cb614, __VMLINUX_SYMBOL_STR(security_xfrm_policy_alloc) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x9d1df165, __VMLINUX_SYMBOL_STR(xfrm_policy_destroy) },
	{ 0xcca84881, __VMLINUX_SYMBOL_STR(xfrm_policy_alloc) },
	{ 0x1667f53d, __VMLINUX_SYMBOL_STR(xfrm_policy_walk_done) },
	{ 0xe5ed5467, __VMLINUX_SYMBOL_STR(xfrm_policy_walk_init) },
	{ 0x392f20c2, __VMLINUX_SYMBOL_STR(xfrm_policy_walk) },
	{ 0xe463cc3f, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0xb3a9772a, __VMLINUX_SYMBOL_STR(skb_clone) },
	{ 0xbff781de, __VMLINUX_SYMBOL_STR(sk_free) },
	{ 0x979c23ba, __VMLINUX_SYMBOL_STR(skb_queue_tail) },
	{ 0xfc86a943, __VMLINUX_SYMBOL_STR(sock_rfree) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x708609aa, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0x7fc7bfa2, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=xfrm_algo";
