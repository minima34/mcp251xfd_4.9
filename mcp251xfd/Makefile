# SPDX-License-Identifier: GPL-2.0-only

obj-$(CONFIG_CAN_MCP251XFD) += mcp251xfd.o

mcp251xfd-objs :=
mcp251xfd-objs += mcp251xfd-core.o
mcp251xfd-objs += mcp251xfd-crc16.o
mcp251xfd-objs += mcp251xfd-regmap.o

all:
	$(MAKE) ARCH=arm64 CROSS_COMPILE=aarch64-linux-gnu- -C ~/workspace/a133_new/longan/kernel/linux-4.9 M=$(PWD) modules