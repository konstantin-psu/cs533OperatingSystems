#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
 .name = KBUILD_MODNAME,
 .init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
 .exit = cleanup_module,
#endif
 .arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x616457c1, "module_layout" },
	{ 0xc4722ded, "schedule_delayed_work" },
	{ 0x34a1448e, "init_timer_key" },
	{ 0x8d8905a8, "kmem_cache_alloc_trace" },
	{ 0x76918c6, "malloc_sizes" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x15bd7627, "create_proc_entry" },
	{ 0x985558a1, "printk" },
	{ 0x37a0cba, "kfree" },
	{ 0x2807cfc, "cancel_delayed_work_sync" },
	{ 0xfee01009, "remove_proc_entry" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "ED56A11ACAA238771912D75");
