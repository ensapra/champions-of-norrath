extern char D_008E04C0[], D_008E1100[], D_008E1BC0[];
extern s32 D_004449F4[];
s32 CreateSema_2(void *); s32 DeleteSema_2(s32); s32 WaitSema_2(s32);
s32 func_002D7858(void *, s32);
s32 func_002D8270(void *, s32, s32, void *, s32, void *, s32, s32, s32);
s32 func_002D8EF8(s32); void func_002D8F28(void); void func_002D9028(void);
s32 func_002DB260(u8 *arg0, u8 *arg1) {
 struct { s32 f[8]; s32 result; } local;
 u8 *data = (u8 *)D_008E04C0;
 u8 *d2;
 s32 i, sema, status;
 u8 c;
 func_002D8EF8(0x11);
 if (D_004449F4[0] == 0) func_002D9028();
 c = arg0[0];
 data[0xC] = c;
 i = 0;
 if (c != 0) {
  while (++i < 0x400) { c = arg0[i]; data[0xC + i] = c; if (c == 0) break; }
 }
 if (i == 0x400) data[0x40B] = 0;
 c = arg1[0];
 data[0x40C] = c;
 i = 0;
 if (c != 0) {
  d2 = data + 0x40C;
  while (++i < 0x400) { c = arg1[i]; d2[i] = c; if (c == 0) break; }
 }
 if (i == 0x400) data[0x80B] = 0;
 local.f[2] = 0; local.f[1] = 1; local.f[5] = 0;
 sema = CreateSema_2(local.f);
 *(void **)(data + 4) = &local.result; *(s32 *)(data + 8) = 4; *(s32 *)data = sema;
 func_002D7858(D_008E04C0, 0x80C);
 if (func_002D8270(D_008E1BC0, 0x11, 0, D_008E04C0, 0x80C, D_008E1100, 4, 0, 0) < 0) { DeleteSema_2(sema); func_002D8F28(); return -11; }
 status = *(s32 *)((u32)D_008E1100 | 0x20000000);
 func_002D8F28();
 if (status == 0) { DeleteSema_2(sema); return -11; }
 WaitSema_2(sema); DeleteSema_2(sema); return local.result;
}
