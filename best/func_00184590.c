extern s32 func_00183368(void*,void*,s32); extern void func_001A2850(void*),func_0019BB84(void*,s32),func_00187808(void*,s32),func_00181A88(s32),func_00197898(void*,s32,s32),func_00183588(void*,void*),func_00187620(void*,void*),func_001835A0(void*,s32*),func_00186AC0(s32,s32),func_001835B0(void*,s32*),func_001978B8(s32,s32); extern s32 func_00183568(void*,s32,s32*); extern void func_001844A0(s32,s32*,s32*,s64,s64); extern char func_001D1C80[],func_001D7EB0[],func_001E23F8[],jtbl_004C006C[]; extern u64 D_003627C0[]; extern s32 D_003628C0[]; extern s32 L_001D2328;
void func_00184590(void *arg0,s32 arg1,s32 *arg2,s32 arg3){
 s32 sp[4],i,r; char *g=func_001D1C80+0x6C0,*cfg=func_001E23F8+0x48,*mode=func_001D7EB0+0x100;
 func_001A2850(jtbl_004C006C+0xD9A4); *(s32*)(g+0x5C5C)=1; *(s32*)(cfg+0x58)=255; *(s32*)(g+0x400)=0; func_0019BB84(g-0x10,1);
 if((u32)(arg3-1)<255) *(s32*)(cfg+0x58)=arg3;
 if(arg1==-1) func_00187808(mode,1); else func_00187808(mode,0);
 r=func_00183368(arg0,g,*(s32*)(cfg+0xBC)); if(r>=0 && r!=*(s32*)(g+0x5C54)) func_00181A88(-1);
 i=0; do { if(((s32*)(g+0x5C38))[i]>=0) {func_00183568(arg0,i,sp); func_00197898(g+0x470+i*0xE90,sp[0],sp[1]); *(s64*)(g+0x5C08+i*8)=*(s64*)sp;} i++; } while(i<6);
 func_00183588(arg0,sp); func_00187620(mode,sp); func_001835A0(arg0,sp); func_00186AC0(sp[0],sp[1]); func_001835B0(arg0,sp); func_001978B8(sp[0],sp[1]);
 {u64 *d=D_003627C0,*s=(u64*)arg0,*e=(u64*)((char*)arg0+0x100); while(s!=e){d[0]=s[0];d[1]=s[1];d[2]=s[2];d[3]=s[3];s+=4;d+=4;}}
 D_003628C0[0]=arg2[0]; if(arg2[0]) {i=1; do {s32 v=arg2[i]; if(i>=256) break; D_003628C0[i]=v; i++; if(v==0) break;} while(1);}
 if(L_001D2328==-1) func_001844A0(-1,sp,sp,0,0);
}
