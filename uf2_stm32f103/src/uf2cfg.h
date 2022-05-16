#define PRODUCT_NAME "YRKB_UPDATE"
#define BOARD_ID "YRKB_UPDATE_F1"
#define INDEX_URL "https://github.com/Oh-My-Mechanical-Keyboard"
#define UF2_NUM_BLOCKS 8000
#define VOLUME_LABEL "YRKB_UPDATE"
// where the UF2 files are allowed to write data - we allow MBR, since it seems part of the softdevice .hex file
#define USER_FLASH_START (uint32_t)(APP_BASE_ADDRESS)
#define USER_FLASH_END (0x08000000+FLASH_SIZE_OVERRIDE)
