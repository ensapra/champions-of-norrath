extern char jtbl_004C006C[];
void func_001A1568(void *, s32, void *);
void func_001A2660(void *, s32, s32);
void func_0019416C(void *, s32, s32, s32, void *);
void func_0019A0B0(void *, s32, s32, s32);
s32 func_00198D10(void *arg0, s32 arg1, s32 arg2, s32 arg3, void *arg4) {
    s32 i, count;
    u32 *table;
    u32 *dst;
    u32 start, end;
    if (arg0 == NULL) func_001A1568(jtbl_004C006C + 0xF2EC, 0xAB, jtbl_004C006C + 0xF30C);
    if (arg1 == 0) func_001A1568(jtbl_004C006C + 0xF2EC, 0xAC, jtbl_004C006C + 0xF31C);
    if (arg3 == 0) func_001A1568(jtbl_004C006C + 0xF2EC, 0xAD, jtbl_004C006C + 0xF32C);
    if (arg4 == NULL) {
        func_001A1568(jtbl_004C006C + 0xF2EC, 0xAE, jtbl_004C006C + 0xF344);
    }
    func_001A2660((char *)arg0 + 0xF0, 0, 0xDA0);
    *(void **)((char *)arg0 + 0xE88) = arg4;
    *(s32 *)((char *)arg0 + 0x48) = 0;
    *(s32 *)((char *)arg0 + 0xA84) = -1;
    func_0019416C(arg0, arg1, arg2, arg3, arg4);
    table = *(u32 **)((char *)arg0 + 0xE88);
    i = 0; count = 0;
    for (;;) {
        u32 *entry = table + i * 2;
        start = entry[0];
        end = entry[1];
        if (start == 0 && end == 0) break;
        if (start < end) {
            dst = (u32 *)((char *)arg0 + 0x120) + count;
            do {
                *dst++ = start;
                start += 0x10;
                count++;
                table = *(u32 **)((char *)arg0 + 0xE88);
                entry = table + i * 2;
                end = entry[1];
            } while (start < end);
        }
        i++;
        table = *(u32 **)((char *)arg0 + 0xE88);
    }
    *(s32 *)((char *)arg0 + 0xA80) = count;
    func_0019A0B0(arg0, 0, 0, i);
    return 0;
}
