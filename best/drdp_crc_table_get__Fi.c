/* identical to func_00279BF8 (matched), with its names changed by decompdecomp */
s8 D_004844B4;
s32 D_008D57A8[100];
s32 func_00280488(void) { return D_004844B4 ? 0x10D : 0x14E; }
s32 func_002804A0(void) { return D_004844B4 ? 9 : 4; }
s32 drdp_crc_table_get__Fi(s32 i) { return D_008D57A8[i]; }
void func_00279C10(void *a0, s32 a1, void *a2) {
    void *p = ((void **)D_008D57A8)[((s32 *)a0)[7]];
    s32 n = *(s32 *)((char *)p + 4);
    s32 idx = (((s32 *)a0)[8] + a1) % n;
    void *rec = (char *)p + 0x14 + (idx << 6);
    *(s64 *)((char *)a2) = *(s64 *)rec;
    *(s32 *)((char *)a2 + 8) = *(s32 *)((char *)rec + 8);
}
