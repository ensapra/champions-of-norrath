s32 D_004844C8;
s32 D_00486974;
s32 D_00486984;
extern u8 D_006E93D0[];
extern u8 D_006E5E80[];
extern s32 D_006E9390[];

void func_00174328(s32 a, s32 b){
  if (b == 0xFFFF && a == 1)
    *(s32 *)D_006E93D0 = D_004844C8;
}

void func_00172948(s32 a){
  s32 i = D_00486984;
  D_006E9390[i*2] = a;
  D_006E9390[i*2+1] = 0;
  D_00486984 = i + 1;
}

void func_001729C8(void *a){
  s32 v = *(s32 *)((u8 *)a + 0x14);
  s32 *p;
  if (!v) return;
  p = (s32 *)(D_006E5E80 + (((v - D_00486974) >> 12) << 3));
  *(s32 *)((u8 *)a + 0x14) = 0;
  if (!p) return;
  *p = 0;
  do {
    p = (s32 *)p[1];
    *p = 0;
  } while (p);
}
