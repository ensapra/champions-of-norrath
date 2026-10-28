typedef struct { s32 id; volatile s32 len; s32 pad; s32 busy; u8 *buf; } S_8DE610;
extern S_8DE610 D_008DE610;
extern u8 D_008DE640[];
extern s32 func_002DD640();
extern void func_002DD698();
extern s32 func_002DF8C8(s32, s32, u8*, s32, s32);
extern void func_002DF8F8(s32);
s32 func_002D6470(s8 *src, s32 n) {
    s32 total = 0, i = 0, lock;
    u8 *buf, *dst;
    if (D_008DE610.busy == 0) {
        lock = func_002DD640();
        D_008DE610.busy = 1;
        buf = (u8*)((u32)D_008DE640 | 0x20000000);
        D_008DE610.buf = buf;
        dst = buf + 12;
        while (--n != -1) {
            if (*src == 10) {
                *dst++ = 13;
                i++;
                if (i >= 0x100) break;
            }
            *dst++ = *src++;
            i++;
            total++;
            if (i >= 0x100) break;
        }
        D_008DE610.len = i + 12;
        *(s16*)buf = D_008DE610.len;
        if (func_002DF8C8(D_008DE610.id, (s8)buf[7], buf, 10, -1) < 0) {
            D_008DE610.busy = 0;
            if (lock) { func_002DD698(); return -1; }
            return -1;
        }
        while (D_008DE610.busy) func_002DF8F8(D_008DE610.id);
        if (lock) { func_002DD698(); return total; }
        return total;
    }
    return -1;
}
