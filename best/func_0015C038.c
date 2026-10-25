#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((u8 *)(expr) + (offset)))
extern u8 D_003347C0[];
void func_0015C038(u8 *arg0) {
 s32 v7,v8,v9,v62,v82,v92,v63,v83,v93; u8 *v6; u8 t2; void *v5,*v52,*v53,*v72,*v73; s32 *v83p;
 v6=arg0;v9=0;v8=0;do{v7=0xd4;v5=(v8*0x10)+D_003347C0+4;
loop2:v7-=4;M2C_FIELD(v5,u8*,-3)=(u8)((M2C_FIELD(v5,u8*,-3)&0xf)|(*v6&0xf0));t2=*v6;++v6;M2C_FIELD(v5,u8*,1)=(u8)((M2C_FIELD(v5,u8*,1)&0xf)|((t2&0xf)*0x10));v5+=8;if(v7>=0)goto loop2;v9+=2;v8+=0x36;}while(v9<0xd8);
 v92=0;v82=0;v72=D_003347C0+0x1ae;do{v62=0xd4;v52=(v82*0x10)+D_003347C0+2;
loop6:v62-=2;M2C_FIELD(v52,u8*,1)=(u8)((M2C_FIELD(v52,u8*,1)&0xf)|(((s32)(((u8)M2C_FIELD(v52,u8*,-1)>>4)+((u8)M2C_FIELD(v52,u8*,3)>>4)+1)>>1)*0x10));v52+=4;if(v62>=0)goto loop6;v92+=2;v82+=0x36;M2C_FIELD(v72,u8*,1)=(u8)((M2C_FIELD(v72,u8*,1)&0xf)|(M2C_FIELD(v72,u8*,-1)&0xf0));v72+=0x360;}while(v92<0xd8);
 v93=0;v83p=(s32*)D_003347C0;v73=D_003347C0+0x16ad0;do{v53=(int)v83p+0x1b0;v63=0xd4;
loop10:v63-=2;M2C_FIELD(v53,u8*,1)=(u8)((M2C_FIELD(v53,u8*,1)&0xf)|(((s32)(((u8)M2C_FIELD(v53,u8*,-0x1af)>>4)+((u8)M2C_FIELD(v53,u8*,0x1b1)>>4)+1)>>1)*0x10));v53+=0x360;if(v63>=0)goto loop10;v93 += 1;v83p+=2;M2C_FIELD(v73,u8*,1)=(u8)((M2C_FIELD(v73,u8*,-0x1af)&0xf0)|M2C_FIELD(v73,u8*,1)&0xf);v73+=2;}while(v93<0xd8);
}
