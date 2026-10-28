extern s32 D_010D444C[4],D_010D4468[4],D_010D446C[4],D_010D4470[4],D_010D4474[4],D_010D4478[4],D_010D447C[4],D_010D4480[4];
typedef struct { s32 pad[2]; s32 v; } A;
extern void func_0014CE84(void*, s32*, s32*);
extern void func_0014CF30(void*, s32*, s32*);
extern void func_0014CE44(void*, s32, s32);
extern void func_00149AE4(s32, s32);
void func_001424E8(void *a, void *b, A *p) {
 s32 x, y, z, w, q, d, u, m, r, oy, k;
 if (D_010D447C[0] == 0) return;
 d = D_010D4474[0] - D_010D4470[0];
 func_0014CE84(a, &x, &y);
 func_0014CF30(a, &z, &w);
 oy = y;
 y = (p->v >> 4) - D_010D4480[0];
 if (y < D_010D4470[0]) { y = D_010D4470[0]; }
 q = y;
 if (D_010D4474[0] < q + w) { y = D_010D4474[0] - w; }
 q = y;
 if (q != oy) {
  func_0014CE44(a, x, y);
  q = y;
 }
 u = D_010D446C[0] - D_010D4468[0];
 m = d * D_010D4468[0] / D_010D446C[0];
 if (m < 0x28) m = 0x28;
 r = (q - D_010D4470[0]) * u / (d - m);
 if (r < 0) r = 0;
 D_010D4478[0] = r;
 k = r;
 if (u < k) { D_010D4478[0] = u; k = u; }
 func_00149AE4(D_010D444C[0], k);
}
