extern s32 D_001BB6B8[], D_001BB6C0[]; extern char D_010C1EB0[];
s32 func_0011ADE8(char *, char *); s32 func_0015826C(s32,s32,s32,void*,s32); s32 func_00158E40(s32,void*,s32,void*,s32);
void func_001A42B8(char *,void *); s32 func_001A444C(char *);
void func_0010B0E0(void *arg0) {
 char tmp[16]; void *p; s32 h=D_001BB6C0[0],r;
 func_001A42B8(D_010C1EB0+D_001BB6B8[0],arg0);
 D_001BB6B8[0]++; D_010C1EB0[D_001BB6B8[0]]=0; tmp[0]=0;
 r=func_0011ADE8(D_010C1EB0,tmp);
 if(r==1) { if(!func_00158E40(h,arg0,9,&p,1)) D_001BB6B8[0]=0; }
 else { p=tmp; if(!func_0015826C(h,0,9,&p,1) || (r==2 && !func_00158E40(h,D_010C1EB0,9,&p,1))) D_001BB6B8[0]=0; else D_001BB6B8[0]=func_001A444C(D_010C1EB0); }
}
