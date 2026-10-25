s32 func_001107E8(s32,void*,s32,void*,void*); s32 func_0011B8D0(s32); s32 func_0011BA18(s32); void func_0011E420(s32,s32,s32,s32,void*,s32); s32 func_0011CEF0(s32,s32,s32);
extern char D_010C6E58[]; extern char D_010C6E5C[]; extern char D_010C6EBC[]; extern char D_010C6EA8[]; extern char D_010C6EAC[]; extern char D_010C6EB0[]; extern char D_010C6EB4[]; extern char jtbl_004C006C[];
s32 func_00121768(s32 a0,s32 a1,s32 v6,s32 v7,void *v8,s32 v9){
 s32 state=*(s32*)D_010C6EBC,i,j; 
 if(state<0) goto end; if(state>=7) goto end;
 *(s32*)D_010C6E58=func_001107E8(func_0011BA18(0xF2),D_010C6E5C,3,D_010C6EA8,D_010C6EAC);
 *(s32**)D_010C6EB0=(s32*)func_0011B8D0(8); i=0;
 do { ((s32*)*(s32**)D_010C6EB0)[i]=func_0011B8D0(0x960); i++; } while(i<2);
 *(s32*)D_010C6EB4=0; v8=jtbl_004C006C+0x916c; v7=0;
 do { v6=0;j=3;do{s32 *tab=*(s32**)D_010C6EB0;s8 *p=(s8*)(unsigned long)tab[v7]+v6;v9=((s8*)v8)[1];p[0]=((s8*)v8)[0];p[1]=(s8)v9;v6+=0x258;j--;}while(j>=0);v7++;}while(v7<2);
 end:
 func_0011E420(*(s32*)D_010C6EA8,*(s32*)D_010C6EAC,v6,v7,v8,v9);
 return func_0011CEF0(*(s32*)D_010C6E58,*(s32*)D_010C6EBC,11);
}
