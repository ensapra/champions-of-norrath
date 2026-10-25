typedef struct { s32 pad[2]; s32 field8; s32 field4; } S;
extern s32 D_001C4CBC; extern u8 D_010C7B50[]; extern char D_001C6000[];
void func_00158524(void); void func_00124BA8(void); void func_001A42B8(void *,void *,void *);
void func_00125260(void*a,void*b,S*c) {
 s32 n=c->field8+1;
 switch(n) {
 case 0: break;
 case 1: { s32 k=D_001C4CBC-1; if(k<0)k=0; D_001C4CBC=k; D_010C7B50[k]=0; break; }
 case 2: { s32 k=D_001C4CBC-1; if(k<0)k=0; D_001C4CBC=k; D_010C7B50[k]=0; func_00158524(); func_00124BA8(); c->field4=0; break; }
 case 3: c->field4=0; break;
 case 4: D_001C4CBC=0; D_010C7B50[0]=0; break;
 case 5: case 6: case 7: break;
 default: break;
 }
 func_001A42B8(D_001C6000,D_010C7B50,0);
}
