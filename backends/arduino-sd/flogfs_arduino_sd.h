#ifndef __FLOGFS_ARDUINO_SD_H_
#define __FLOGFS_ARDUINO_SD_H_

#include <flogfs.h>
#include <flogfs_private.h>

extern "C" {

#include "flogfs_conf_implement.h"

constexpr uint32_t FS_SECTORS_PER_PAGE_INTERNAL = (FS_SECTORS_PER_PAGE + 1);

flog_result_t flogfs_arduino_sd_open(uint8_t cs, flog_initialize_params_t *params);

flog_result_t flogfs_arduino_sd_close();

}

#endif
