#ifndef __FLOGFS_LINUX_MMAP_IMPLEMENT_H_
#define __FLOGFS_LINUX_MMAP_IMPLEMENT_H_

typedef void *fs_lock_t;

void fs_lock_init(fs_lock_t *lock);

void fs_lock(fs_lock_t *lock);

void fs_unlock(fs_lock_t *lock);

flog_result_t flash_init();

void flash_lock();

void flash_unlock();

flog_result_t flash_open_page(uint16_t block, uint16_t page);

void flash_close_page();

flog_result_t flash_erase_block(uint16_t block);

flog_result_t flash_block_is_bad();

void flash_set_bad_block();

void flash_commit();

flog_result_t flash_read_sector(uint8_t *dst, uint8_t sector, uint16_t offset, uint16_t n);

flog_result_t flash_read_spare(uint8_t *dst, uint8_t sector);

void flash_write_sector(uint8_t const *src, uint8_t sector, uint16_t offset, uint16_t n);

void flash_write_spare(uint8_t const *src, uint8_t sector);

void flash_debug_warn(char const *msg);

void flash_debug_error(char const *msg);

#endif