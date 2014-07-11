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
	{ 0xd4370660, __VMLINUX_SYMBOL_STR(i2c_del_driver) },
	{ 0x2e01cd89, __VMLINUX_SYMBOL_STR(i2c_register_driver) },
	{ 0x3d9d606d, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x64b1672e, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_setup) },
	{ 0x6dc71b43, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x508932b8, __VMLINUX_SYMBOL_STR(v4l2_clk_get) },
	{ 0x2e30fe46, __VMLINUX_SYMBOL_STR(v4l2_ctrl_new_std) },
	{ 0xdd9af733, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_init_class) },
	{ 0xe2bf113a, __VMLINUX_SYMBOL_STR(v4l2_i2c_subdev_init) },
	{ 0x564906d2, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0xf0d2e75e, __VMLINUX_SYMBOL_STR(soc_camera_power_on) },
	{ 0xde59df32, __VMLINUX_SYMBOL_STR(soc_camera_power_off) },
	{ 0x46b4b4bf, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xf5ef842e, __VMLINUX_SYMBOL_STR(v4l_bound_align_image) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0xad3af6a1, __VMLINUX_SYMBOL_STR(soc_camera_apply_board_flags) },
	{ 0xd9b2657, __VMLINUX_SYMBOL_STR(i2c_smbus_read_byte_data) },
	{ 0x7c74d300, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x78885352, __VMLINUX_SYMBOL_STR(i2c_smbus_write_byte_data) },
	{ 0x51a1826e, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_free) },
	{ 0x240482a1, __VMLINUX_SYMBOL_STR(v4l2_device_unregister_subdev) },
	{ 0xf0307cc1, __VMLINUX_SYMBOL_STR(v4l2_clk_put) },
	{ 0x43c003ff, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=soc_camera";

MODULE_ALIAS("i2c:rj54n1cb0c");