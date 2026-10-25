s32 func_00143C38(s32);

s32 func_00155200(void *arg0, void *arg1) {
    u8 *p = arg1;
    *(s32 *)p = func_00143C38(*(s32 *)((char *)arg0 + 0x4C)); p += 4;
    *(s32 *)p = func_00143C38(*(s32 *)((char *)arg0 + 0x50)); p += 4;
    *(s32 *)p = func_00143C38(*(s32 *)((char *)arg0 + 0x54)); p += 4;
    *(s32 *)p = func_00143C38(*(s32 *)((char *)arg0 + 0x58)); p += 4;
    *(s32 *)p = *(s32 *)((char *)arg0 + 0x0C); p += 4;
    *(s32 *)p = *(s32 *)((char *)arg0 + 0x94); p += 4;
    *(s32 *)p = *(s32 *)((char *)arg0 + 0x90); p += 4;
    *(s16 *)p = (s16)(*(f32 *)((char *)arg0 + 0x20)); p += 2;
    *(s16 *)p = (s16)(*(f32 *)((char *)arg0 + 0x1C)); p += 2;
    return (s32)(p - (u8 *)arg1);
}
