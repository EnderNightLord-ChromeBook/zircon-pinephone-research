// Copyright 2020 The Fuchsia Authors
//
// Use of this source code is governed by a MIT-style
// license that can be found in the LICENSE file or at
// https://opensource.org/licenses/MIT

#ifndef ZIRCON_KERNEL_TARGET_ARM64_BOARD_PINEPHONE_1_2_BOOT_SHIM_CONFIG_H_
#define ZIRCON_KERNEL_TARGET_ARM64_BOARD_PINEPHONE_1_2_BOOT_SHIM_CONFIG_H_


#endif  // ZIRCON_KERNEL_TARGET_ARM64_BOARD_PINEPHONE_1_2_BOOT_SHIM_CONFIG_H_

static const zbi_mem_range_t mem_config[] = {
    {
        .paddr = 0x40000000,
        .length = 0x80000000,  // (2GB) 
        .type = ZBI_MEM_RANGE_RAM,
    },
    {
        .paddr = 0x01C28000,
        .length = 0x400,
        .type = ZBI_MEM_RANGE_PERIPHERAL,
    },
};

static const zbi_dcfg_simple_t uart_driver = {
    .mmio_phys = 0x01c2800,
    .irq = 0,
};

static const zbi_dcfg_arm_gic_v2_driver_t gic_v2_driver = {
    .mmio_phys = ,
    .gicd_offset = ,
    .gicc_offset = ,
    .ipi_base = ,
};


static const zbi_dcfg_arm_psci_driver_t psci_driver = {
    .use_hvc = false,
};

static const zbi_dcfg_arm_generic_timer_driver_t timer_driver = {
    .irq_phys = ,
    .irq_virt = ,
};

static const zbi_platform_id_t platform_id = {
    .vid = PDEV_VID_ALLWINNER,
    .pid = PDEV_PID_PINEPHONE,
    .board_name = "PinePhone-1.2",
};