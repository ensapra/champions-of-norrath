extern u8 D_010EA1E8[];
extern u8 D_010EA950[];
s32 func_00171AE0(s32, void *, s32, void *);

s32 func_00175178(s32 id) {
    u32 *countp = (u32 *)D_010EA950;
    u32 count = *countp;
    if (count >= 0x20) return -1;
    ((s32 *)(D_010EA950 + count * 4))[1] = id;
    if (id != 0xFFFF) {
        u32 obj = *(u32 *)(D_010EA1E8 + id * 0x28);
        u32 n = *countp;
        void *entry = D_010EA950 + n * 4;
        *countp = n + 1;
        *(u32 *)((u8 *)entry + 0x90) = obj;
        func_00171AE0(obj, entry, obj, D_010EA950);
    } else {
        u32 n = *countp;
        void *entry = D_010EA950 + n * 4;
        *countp = n + 1;
        *(u32 *)((u8 *)entry + 0x90) = 0;
    }
    count = *countp;
    if (count < 2) return -1;
    return ((s32 *)(D_010EA950 + (count - 2) * 4))[1];
}
