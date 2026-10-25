typedef struct { s32 v[4]; } Mix;
s32 SignalSema_2(s32); s32 WaitSema_2(s32); s32 func_002D8270(void *,s32,s32,void *,s32,void *,s32,s32,s32); void func_00302560(void *);
void *memcpy(void *, const void *, unsigned int);
extern s32 *D_00447F74[]; extern s32 D_00447F7C[]; extern char D_0047C598[]; extern char D_0047C5B8[]; extern u8 D_008EA780[];
s32 func_002EA718(s32 arg0, Mix *mr) {
 s32 result;
 if (D_00447F7C[0] == -1) return 0x8000000A;
 if (mr == 0) {
  func_00302560(D_0047C5B8);
  return 0x80000004;
 }
 WaitSema_2(D_00447F7C[0]);
 D_00447F74[0][3] = arg0;
 memcpy(&D_00447F74[0][8], mr, sizeof(Mix));
 if (func_002D8270(D_008EA780, 0xC, 0, D_00447F74[0], 0x30, D_00447F74[0], 0x30, 0, 0) == 0) {
  result = D_00447F74[0][0];
  SignalSema_2(D_00447F7C[0]);
  return result;
 }
 func_00302560(D_0047C598);
 SignalSema_2(D_00447F7C[0]);
 return 0x80000000;
}
