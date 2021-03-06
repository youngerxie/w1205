#ifndef _KEY_MAP_H_
#define _KEY_MAP_H_

#include <linux/key_code.h>

//#define KEYPAD_DEBUG
static unsigned char board_key_map[]={
    0x01, KEY_HOME,
    0x0, KEY_BACK,
    0x10, KEY_MENU,
};

#define CONFIG_KEYPAD_ROW_CNT 4
#define CONFIG_KEYPAD_COL_CNT 3
#define CONFIG_KEYPAD_LONG_CNT 0xc
#define CONFIG_KEYPAD_DEBOUNCE_CNT 0x5
#endif //_KEY_MAP_H_
