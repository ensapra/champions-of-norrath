extern s32 D_0042DE38[];
extern char D_00474640[], D_00474650[], D_00474668[], D_00474678[], D_004746A0[], D_004746C0[], D_004746D8[], D_00485970[];
extern s32 D_007DD280[], D_007DD290[], D_007DD2C0[], D_007DD7E0[], D_007DD840[], D_007DD880[];
void func_0024BAA0(void);
s32 func_002DC138(s32);
s32 func_002DC420(void);
void func_002D70D0(char*,...);
void func_002D8270(void*,...);
void func_00172890(char*,...);
void func_0024BC38(s32 arg0) {
 s32 i=0,n=0,size,slot,blocks,idx,cur,end,j,k;
 if(arg0){ D_0042DE38[0]=0x32000; func_0024BAA0(); }
 for (;;) {
 size=func_002DC420(); func_002D70D0(D_00474640,size>>10);
 if(size<0x4000) break;
 idx=i+1; blocks=1; cur=D_0042DE38[i]+0x1000;
 if(idx<3) {
 end=cur+D_0042DE38[idx]+0x1000;
 if(size>=end) {
 cur=end; blocks=2;
 for(j=idx+1;j<3;j++){ end=cur+D_0042DE38[j]+0x1000; if(size<end) break; cur=end; blocks++; }
 } 
 }
 end=(cur<size)?size:cur;
 func_002D70D0(D_00474650,cur,size,D_0042DE38);
 slot=func_002DC138(end);
 if(!slot) func_00172890(D_00474668,0x4CE,D_00485970);
 if(D_007DD280[n]) func_00172890(D_00474668,0x4CF,D_00474678);
 D_007DD280[n++]=slot;
 if(blocks==1){ D_007DD290[i*0x71+0x2C]=slot+0x800; D_007DD290[i*0x71+0x30]=end-0x1000; i=idx; }
 else { for(k=0;k<blocks;k++){ s32 v=D_0042DE38[k]; D_007DD290[i*0x71+0x2C]=slot+0x800; D_007DD290[i*0x71+0x30]=v; i=idx; slot=slot+v+0x1000; idx=i+1; } }
 if(i>=4) func_00172890(D_00474668,0x4E0,D_004746A0);
 if(i>=3) break;
 }
 for(i=i;i<3;i++){ D_007DD2C0[i*0x1C4-1]=0; D_007DD2C0[i*0x1C4]=0; }
 func_002D70D0(D_004746C0,n);
 for(i=0;i<3;i++){
 char *p=(char*)&D_007DD290[i*0x71+0x30];
 func_002D70D0(D_004746D8,i,*(s32*)(p-4),*(s32*)p);
 *(s32*)(p-0x20)=0;
 *(u64*)D_007DD880=*(u64*)((char*)&i+0x8);
 *(u32*)((char*)D_007DD880+8)=*(u32*)((char*)&i+8);
 *(char*)(p-0x30)=0;
 func_002D8270(D_007DD7E0,0x30,0,D_007DD880,0xC,D_007DD840,0x40,0,0);
 }
 func_002D8270(D_007DD7E0,0x20,0,D_007DD880,0,D_007DD840,0x40,0,0);
}
