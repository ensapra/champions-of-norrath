extern u8 func_001D1C80[],func_001D7EB0[],func_001DC2C0[],func_001E23F8[]; extern void func_00181CE0(); extern u32 *func_0019BC7C(void); extern s32 func_001A444C(void *);
s32 func_001825C0(s32 mode,u32 *arg1,s32 arg2,void *arg4){u32 sp[0x200];u8 *p=func_001D7EB0+0x410;u32 i=0,id=arg2&0xffff,num=*(u32 *)(p+0xc),max=*(u32 *)(p+4);u32 *items=(u32 *)*(u32 *)(p+8);s32 matches=0,total;
if(arg1){if(num){u32 *row=items+1,*data=items;for(i=0;i<num;i++){if(*row==0&&*arg1){u32 *q=arg1,*v=data+i*10;while(*q){if(*v==*q)return 0;q++;}}matches++;row+=10;}}}
else if(id==0)return 0;else if(max){u32 *q=(u32 *)*(u32 *)p;for(i=0;i<max;i++){if(q[i]==id)return 0;matches++;}}
{u8 *p2=func_001DC2C0+0xe30;u32 n=*(u32 *)(p2+0xc),*items2=(u32 *)*(u32 *)(p2+8);for(i=0;i<n;i++){if(arg1&&*arg1){u32 *q=arg1,*v=items2+i*10;while(*q){if(*v==*q)return 0;q++;}}matches++;}}
func_00181CE0(func_001D1C80+0x6c0,sp,id,num,arg4);total=func_001A444C(sp)+matches;if(mode==1){func_00181CE0(arg1,sp);total+=func_001A444C(sp);}else if(mode==2){func_00181CE0(arg1,sp);total+=func_001A444C(sp);func_00181CE0(func_0019BC7C(),sp+0x100);total-=func_001A444C(sp+0x100);}else return 1;return *(u32 *)(func_001E23F8+0xa0)<(u32)total?2:1;}
