extern char D_00470EC8[],D_00470ED8[],D_00470EE8[],D_00470F00[],D_00470F18[],D_00485508[];
s32 func_00165DC0(char*,char*); s32 func_00304168(void*,char*); void func_0024D308(s32,void*,f32);
typedef struct { s16 off; s16 pad; void (*fn)(void*); } Call;
void func_00224D70(void *a){void*p;Call*c;void*x;if(*(s32*)((char*)a+0x120)==0)return;if((*(s32*)((char*)a+0x11c)&0xc)==0)return;p=*(void**)((char*)a+0x48);c=(Call*)((char*)p+0x88);c->fn((char*)a+c->off);if(func_00304168((char*)a+0x4c,D_00470EC8)==0){func_0024D308(func_00165DC0(D_00470ED8,D_00470EE8),a,1.0f);return;}x=(void*)func_00165DC0(D_00485508,D_00470F00);func_0024D308((s32)x,a,1.0f);x=(void*)func_00165DC0(D_00485508,D_00470F18);func_0024D308((s32)x,a,1.0f);}
