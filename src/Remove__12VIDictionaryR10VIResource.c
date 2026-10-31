/* machine draft (m2c) for ee-gcc-2.96 -Os -G8 -mno-check-zero-division, tried by autopilot */
#ifndef M2C_DEFINES
#define M2C_DEFINES
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#define M2C_ERROR(desc) (0)
#define M2C_CARRY 0
#define M2C_OVERFLOW(a) (0)
#endif

s32 End__Ct5VIMap2ZUiZQ212VIDictionary11VIDictEntry(s32); /* extern */
s32 Erase__t5VIMap2ZUiZQ212VIDictionary11VIDictEntryi(s32, s32); /* extern */
s32 Find__Ct5VIMap2ZUiZQ212VIDictionary11VIDictEntryRCUi(); /* extern */

s32 Remove__12VIDictionaryR10VIResource(s32 arg0) {
    s32 temp_17;

    temp_17 = Find__Ct5VIMap2ZUiZQ212VIDictionary11VIDictEntryRCUi();
    if (temp_17 == End__Ct5VIMap2ZUiZQ212VIDictionary11VIDictEntry(arg0)) {
        return -1;
    }
    return (Erase__t5VIMap2ZUiZQ212VIDictionary11VIDictEntryi(arg0, temp_17) >= 0) ? 0 : -1;
}
