void *D_00480430;
void func_00180D1C(void *, void *, s32);
void func_0017FEFC(s32 a, s32 b, s32 c, s32 d) {
 void *p;
 p = D_00480430; *(s32 *)((s8 *)p + 0xC0) = a;
 p = D_00480430; *(s32 *)((s8 *)p + 0xC4) = b;
 p = D_00480430; *(s32 *)((s8 *)p + 0xC8) = c;
 p = D_00480430; *(s32 *)((s8 *)p + 0xCC) = d;
}
void func_0017FEC4(s32 i, s32 a, s32 b, s32 c, s32 d) {
 void *p;
 s32 o = i * 16;
 p = D_00480430; *(s32 *)((s8 *)p + o + 0x80) = a;
 p = D_00480430; *(s32 *)((s8 *)p + o + 0x84) = b;
 p = D_00480430; *(s32 *)((s8 *)p + o + 0x88) = c;
 p = D_00480430; *(s32 *)((s8 *)p + o + 0x8C) = d;
}
s32 func_0017FF20(void *a) {
 s32 v;
 void *p;
 f32 f;
 func_00180D1C(a, &v, 0);
 p = D_00480430;
 f = (f32)v;
 f = f + (f32)*(s32 *)((s8 *)p + 0x3C) * *(f32 *)((s8 *)p + 0x58);
 return (s32)f;
}
