typedef struct O { char p0[0x48]; void *vt; char p1[0x820]; int idx; } O;
extern int D_00485E40;
extern O *D_00436FA8[];
extern char D_0044FFD8[];
extern void func_00194300(void *);
extern void func_00164050(void *,int);
extern void func_00141658(void *,int);
extern void func_001447D8(void *);
void func_00270598(O *a, int f){
 int i;
 a->vt = D_0044FFD8;
 for(i=a->idx; i<D_00485E40-1; i++){
  O *n = D_00436FA8[i+1];
  D_00436FA8[i] = n;
  n->idx--;
 }
 D_00485E40--;
 func_00194300((char*)a+0x858);
 func_00164050((char*)a+0x78,0);
 func_00141658(a,0);
 if(f&1) func_001447D8(a);
}
