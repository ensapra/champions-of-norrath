extern s32 func_001403C8(void);
extern s32 func_001403D8(void);
extern s32 func_001403F8(void);
extern void func_00140F48(s32);
extern u8 func_001C6788[];

s32 func_00140460(void) {
    if (func_001403D8() == 0 && func_001403F8() == -1) {
        func_00140F48(-1);
        return;
    }
    if (func_001403F8() != -1) {
        *(s32 *)(func_001C6788 + 0xE4) = func_001403F8();
        return func_001403C8();
    }
}
