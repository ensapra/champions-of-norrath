s32 func_00149360(s32 *);
void func_001493C8(s32 *, s32);

s32 func_00158A20(s32 a) {
    s32 x = a;
    s32 v;
    v = func_00149360(&x);
    switch (v) {
    case 0x304B:
        v++;
        break;
    case 0x30DB:
        v = 0x30F4;
        break;
    case 0x304C: return -1; case 0x304D: return -1; case 0x304E: return -1; case 0x304F: return -1;
    case 0x3050: return -1; case 0x3051: return -1; case 0x3052: return -1; case 0x3053: return -1;
    case 0x3054: return -1; case 0x3055: return -1; case 0x3056: return -1; case 0x3057: return -1;
    case 0x3058: return -1; case 0x3059: return -1; case 0x305A: return -1; case 0x305B: return -1;
    case 0x305C ... 0x30DA:
        return -1;
    default:
        return -1;
    }
    func_001493C8(&a, v);
    return 1;
}
