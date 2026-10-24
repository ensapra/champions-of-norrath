void func_00152CB8(f32, s32, s32, f32 *);

void func_00154798(void *arg0) {
    f32 buf[4];
    if (*(s32 *)((char *)arg0 + 0x928) != 0) {
        func_00152CB8(*(f32 *)((char *)arg0 + 0x9B8), *(s32 *)((char *)arg0 + 0x9AC),
                      *(s32 *)((char *)arg0 + 0x928), buf);
        *(s32 *)((char *)arg0 + 0x930) = (s32)(buf[3] - buf[2]);
    } else {
        *(s32 *)((char *)arg0 + 0x930) = 0;
    }
}
