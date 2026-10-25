typedef struct Ent {struct Ent *volatile next;volatile s32 val;s32 aux,pad;} Ent;
extern Ent *volatile D_0110D880;
s32 func_001B5C80(void);void func_001B5CD8(void);s32 func_001B6FE8(s32);
s32 func_001B7B18(u32 id){Ent *e=(Ent*)((id>>8)*16);s32 t=func_001B5C80();if((s32)id<0||((id^e->val)&255)){if(t)func_001B5CD8();return 0x80008002;}func_001B6FE8(e->val);{Ent *head=D_0110D880;D_0110D880=e;e->next=head;}e->val=0;if(t)func_001B5CD8();return 0;}
