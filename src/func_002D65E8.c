typedef struct {
    s32 f0;
    volatile s32 ready;
    u8 *data;
} SioDev;
typedef struct {
    char pad[0x18];
    SioDev *dev;
} SioState;
extern SioState D_008DE610;
void func_002D6298(SioDev *);

s32 func_002D65E8(char *buf, s32 n) {
    s32 i;
    for (i = 0; i < n; i++) {
        while (D_008DE610.dev->ready == 0) {
        }
        buf[i] = *D_008DE610.dev->data;
        func_002D6298(D_008DE610.dev);
        if (buf[i] == '\n' || buf[i] == '\r') {
            return i + 1;
        }
    }
    return i;
}
