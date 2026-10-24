typedef struct { u8 pad0[0x30]; s32 size; } NetBuf;
extern void *func_00301FFC(void *, void *, s32);
extern char *func_00304640(char *, char *);
extern s32 func_00304CFC(char *);

s32 func_002E4F00(NetBuf *arg0, s32 arg1, s32 arg2, void *arg3, s32 arg4) {
    s32 rem;
    arg2 *= 4;
    rem = arg0->size - arg2;
    if (arg3 != 0) {
        if (arg4 < 0 || rem < arg4) return -0x21F;
        func_00301FFC((void *)(arg2 + arg1), arg3, arg4);
    }
    return 0;
}

s32 func_002E4F58(NetBuf *arg0, void *arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 rem;
    arg3 *= 4;
    rem = arg0->size - arg3;
    if (arg1 != 0) {
        if (arg4 < 0 || rem < arg4) return -0x21F;
        func_00301FFC(arg1, (void *)(arg3 + arg2), arg4);
    }
    return 0;
}

s32 func_002E4FB0(NetBuf *arg0, s32 arg1, s32 arg2, char *arg3) {
    s32 rem;
    s32 len;
    arg2 *= 4;
    rem = arg0->size - arg2;
    if (arg3 == 0) return 0;
    len = func_00304CFC(arg3) + 1;
    if (len < 0 || rem < len) return -0x21F;
    func_00304640((char *)(arg1 + arg2), arg3);
    return len;
}

s32 func_002E5040(NetBuf *arg0, char *arg1, s32 arg2, s32 arg3) {
    arg3 *= 4;
    if (arg1 != 0) {
        func_00304640(arg1, (char *)(arg2 + arg3));
    }
    return 0;
}
