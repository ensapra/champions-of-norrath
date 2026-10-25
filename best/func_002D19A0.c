typedef struct { s16 a; s16 mode; s16 b; } ModeInfo;
typedef struct { s64 pmode, smode2, dispfb, display, bgcolor; } DispEnv;
extern char D_0047B178[];
ModeInfo *func_002D1878(s32, s32, s32, s32, s32);
s32 func_002D18F0(u16);
void _GetGsDxDyOffset_2(s16, s32*, s32*, s32*, s32*);
void func_002D70D0(char*, s16, u16);
void func_002D19A0(DispEnv *disp, s16 psm, s16 w, s16 h, s16 dx, s16 dy) {
  s32 off[4];
  ModeInfo *m = func_002D1878(psm << 16, w << 16, h << 16, dx << 16, dy << 16);
  s32 mag;
  if ((u16)(m->mode - 2) < 2 && 0) {}
  if ((u32)((u16)m->mode - 2) >= 2 && func_002D18F0(m->mode)) {
    _GetGsDxDyOffset_2(m->mode, off, off + 1, off + 2, off + 3);
  } else {
    off[3] = 0; off[2] = 0; off[1] = 0; off[0] = 0;
  }
  disp->pmode = 0x66;
  disp->smode2 = m->a ? (m->b ? 3 : 1) : 2;
  disp->dispfb = ((psm & 0xF) << 15) | ((((s32)(w + 63) >> 6) & 0x3F) << 9);
  switch (m->mode) {
  case 2:
    mag = (w + 2559) / w;
    if (m->a == 1)
      disp->display = ((s64)(m->b ? h * 2 - 1 : h - 1) << 44) | ((s64)(mag * w - 1) << 32) | ((s64)(mag - 1) << 23) | ((dx * mag + off[0] + 0x27C) & 0xFFF) | ((s64)((dy + off[1] + 0x32) & 0xFFF) << 12);
    else
      disp->display = ((s64)(h - 1) << 44) | ((s64)(mag * w - 1) << 32) | ((s64)(mag - 1) << 23) | ((dx * mag + off[0] + 0x27C) & 0xFFF) | ((s64)((dy + off[1] + 0x19) & 0xFFF) << 12);
    break;
  case 3:
    mag = (w + 2559) / w;
    if (m->a == 1)
      disp->display = ((s64)(m->b ? h * 2 - 1 : h - 1) << 44) | ((s64)(mag * w - 1) << 32) | ((s64)(mag - 1) << 23) | ((dx * mag + off[0] + 0x290) & 0xFFF) | ((s64)((dy + off[1] + 0x48) & 0xFFF) << 12);
    else
      disp->display = ((s64)(h - 1) << 44) | ((s64)(mag * w - 1) << 32) | ((s64)(mag - 1) << 23) | ((dx * mag + off[0] + 0x290) & 0xFFF) | ((s64)((dy + off[1] + 0x24) & 0xFFF) << 12);
    break;
  case 0x50:
    disp->display = ((s64)(h - 1) << 44) | ((s64)(w * 2 - 1) << 32) | ((((0x2D0 - w) / 2) * 2 + off[0] + (dx * 2 + 0xE8)) & 0xFFF) | 0x800000 | ((s64)((dy + off[1] + 0x23) & 0xFFF) << 12);
    break;
  default:
    func_002D70D0(D_0047B178, m->mode, m->a);
    break;
  }
  disp->bgcolor = 0;
}
