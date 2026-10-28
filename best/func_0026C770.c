extern s32 D_00484F44; extern f32 D_004820A8, D_004820AC, D_004820B0;
extern s32 D_0042A3E8[]; extern u8 D_00408600[]; extern char D_0037EE80[];
extern s32 func_00143A80(void*,char*,s32); extern f32 func_0015A070(s32); extern f32 func_0015A100(s32);
extern f32 func_0015A1D0(void*,void*,void*); extern void func_00303F50(s32,char*,s32*,s32*,s32*,s32*);
void func_0026C770(u8 *out, u8 *p, s32 flag) {
  f32 dir[3]; f32 w[3]; f32 up[3] = {0,0,1.0f};
  f32 nrm[3]; f32 view[3]; f32 rot[3];
  s32 o0, o1, o2, o3, t, i, k, ang = 0;
  t = func_00143A80(p, "dialogOffset", 0);
  if (t) func_00303F50(t, "%d,%d,%d,%d", &o0, &o1, &o3, &o2);
  else { o2 = 0; o0 = 0; o1 = 0; }
  if (flag) {
    s32 sel[3]; s32 *e;
    dir[0] = func_0015A070(*(s16*)(p+0x38) + 0x4000);
    dir[1] = func_0015A100(*(s16*)(p+0x38) + 0x41c2);
    dir[2] = 0;
    sel[0] = sel[1] = sel[2] = 0;
    for (i = 0, e = D_0042A3E8; i < D_00484F44; i++, e++) {
      u8 *q = *(u8**)(D_00408600 + *e * 0x5db0 + 0x5570);
      f32 dx = *(f32*)(q+0x10) - *(f32*)(p+0x10);
      f32 dy = *(f32*)(q+0x14) - *(f32*)(p+0x14);
      f32 dz = *(f32*)(q+0x18) - *(f32*)(p+0x18);
      if (dx*dx + dy*dy + dz*dz < 80.0f) {
        f32 l, d;
        w[0] = dx; w[1] = *(f32*)(q+0x14) - *(f32*)(p+0x14); w[2] = 0;
        l = 1.0f / __builtin_sqrtf(w[0]*w[0] + w[1]*w[1]);
        w[0] *= l; w[1] *= l; w[2] *= l;
        d = w[0]*dir[0] + w[1]*dir[1] + w[2]*dir[2];
        if (d < D_004820A8) sel[2] = 1;
        else if (D_004820AC < d) sel[0] = 1; else sel[1] = 1;
      }
    }
    k = 0;
    if (sel[0] || sel[1] || sel[2]) {
      k = 0;
      while (k < 3 && sel[k]) k++;
      if (k == 3) k = 1;
    } else k = 1;
    ang = 0x1770 - k * 0x1770;
  }
  out[0] = 0;
}
