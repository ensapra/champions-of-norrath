typedef struct { char name[4]; s32 timer; char pad[0x50]; } Ent;
extern Ent D_0034BEB8[];
extern Ent D_00332FD0[];
extern char D_00484068[];
extern char D_00484070[];
extern u8 D_006E1C40[];
s8 D_00484060[2];
s32 D_00484064;
s8 D_00484078[4];
s8 D_00483829;
extern s8 func_002D46E0(s32);
extern s32 func_00167708(s32, s32 *);
extern void func_001678F0(Ent *, s32 *, void *);
extern s32 func_00303EB8(char *, char *, ...);
void func_00167E68(void) {
  s32 sp[4];
  s32 i, k, idx;
  Ent *e;
  if (D_00484064++ % 180 == 0) {
    D_00484060[0] = func_002D46E0(0);
    D_00484060[1] = func_002D46E0(1);
    if (D_00484060[1] >= 2) D_00484060[1] = 0;
    for (i = 0; i < 4; i++) {
      if (i < D_00484060[0]) { k = 0; idx = i; }
      else { k = 1; idx = i - D_00484060[0]; }
      if (D_00484060[k] >= 2)
        func_00303EB8(D_0034BEB8[i].name, D_00484068, k + 1, D_00484078[idx] + 0x41);
      else
        func_00303EB8(D_0034BEB8[i].name, D_00484070, D_00484078[k] + 1);
    }
  }
  for (i = 0; i < 4; i++) {
    if (func_00167708(D_00484078[i], sp)) D_0034BEB8[i].timer = 30;
    else {
      s32 v = D_0034BEB8[i].timer - 1;
      D_0034BEB8[i].timer = v < 0 ? 0 : v;
    }
    e = &D_0034BEB8[i];
    func_001678F0(e, sp, D_006E1C40 + i * 8);
    if (D_00483829 == 0) D_00332FD0[i] = *e;
  }
}
