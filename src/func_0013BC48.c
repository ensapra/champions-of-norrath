extern void (*D_010CE5E4)(void);
extern void (*D_010CE5E8)(void);
extern void (*D_010CE5EC)(void);
void func_0013BC20(void) { if (D_010CE5E4 != 0) D_010CE5E4(); }
void func_0013BC48(void) { if (D_010CE5E8 != 0) D_010CE5E8(); }
void func_0013BC70(void) { if (D_010CE5EC != 0) D_010CE5EC(); }
extern s32 func_00149360(void *);
extern void func_001493C8(void *, s32);
s32 func_00158A94(s32 a) {
    s32 s[2];
    s32 c;
    s[0] = a;
    s[1] = a;
    c = func_00149360(s);
    switch (c) {
    case 0x306F: case 0x3072: case 0x3075: case 0x3078: case 0x307B:
    case 0x30CF: case 0x30D2: case 0x30D5: case 0x30D8: case 0x30DB:
        break;
    default:
        return -1;
    }
    func_001493C8(&s[1], c + 2);
    return 1;
}
