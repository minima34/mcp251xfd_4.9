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

#ifdef RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xb622add4, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0xb077e70a, __VMLINUX_SYMBOL_STR(clk_unprepare) },
	{ 0x37772302, __VMLINUX_SYMBOL_STR(netdev_info) },
	{ 0x72e45ac7, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x2ee13d59, __VMLINUX_SYMBOL_STR(__pm_runtime_idle) },
	{ 0x1fdc7df2, __VMLINUX_SYMBOL_STR(_mcount) },
	{ 0xc10a3bde, __VMLINUX_SYMBOL_STR(register_candev) },
	{ 0xe2d285ae, __VMLINUX_SYMBOL_STR(can_rx_offload_queue_sorted) },
	{ 0x815588a6, __VMLINUX_SYMBOL_STR(clk_enable) },
	{ 0x9b53b5a1, __VMLINUX_SYMBOL_STR(__pm_runtime_disable) },
	{ 0xb6dd4a4c, __VMLINUX_SYMBOL_STR(of_device_get_match_data) },
	{ 0xf26e9b32, __VMLINUX_SYMBOL_STR(netdev_notice) },
	{ 0x8917b0f2, __VMLINUX_SYMBOL_STR(napi_disable) },
	{ 0xc342a923, __VMLINUX_SYMBOL_STR(regmap_raw_write) },
	{ 0xefea137, __VMLINUX_SYMBOL_STR(regmap_exit) },
	{ 0x6ed020ea, __VMLINUX_SYMBOL_STR(alloc_can_err_skb) },
	{ 0x5530592f, __VMLINUX_SYMBOL_STR(regulator_disable) },
	{ 0x98e4209d, __VMLINUX_SYMBOL_STR(regmap_update_bits_base) },
	{ 0xb346573b, __VMLINUX_SYMBOL_STR(can_dlc2len) },
	{ 0xb6e6d99d, __VMLINUX_SYMBOL_STR(clk_disable) },
	{ 0x8527f7c1, __VMLINUX_SYMBOL_STR(regmap_bulk_read) },
	{ 0xc87c1f84, __VMLINUX_SYMBOL_STR(ktime_get) },
	{ 0x2716ca7f, __VMLINUX_SYMBOL_STR(__spi_register_driver) },
	{ 0xe93e49c3, __VMLINUX_SYMBOL_STR(devres_free) },
	{ 0x7e0b034a, __VMLINUX_SYMBOL_STR(__pm_runtime_resume) },
	{ 0x91a927a6, __VMLINUX_SYMBOL_STR(regmap_read) },
	{ 0xa87cf413, __VMLINUX_SYMBOL_STR(clear_bit) },
	{ 0xfc8e33d0, __VMLINUX_SYMBOL_STR(spi_setup) },
	{ 0x90497f9b, __VMLINUX_SYMBOL_STR(can_rx_offload_get_echo_skb) },
	{ 0xb9e1813e, __VMLINUX_SYMBOL_STR(alloc_candev) },
	{ 0x556e4390, __VMLINUX_SYMBOL_STR(clk_get_rate) },
	{ 0xd70b6664, __VMLINUX_SYMBOL_STR(devres_alloc_node) },
	{ 0x42ff70c3, __VMLINUX_SYMBOL_STR(__dynamic_netdev_dbg) },
	{ 0x73be3802, __VMLINUX_SYMBOL_STR(can_rx_offload_enable) },
	{ 0x354cb307, __VMLINUX_SYMBOL_STR(can_bus_off) },
	{ 0xdcb764ad, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x56792b6b, __VMLINUX_SYMBOL_STR(close_candev) },
	{ 0x6d254ed1, __VMLINUX_SYMBOL_STR(spi_async) },
	{ 0x6493208b, __VMLINUX_SYMBOL_STR(netif_tx_wake_queue) },
	{ 0x7a5ca1b2, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x78741f33, __VMLINUX_SYMBOL_STR(__regmap_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xc1e8d3a4, __VMLINUX_SYMBOL_STR(of_find_property) },
	{ 0xcaa336fa, __VMLINUX_SYMBOL_STR(driver_unregister) },
	{ 0xd6b8e852, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0x14b0afcb, __VMLINUX_SYMBOL_STR(free_candev) },
	{ 0x352b8478, __VMLINUX_SYMBOL_STR(devm_kfree) },
	{ 0x54047af2, __VMLINUX_SYMBOL_STR(can_rx_offload_add_fifo) },
	{ 0x1d0940ce, __VMLINUX_SYMBOL_STR(spi_sync) },
	{ 0x72769ace, __VMLINUX_SYMBOL_STR(can_change_mtu) },
	{ 0x7b9d5564, __VMLINUX_SYMBOL_STR(can_change_state) },
	{ 0xa7ef5aed, __VMLINUX_SYMBOL_STR(unregister_candev) },
	{ 0x10a900c, __VMLINUX_SYMBOL_STR(alloc_can_skb) },
	{ 0x12a38747, __VMLINUX_SYMBOL_STR(usleep_range) },
	{ 0x197d6cef, __VMLINUX_SYMBOL_STR(pm_runtime_enable) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x40b273ae, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x7c9a7371, __VMLINUX_SYMBOL_STR(clk_prepare) },
	{ 0x2592ca4c, __VMLINUX_SYMBOL_STR(__pm_runtime_set_status) },
	{ 0x33c2418, __VMLINUX_SYMBOL_STR(devm_regulator_get_optional) },
	{ 0xb4fd6ce1, __VMLINUX_SYMBOL_STR(netdev_err) },
	{ 0xb89870e4, __VMLINUX_SYMBOL_STR(devm_gpiod_put) },
	{ 0x85acf3e2, __VMLINUX_SYMBOL_STR(devres_add) },
	{ 0xbc4dc2b7, __VMLINUX_SYMBOL_STR(devm_clk_get) },
	{ 0xc0e33471, __VMLINUX_SYMBOL_STR(open_candev) },
	{ 0x5c1a1b97, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x74438c96, __VMLINUX_SYMBOL_STR(devm_gpiod_get_optional) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xb76dde6f, __VMLINUX_SYMBOL_STR(spi_write_then_read) },
	{ 0x4829a47e, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xae8c4d0c, __VMLINUX_SYMBOL_STR(set_bit) },
	{ 0xa9dfb764, __VMLINUX_SYMBOL_STR(spi_get_device_id) },
	{ 0x1bb2aab4, __VMLINUX_SYMBOL_STR(alloc_canfd_skb) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x222c295a, __VMLINUX_SYMBOL_STR(can_len2dlc) },
	{ 0x3319b608, __VMLINUX_SYMBOL_STR(can_put_echo_skb) },
	{ 0xcf4ef45f, __VMLINUX_SYMBOL_STR(can_rx_offload_del) },
	{ 0xddfc70b, __VMLINUX_SYMBOL_STR(of_property_read_variable_u32_array) },
	{ 0x80e73598, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x9c7c310b, __VMLINUX_SYMBOL_STR(regmap_write) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
	{ 0x4eb93d0c, __VMLINUX_SYMBOL_STR(regulator_enable) },
	{ 0x2f5112f, __VMLINUX_SYMBOL_STR(gpiod_get_value_cansleep) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("of:N*T*Cmicrochip,mcp2517fd");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp2517fdC*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp2518fd");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp2518fdC*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp251xfd");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp251xfdC*");
MODULE_ALIAS("spi:mcp2517fd");
MODULE_ALIAS("spi:mcp2518fd");
MODULE_ALIAS("spi:mcp251xfd");

MODULE_INFO(srcversion, "ECF855227416901158C1E79");
