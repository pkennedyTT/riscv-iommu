// Copyright (c) 2022 by Rivos Inc.
// Licensed under the Apache License, Version 2.0, see LICENSE for details.
// SPDX-License-Identifier: Apache-2.0
// Author: ved@rivosinc.com
#ifndef __IOMMU_INTERRUPT_H__
#define __IOMMU_INTERRUPT_H__

enum {
    COMMAND_QUEUE = 0,
    FAULT_QUEUE   = 1,
    HPM           = 2,
    PAGE_QUEUE    = 3,
};

enum {
    MSI_VEC_CTRL_MASK_BIT = 1,
};

extern void generate_interrupt(iommu_t *iommu, uint8_t unit);
extern void release_pending_interrupt(iommu_t *iommu, uint8_t vec);
#endif // __IOMMU_INTERRUPT_H__
