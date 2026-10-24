extern u8 D_0037F988[];
extern char D_004859A8[];
extern char D_00474708[];
void func_00303EB8(void *, char *, void *);
void *func_00166E30(void *);
void *func_00165DC0(void *, char *);
void *func_0024F6C8(void) {
 u8 scratch[0x50];
 u8 *item;
 u8 *p;
 s32 i;
 func_00303EB8(scratch, D_004859A8, D_0037F988);
 if (func_00166E30(scratch)) {
  item = func_00165DC0(scratch, D_00474708);
  p = item;
  if (*(s8 *)p > 0) {
   i = 0;
   do {
    p += 0x50;
    i++;
   } while (i < *(s8 *)p);
  }
  return item;
 }
 return 0;
}
