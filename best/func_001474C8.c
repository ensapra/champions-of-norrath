typedef struct { char pad[0x10]; s32 mode; } Arg;
extern s32 D_001BD8AC[];
extern s32 D_001BB6C4[];
extern s32 D_010D4500[];
extern s32 D_010D4508[];
extern s32 D_010D4510[];
extern s32 D_010D4518[];
extern s32 func_001523D0(s32);
extern void func_00152520(s32);
extern void func_0014B6F4(s32);
extern void func_00104F30(s32);
extern void func_00106E30(s32, s32);
extern void func_001389A0(s32);
static inline void rel(s32 *p) {
  s32 h, d;
  if (*p) {
    if (func_001523D0(D_001BD8AC[0]) == *p) func_00152520(*p);
    func_0014B6F4(*p);
    func_00104F30(*p);
    func_00106E30(0, *p);
    func_00106E30(1, *p);
    d = D_001BB6C4[0];
    h = *p;
    if (d == h) D_001BB6C4[0] = 0;
    func_001389A0(h);
    *p = 0;
  }
}
s32 func_001474C8(Arg *a) {
  s32 i, off;
  s32 *y;
  switch (a->mode) {
  case 1:
    y = D_010D4518; off = 0;
    for (i = 0; i < 2; i++) { rel((s32 *)((char *)D_010D4510 + off)); rel(y); y++; off += 4; }
    return 0;
  case 2:
    y = D_010D4500; off = 0;
    for (i = 0; i < 2; i++) { rel((s32 *)((char *)D_010D4508 + off)); rel(y); y++; off += 4; }
    return 0;
  case 5:
    return 1;
  }
  return 0;
}
