s32 close_get_vlink_offset__Fi(s32 arg0) {
    return (arg0 != 0) ? -1 : 0x10;
}
s32 close_get_key_offset__Fi(s32 arg0) {
    switch (arg0) {
    case 0: return 0x18;
    case 1: return 0x28;
    default: return -1;
    }
}
extern s32 D_011C3C98;
extern s32 D_011C3E68;
s32 *get_errno_constant__Fi(s32 arg0) {
    s32 *var_8 = &D_011C3C98;
    s32 var_6 = 0;
    if (arg0 == D_011C3E68) {
        var_8 = (s32*)(*((s32*)&D_011C3E68 + 1)); /* placeholder */
    }
    return var_8;
}
s32 uerror_remap_os_error_code__Fi(s32 arg0) {
    return -1;
}
