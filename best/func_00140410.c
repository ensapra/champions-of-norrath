s32 func_00304168(const char*,const char*); s32 func_00304CFC(const char*); char *func_0030436C(char*,s32); void func_00304640(char*,const char*); extern u8 D_0047E1F1[]; s32 D_00486898; extern char *D_005182C0[512]; extern s32 D_00518AC0[512];
void func_00140410(char *name, s32 val) {
    char buf[0x200];
    s32 len, i, c, h, idx;
    if (*name == 0x22) {
        func_00304640(buf, name + 1);
        if (func_0030436C(buf, 0x22)) *func_0030436C(buf, 0x22) = 0;
        func_00304640(name, buf);
    }
    D_00486898++;
    len = func_00304CFC(name);
    h = 0;
    for (i = 0; i < len; i++) {
        c = name[i];
        if (D_0047E1F1[c] & 1) c += 0x20;
        h += c;
        h += h << 10;
        h ^= h >> 6;
    }
    h += h << 3;
    h ^= h >> 11;
    idx = h & 0x1FF;
    while (D_005182C0[idx]) {
        if (!D_00518AC0[idx] && !func_00304168(D_005182C0[idx], name)) break;
        idx = (idx + 1) & 0x1FF;
    }
    D_005182C0[idx] = name;
    D_00518AC0[idx] = val;
}
