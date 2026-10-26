s32 D_0048655C; s32 D_004844BC; f32 D_00483064; f32 D_00483068; extern u8 D_00438F08[]; extern u8 D_00438F14[];
s32 func_001815C8(void*,s32,s32,s32,s32,s32,s32,s32,f32,f32);
s32 func_00181660(void*,void*,s32,s32,s32,s32,s32,s32,f32,s32,s32);
void func_002C07E0(void){s32 i=0,off=0;u8 *p=D_00438F08+0x30; u8 xbuf[32],ybuf[32];while(i<D_0048655C){u8 *sp=p;if(i!=9){func_001815C8(xbuf,0x40,0xff,0x40,0x10,D_004844BC,0,2,1000.0f,D_00483064);}else{func_001815C8(ybuf,0xff,0xff,0x40,0x10,D_004844BC,0,2,2000.0f,D_00483068);}
if(*(s16*)(sp+4)>0){s32 n=0;u16 *q=(u16*)(D_00438F14+i*0x40);do{u16 x=*q++;u8 *a=D_00438F08+((x&0x7fff)<<6);func_00181660(sp+0x30,a,0x40,0xff,0x40,0x20,0x40,0xff,1000.0f,0x40,0);n++;}while(n<*(s16*)(sp+4));}i++;off+=0x40;p+=0x40;}}
