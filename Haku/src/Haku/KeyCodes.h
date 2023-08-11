#pragma once



#define HK_KEY_UNKNOWN            -1

/* Printable keys */
#define HK_KEY_SPACE              32
#define HK_KEY_APOSTROPHE         39  /* ' */
#define HK_KEY_COMMA              44  /* , */
#define HK_KEY_MINUS              45  /* - */
#define HK_KEY_PERIOD             46  /* . */
#define HK_KEY_SLASH              47  /* / */
#define HK_KEY_0                  48
#define HK_KEY_1                  49
#define HK_KEY_2                  50
#define HK_KEY_3                  51
#define HK_KEY_4                  52
#define HK_KEY_5                  53
#define HK_KEY_6                  54
#define HK_KEY_7                  55
#define HK_KEY_8                  56
#define HK_KEY_9                  57
#define HK_KEY_SEMICOLON          59  /* ; */
#define HK_KEY_EQUAL              61  /* = */
#define HK_KEY_A                  65
#define HK_KEY_B                  66
#define HK_KEY_C                  67
#define HK_KEY_D                  68
#define HK_KEY_E                  69
#define HK_KEY_F                  70
#define HK_KEY_G                  71
#define HK_KEY_H                  72
#define HK_KEY_I                  73
#define HK_KEY_J                  74
#define HK_KEY_K                  75
#define HK_KEY_L                  76
#define HK_KEY_M                  77
#define HK_KEY_N                  78
#define HK_KEY_O                  79
#define HK_KEY_P                  80
#define HK_KEY_Q                  81
#define HK_KEY_R                  82
#define HK_KEY_S                  83
#define HK_KEY_T                  84
#define HK_KEY_U                  85
#define HK_KEY_V                  86
#define HK_KEY_W                  87
#define HK_KEY_X                  88
#define HK_KEY_Y                  89
#define HK_KEY_Z                  90
#define HK_KEY_LEFT_BRACKET       91  /* [ */
#define HK_KEY_BACKSLASH          92  /* \ */
#define HK_KEY_RIGHT_BRACKET      93  /* ] */
#define HK_KEY_GRAVE_ACCENT       96  /* ` */
#define HK_KEY_WORLD_1            161 /* non-US #1 */
#define HK_KEY_WORLD_2            162 /* non-US #2 */

/* Function keys */
#define HK_KEY_ESCAPE             256
#define HK_KEY_ENTER              257
#define HK_KEY_TAB                258
#define HK_KEY_BACKSPACE          259
#define HK_KEY_INSERT             260
#define HK_KEY_DELETE             261
#define HK_KEY_RIGHT              262
#define HK_KEY_LEFT               263
#define HK_KEY_DOWN               264
#define HK_KEY_UP                 265
#define HK_KEY_PAGE_UP            266
#define HK_KEY_PAGE_DOWN          267
#define HK_KEY_HOME               268
#define HK_KEY_END                269
#define HK_KEY_CAPS_LOCK          280
#define HK_KEY_SCROLL_LOCK        281
#define HK_KEY_NUM_LOCK           282
#define HK_KEY_PRINT_SCREEN       283
#define HK_KEY_PAUSE              284
#define HK_KEY_F1                 290
#define HK_KEY_F2                 291
#define HK_KEY_F3                 292
#define HK_KEY_F4                 293
#define HK_KEY_F5                 294
#define HK_KEY_F6                 295
#define HK_KEY_F7                 296
#define HK_KEY_F8                 297
#define HK_KEY_F9                 298
#define HK_KEY_F10                299
#define HK_KEY_F11                300
#define HK_KEY_F12                301
#define HK_KEY_F13                302
#define HK_KEY_F14                303
#define HK_KEY_F15                304
#define HK_KEY_F16                305
#define HK_KEY_F17                306
#define HK_KEY_F18                307
#define HK_KEY_F19                308
#define HK_KEY_F20                309
#define HK_KEY_F21                310
#define HK_KEY_F22                311
#define HK_KEY_F23                312
#define HK_KEY_F24                313
#define HK_KEY_F25                314
#define HK_KEY_KP_0               320
#define HK_KEY_KP_1               321
#define HK_KEY_KP_2               322
#define HK_KEY_KP_3               323
#define HK_KEY_KP_4               324
#define HK_KEY_KP_5               325
#define HK_KEY_KP_6               326
#define HK_KEY_KP_7               327
#define HK_KEY_KP_8               328
#define HK_KEY_KP_9               329
#define HK_KEY_KP_DECIMAL         330
#define HK_KEY_KP_DIVIDE          331
#define HK_KEY_KP_MULTIPLY        332
#define HK_KEY_KP_SUBTRACT        333
#define HK_KEY_KP_ADD             334
#define HK_KEY_KP_ENTER           335
#define HK_KEY_KP_EQUAL           336
#define HK_KEY_LEFT_SHIFT         340
#define HK_KEY_LEFT_CONTROL       341
#define HK_KEY_LEFT_ALT           342
#define HK_KEY_LEFT_SUPER         343
#define HK_KEY_RIGHT_SHIFT        344
#define HK_KEY_RIGHT_CONTROL      345
#define HK_KEY_RIGHT_ALT          346
#define HK_KEY_RIGHT_SUPER        347
#define HK_KEY_MENU               348

#define HK_KEY_LAST               HK_KEY_MENU