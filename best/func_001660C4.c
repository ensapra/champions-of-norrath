typedef struct { u64 d[0xE0]; } R;
typedef struct { char p0[0x960]; s32 f960; char p1[0x10]; R r[2]; } Q;
extern s32 D_0048041C;
void func_00170584();
void func_001660C4(char *arg0) {
  u32 i, j;
  char *p = arg0 + 0xAE0;
  char *p2 = arg0 + 0xD50;
  char *p3;
  Q *q = (Q *)arg0;
  func_00170584(p, 0, 0x9B, 5, 0x9C, 1, 0x9D, 0, 0x9E, 0, 0x9F, q->f960, 0xA0, 0, 0xA1, 1, 0xA2, D_0048041C, 0x67, 0, 0);
  for (i = 0; i < 0x14; i++) {
    char *n = p + 0x20;
    func_00170584(p + 0x10, 1, 0);
    func_00170584(n, 5, 0);
    p = n;
  }
  p3 = p2;
  func_00170584(p2, 0, 0x9B, 4, 0x9C, 1, 0x9D, 0, 0x9E, 0, 0x9F, q->f960, 0xA0, 0, 0xA1, 1, 0xA2, D_0048041C, 0x67, 0, 0);
  for (j = 0; j < 0x48; j++) {
    char *n = p3 + 0x20;
    func_00170584(p3 + 0x10, 1, 0);
    func_00170584(n, 5, 0);
    p3 = n;
  }
  *(R *)(arg0 + 0x970 + 0x870) = *(R *)(arg0 + 0x970 + 0x170);
}
